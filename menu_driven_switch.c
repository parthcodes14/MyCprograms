#include <stdio.h>

int main() {
    int menu;

    printf(" 1.Area of rectangle\n 2.Perimeter of rectangle\n 3.Area of square\n 4.Perimeter of square\n 5.Area of circle\n 6.Circumference of circle\n 7.Calculating average of 3 numbers\n 8.Even or odd number check\n 9.Finding Greatest of two numbers\n 10.Finding smallest of two numbers\n 11.Calculating student result\n 12.Check prime number\n 13.Check Armstrong number\n 14.Check Palindrome number\n 15.Fibonacci Series Generator\n 16.Unit conversion\n 17.Currency converter\n Select the operation\n Enter the choice code for respective operation: ");
    scanf("%d",&menu);

    switch (menu)
    {
    case 1:{
        printf("Enter length (in m) and breadth (in m) respectively: \n");
        scanf("%d %d",&length1,breadth1);

        printf("The area of rectangle with length %d m and breadth %d m = %d m².\n",length1,breadth1,length1 * breadth1);
        break;
    }

    case 2:{
    int length1,breadth1;
            printf("Enter length (in m) and breadth (in m) respectively: \n");
        scanf("%d %d",&length1,breadth1);

        printf("The perimeter of rectangle with length %d m and breadth %d m = %d m.\n",length1,breadth1, 2 * (length1 + breadth1));
        break;
    }

    case 3:{
    int side;
    printf("Enter the side of the square (in m): ");
    scanf("%d",&side);

    printf("The area of a sqaure with side %d m = %d m².\n",side,side*side);
    break;
    }




    case 4: {
            int side;
    printf("Enter the side of the square (in m): \n");
    scanf("%d",&side);

    printf("The perimeter of square with side %d m = %d m.\n",side,4 * side);
    break;
    }


    case 5: {
            int radius;
    printf("Enter the radius of the circle: \n");
    scanf("%d",&radius);

    float area = 3.14 * (radius * radius);
    printf("The area of a circle with radius %d m = %.2f m².\n",radius,area);
    break;
    }


    case 6: {
    int radius;
    printf("Enter the radius of the circle: \n");
    scanf("%d",&radius);

    float circumference = 2 * 3.14 * radius;
    printf("The circumference of a circle with radius %d m = %.2f m.\n");
    break;
    }

    case 7: {
        int num1,num2,num3;

        printf("Enter three numbers respectively: \n");
        scanf("%d %d %d",&num1,&num2,&num3);

        printf("The average of %d,%d,%d = %d.\n",num1,num2,num3, (num1 + num2 + num3) / 3);
        break;
    } 

    case 8: {
        int num;

        printf("Enter the number: \n");
        scanf("%d",&num);

        if (num%2==0) {
            printf("%d is an even number.\n");
        } else {
            printf("%d is an odd number.\n");
        }
        break;
    } 

    case 9: {
        int num1,num2;

        printf("Enter number 1 and number 2 respectively: \n");
        scanf("%d %d",&num1,&num2);

        if (num1>num2) {
            printf("%d is greater than %d.\n",num1,num2);
        } else if (num1<num2) {
            printf("%d is greater than %d.\n",num2,num1);
        } else {
            printf("Both numbers are equal.\n");
        }
        break;
    }
    
        case 10: {
        int num1,num2;

        printf("Enter number 1 and number 2 respectively: \n");
        scanf("%d %d",&num1,&num2);

        if (num1>num2) {
            printf("%d is smaller than %d.\n",num2,num1);
        } else if (num1<num2) {
            printf("%d is smaller than %d.\n",num1,num2);
        } else {
            printf("Both numbers are equal.\n");
        }
        break;
    } 

    case 11: {
    float phy,chem,math,eng,pe,aggregate_marks,percentage;

    printf("Enter Physics, Chemistry, Mathematics, English, Physical Education marks respectively: \n");
    scanf("%f %f %f %f %f",&phy,&chem,&math,&eng,&pe);

    if (phy>33.0 && chem>33.0 && math>33.0 && eng>33.0 && pe>33.0) {
        printf("Passed! Promoted to next academic year.\n",percentage);
        
        aggregate_marks = phy + chem + math + eng + pe;
        percentage = (aggregate_marks / 500.0) * 100.0;
        printf("Percentage for this academic year = %.2f%%.\n");
        if (percentage>90.0 && percentage<100.0) {
            printf("Excellent! Keep it up.\n");
        } else if (percentage>75.0 && percentage<90.0) {
            printf("Very Good!");
        } else if (percentage>50.0 && percentage<75.0) {
            printf("Need to work hard.\n");
        } else if (percentage<50.0 && percentage>33.0) {
            printf("Better luck next time.\n");
        }
    } else {
        printf("Failed!\n");
    }
    break;
}

case 12: {
    int i,num,count=0;

    printf("Enter the number: \n");
    scanf("%d",&num);

    if (num<0) {
        printf("Negative numbers cannot be prime numbers. Please enter positive number only.\n");
        return 0;
    } for (i=1;i<=num;i++) {
        if (num%i==0) {
            count++;
        }
    } if (count==2) {
        printf("%d is a prime number.\n",num);
    } else {
        printf("%d is not a prime number.\n",num);
    }
    break;
}

case 13: {
    int org_num, cubed_num=0;

    printf("Enter the number: \n");
    scanf("%d",&org_num);

    int temp = org_num;

    if (temp<0) {
        printf("Negative numbers are not considered an Armstrong number. Please enter positive number only.\n");
        return 0;
    } 
    while (temp>0) {
        int remainder = temp%10;
        cubed_num = cubed_num + (remainder * remainder * remainder);
        temp = temp/10;
    } if (org_num==cubed_num) {
        printf("%d is an Armstrong number.\n",org_num);
    } else {
        printf("%d is not an Armstrong number.\n",org_num);
    }
    break;
}

case 14: {
    int org_num,reversed_num=0;

    printf("Enter the number: \n");
    scanf("%d",&org_num);

    int temp = org_num;

    if (temp<0) {
        printf("Negative numbers are not considered as palindrome number.\n");
        return 0;
    } while (temp>0) {
        int remainder = temp%10;
        reversed_num = reversed_num * 10 + remainder;
        temp = temp/10;
    } if (org_num==reversed_num) {
        printf("%d is a palindrome number.\n");
    } else {
        printf("%d is not a palindrome number.\n");
    }
    break;
}

case 15:{
    int num1=0,num2=1,sum,i;

    for (i=0;i<=20;i++) {
        sum = num1 + num2;
        printf("%d ",sum);
        num1 = num2;
        num2 = sum;
    }
    return 0;
}

    
    default:
        break;
    }
    return 0;
    }

