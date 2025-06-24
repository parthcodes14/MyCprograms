#include <stdio.h>

int main() {
// A program to check whether a student has passed or failed the exam.

int physics, chemistry, mathematics;

printf("Enter Physics marks: \n");
scanf("%d",&physics);

if(physics>=33) {
    printf("Passed in Physics subject\n");
}
    else{
        printf("Failed in Physics subject\n");
    }


printf("\nEnter Chemistry marks: \n");
scanf("%d",&chemistry);

if(chemistry>=33) {
    printf("Passed in Chemistry subject\n");
}
    else{
        printf("Failed in Chemistry subject\n");
    }


printf("\nEnter Mathematics marks: \n");
scanf("%d",&mathematics);

if(mathematics>=33) {
    printf("Passed in Mathematics subject\n");
}
    else{
        printf("Failed in Mathematics subject\n");
    }

float percentage = ((physics + chemistry + mathematics)/300.0) * 100;
if (physics > 33 && chemistry > 33 && mathematics > 33 && (physics + chemistry + mathematics >= 99)) {
    printf("\nCongratulations!, you are promoted to next grade and your score (in percentage) for this academic year is %.2f%\n", percentage);
}
    else{
        printf("You failed in this academic year!\n");
    }

    return 0;
}