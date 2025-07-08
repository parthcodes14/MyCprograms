// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int remainder, orgnum, reversednum = 0;

    printf("Enter the number: ");
    scanf("%d", &orgnum);

    int temp = orgnum;

    if (orgnum < 0)
    {
        printf("Negative numbers are not considered as palindrome.");
    }
    return 0;

    while (temp != 0)
    {
        remainder = temp % 10;
        reversednum = reversednum * 10 + remainder;
        temp = temp / 10;
    }
    if (orgnum == reversednum)
    {
        printf("%d is a palindrome.", orgnum);
    }
    else if (orgnum != reversednum)
    {
        printf("%d is not a palindrome.", orgnum);
    }

    return 0;
}