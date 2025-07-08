#include <stdio.h>

int main () {
    // Fibonacci Series
    int n1=0,n2=1,i;

    printf("%d %d ",n1,n2);

    for (i=0;i<=100;i++) {
        int sum = n1 + n2;
        printf("%d ",sum);
        n1 = n2;
        n2 = sum;
    }
}