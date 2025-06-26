#include <stdio.h>

int main() {
    int a,b,c,d;

    printf("Enter first number: \n");
    scanf("%d",&a);

    printf("Enter second number: \n");
    scanf("%d",&b);

    printf("Enter third number: \n");
    scanf("%d",&c);

    printf("Enter fourth number: \n");
    scanf("%d",&d);

    if (a>b && a>c && a>d) {
        printf("%d is the largest number among all four numbers.",a);
    } else if (b>a && b>c && b>d) {
        printf("%d is the largest number among all four numbers.",b);
    } else if (c>a && c>b && c>d) {
        printf("%d is the largest number among all four numbers.",c);
    } else if (d>a && d>b && d>c) {
        printf("%d is the largest number among all four numbers.",d);
    } else {
        printf("All numbers are equal");
    }
    return 0;
}