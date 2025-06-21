#include <stdio.h>

int main() {
    short a;
    long b;
    long long c;
    double d;
    float e;
    char f;

    printf("The size of short is: %d bytes\n", sizeof(a));
    printf("The size of long is: %d bytes\n", sizeof(b));
    printf("The size of long long is: %d bytes\n", sizeof(c));
    printf("The size of double is: %d bytes\n", sizeof(d));
    printf("The size of float is: %d bytes\n", sizeof(e));
    printf("The size of char is: %d bytes\n", sizeof(f));

    return 0;
}