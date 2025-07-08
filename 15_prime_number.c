#include <stdio.h>

int main()
{
    int i, orgnum, count = 0;

    printf("Enter the number: ");
    scanf("%d", &orgnum);

    if (orgnum > 0)
    {
        for (i = 1; i <= orgnum; i++)
        {
            if (orgnum % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d is a prime number.\n", orgnum);
        }
        else
        {
            printf("%d is not a prime number.\n", orgnum);
        }
    }
    else
    {
        printf("Negative numbers are not allowed.\n");
    }
}