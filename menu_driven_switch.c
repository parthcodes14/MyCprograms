#include <stdio.h>

int main() {
    int menu;

    printf("1.Area of rectangle\n 2.Perimeter of rectangle\n 3.Area of square\n 4.Perimeter of square\n 5.Area of circle\n 6.Perimeter of circle 7.Calculator\n Enter the choice code for above operations: ");
    scanf("%d",&menu);

    switch (menu)
    {
    case 1:
        int l,b;
        printf("Enter the length and breadth respectively: ");
        scanf("%d %d",&l,&b);

        printf("The area of rectangle with length %d and breadth %d = %d units.\n",l,b,l*b);
        break;
    
        case 2:
        int l,b;
        printf("Enter the length and breadth respectively: ");
        scanf("%d %d", &l, &b);

        printf("Perimeter of rectangle with %d length and %d breadth = %d units.\n",l,b, 4 * (l+b));
        break;

        case 3:
        int side;
        printf("Enter the length of one side: ");
        scanf("%d",&side);

        printf("Area of a square with side %d = %d units.",side, side*side);
        break;

        case 4:
        int side;
        printf("Enter the length of one side: ");
        scanf("%d", &side);

        printf("Perimeter of square with side %d = %d units.");

    default:
        break;
    }
    

    return 0;
}