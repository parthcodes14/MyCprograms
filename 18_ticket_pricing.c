#include <stdio.h>

int main() {
    char daytype;
    int age;

    printf("Welcome! Book you movie tickets here.\n");
    printf("Enter the day type you want to book tickets on (W/E): \n");
    scanf(" %c",&daytype);

    printf("Enter the Age: \n");
    scanf("%d",&age);

    if (daytype == 'W' || daytype == 'w') {
        if (age>=0 && age<=12) {
            printf("The final movie ticket price inclusive of GST and other taxes would be ₹100.\n");
        } else {
            if (age>=13 && age<=59) {
                printf("The final movie ticket price inclusive of GST and other taxes would be ₹150.\n");
            } else {
                printf("The final movie ticket price inclusive of GST and other taxes would be ₹120.\n");
            }
        }
    } else if (daytype == 'E' || daytype == 'e') {
        if (age>=0 && age<=12) {
            printf("The final movie ticket price inclusive of GST and other taxes would be ₹120.\n");
        } else {
            if (age>=13 && age<=59) {
                printf("The final movie ticket price inclusive of GST and other taxes would be ₹180.\n");
            } else {
                printf("The final movie ticket price inclusive of GST and other taxes would be ₹150.\n");
            }
        }
    } else {
        printf("Invalid day type entered. Please enter 'W' for Weekday or 'E' for Weekend.\n");
    }
return 0;

}