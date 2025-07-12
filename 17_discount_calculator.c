#include <stdio.h>

int main()
{
    int amount;

    printf("Enter the amount: \n");
    scanf("%d", &amount);

    if (amount < 0) {
        printf("Invalid amount. Please enter positive value.\n");
        return 1;
    }

    if (amount > 1000)
    {
        if (amount > 5000)
        {
            float a = amount * 0.2;
            float b = amount - a;
            printf("The final amount after discount is %.2f.\n", b);
        }
        else
        {
            float c = amount * 0.1;
            float d = amount - c;
            printf("The final amount after discount is %.2f.\n", d);
        }
    }
    else
    {
        printf("No discount applied.\n");
    }
}