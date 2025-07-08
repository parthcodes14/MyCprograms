#include <stdio.h>

int main()
{
    int orgnum, cubenum = 0;

    printf("Enter the number: ");
    scanf("%d", &orgnum);

    int temp = orgnum;

    while (temp > 0)
    {
        int remainder = temp % 10;
        cubenum = cubenum + (remainder * remainder * remainder);
        temp = temp / 10;
    }
    if (orgnum == cubenum)
    {
        printf("Armstrong number.\n");
    }
    else
    {
        printf("Not an Armstrong number.\n");
    }
    return 0;
}