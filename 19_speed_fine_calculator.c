#include <stdio.h>

int main()
{
    int speed;

    printf("Enter the speed of vehicle in km/hr: \n");
    scanf("%d", &speed);

    if (speed > 60)
    {
        if (speed < 81)
        {
            printf("Speed limit violated! Fine imposed: ₹100");
        }
        else
        {
            if (speed >= 81 && speed < 100)
            {
                printf("Speed limit violated! Fine imposed: ₹500.");
            }
            else
            {
                printf("Speed limit violated! Fine imposed: ₹1000.");
            }
        }
    }
    else
    {
        printf("No fine imposed.");
    }
}