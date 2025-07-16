#include <stdio.h>

int main()
{
    char operation;
    int num1, num2;

    printf("Enter the operation (+,-,*,/): ");
    scanf(" %c", &operation);

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    switch (operation)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%d x %d = %d\n", num1, num2, num1 * num2);
        break;

    case '/':
        if (num2==0) {
            printf("Error! Divsion by 0 is not allowed.\n");            
        } else {
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        }
        
        break;

    default:
        printf("Invalid operation! Please enter the valid operation.\n");
        break;
    }

    return 0;
}