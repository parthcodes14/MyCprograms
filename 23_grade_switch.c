#include <stdio.h>

int main()
{
    char grade;

    printf("Enter the grade: ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Very Good!\n");
        break;
    case 'C':
        printf("Could be better!\n");
        break;
    case 'D':
        printf("Fail\n");
        break;

    default:
        printf("Invalid grades! Please input grade between A and D.\n");
        break;
    }
    return 0;
}