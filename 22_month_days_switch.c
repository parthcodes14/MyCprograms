#include <stdio.h>

int main()
{
    int days;

    printf("Enter the month number: ");
    scanf("%d", &days);

    switch (days)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d month consists of 31 days.\n",days);
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("%d month consists of 30 days.\n",days);
        break;

    case 2:
    printf("%d month consists of 28/29 days.\n",days);
    break;

    default:
        printf("Invalid month number. Please input valid month number.\n");
        break;

    }
    return 0;
}