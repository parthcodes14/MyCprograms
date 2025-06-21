#include <stdio.h>

int main() {
    // Writing a program to calculate the area of a rectangle using user inputs
    int a,b;

    printf("Enter the length of rectangle: \n");
    scanf("%d", &a);

    printf("Enter the breadth of rectangle: \n");
    scanf("%d", &b);

    int c = a*b;
    printf("The area of rectangle with length %d and breadth %d is %d", a,b,c);
    return 0;
}
