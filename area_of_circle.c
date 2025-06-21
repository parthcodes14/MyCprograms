#include <stdio.h>

int main() {
    //Calcualting the area of circle.

    int a;

    printf("Enter the radius of circle; \n");
    scanf("%d", &a);

    float b = 3.14;
    float c = b*a*a;

    printf("The area of the circle with radius %d is %.2f", a,c);
    return 0;
}