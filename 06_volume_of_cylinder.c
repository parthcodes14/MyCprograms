#include <stdio.h>

int main()
{
    // Calculating the volume of cylinder.

    int a, b;

    printf("Enter the Radius of cylinder: \n");
    scanf("%d", &a);

    printf("Enter the Height of cylinder: \n");
    scanf("%d", &b);

    float const c = 3.14;
    float d = c * a * a * b;

    printf("The volume of cylinder with radius %d and height %d is %.2f units", a, b, d);
    return 0;
}
