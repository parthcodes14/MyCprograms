#include <stdio.h>

int main()
{
    int celsius;

    printf("Enter Celcius temperature value: \n");
    scanf("%d", &celsius);

    float fahrenheit = (celsius * 1.8) + 32;
    printf("The conversion of %d celsius degree to fahrenheit degree is %f degree", celsius, fahrenheit);
    return 0;
}