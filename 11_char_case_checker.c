#include <stdio.h>

int main() {
    char a;

    printf("Enter the character: \n");
    scanf("%c",&a);

    if (a>=97 && a<=122) {
        printf("The character is lowercase\n");
    } else if (a>=65 && a<=90) {
        printf("The character is uppercase\n");
    } else {
        printf("Invalid input");
    }
    
    return 0;
}