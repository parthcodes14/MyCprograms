#include <stdio.h>

int main()
{
    int income;

    printf("Enter your annual income: \n");
    scanf("%d", &income);

    if (income >= 250000 && income <= 500000)
    {
        int c = 0.05 * income;
        printf("Income tax for your annual income is ₹%d",c);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        int d = 0.2 * income;
        printf("Income tax for your annual income is ₹%d",d);
    }
    else if (income > 1000000)
    {
        int e = 0.3 * income;
        printf("Income tax for your annual income is ₹%d",e);
    }
    else
    {
        printf("No income tax to be paid for your annual income");
    }
}
