#include <stdio.h>

int main()
{
    int i, num;

    printf("Enter the number = ");
    scanf("%d", &num);

    printf("\nMultiplication table for %d.\n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}
