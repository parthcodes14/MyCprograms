#include <stdio.h>

int main()
{
    int a, b;
    char c;
    printf("Enter first number: \n");
    scanf("%d", &a);

    printf("Enter second number: \n");
    scanf("%d", &b);

    printf("Enter the operator: \n");
    scanf(" %c", &c);

    if (c == '+')
    {
        int addition = a + b;
        printf("%d + %d = %d", a, b, addition);
    }
    else if (c == '-')
    {
        int subtraction = a - b;
        printf("%d - %d = %d", a, b);
    }
    else if (c == '*')
    {
        int multiplication = a * b;
        printf("%d x %d = %d", a, b, multiplication);
    }
    else if (c == '/')
    {
        int division = a / b;
        printf("%d / %d = %d", a, b, division);
    }
    else
    {
        printf("Invalid inputs");
    }
}