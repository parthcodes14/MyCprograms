#include <stdio.h>

int main() {
    int unit,length,weight,temperature,time,data_storage;

    printf(" 1.Length conversion\n 2.Weight conversion\n 3.Temperature Conversion\n 4.Time Conversion\n 5.Data Storage Conversion\n Enter the choice code for above unit conversion: ");
    scanf("%d",&unit);

    switch (unit)
    {
    case 1:
        switch (length)
        {
            char length_converter;
            printf(" A.Kilometers to Meters\n B.Meters to Centimeters\n C.Meters to Millimeters\n D.Meters to Inches E.Meters to Feet\n Enter the choice code for above unit conversion: ");
            scanf(" %c",&length_converter);

            switch (length_converter)
            {
            case 'A':
                float kms;
                printf("Enter the length in kilometers: ");
                scanf("%f",&kms);

                printf("%f kms in meters = %f m.\n",kms,kms*1000);
                break;
            
            case 'B':
                float meters;

                printf("Enter the length in meters: ");
                scanf("%f",&meters);

                printf("%f meters in centimeters = %f cms.\n",meters,meters*100);
                break;

            case 'C':
                float meters;

                printf("Enter the length in meters: ");
                scanf("%f", &meters);

                printf("%f meters in millimeters = %f mm.\n", meters, meters * 1000);
                break;

            case 'D':
                float meters;

                printf("Enter the length in meters: ");
                scanf("%f", &meters);

                printf("%f meters in inches = %f inches.\n", meters, meters * 39.37);
                break;

                case 'E':
                    float meters;

                    printf("Enter the length in meters: ");
                    scanf("%f", &meters);

                    printf("%f meters in feet = %f feet.\n", meters, meters * 3.281);
                    break;

            default:
                printf("Error! Please enter real values.");
                break;
            }
        }
        break;
    


        default:
            break;
        }

    case 2:
        switch (weight)
        {
        char weight_converter;
        printf(" A.Kilograms to Grams\n B.Kilograms to Pounds\n C.Grams to Kilograms\n D.Pounds to Kilograms E.Kilograms to Ounces\n Enter the choice code for above weight conversion: ");
        scanf(" %c", &weight_converter);

        switch (weight_converter)
        {
        case 'A':
            float kgs;

            printf("Enter the weight in kilograms = ");
            scanf("%f", &kgs);

            printf("%f kilograms in grams = %f gm.\n", kgs, kgs * 1000);
            break;

        case 'B':
            float kgs;

            printf("Enter the weight in kilograms = ");
            scanf("%f", &kgs);

            printf("%f kilograms in pounds = %f pounds.\n", kgs, kgs * 2.20462);
            break;

        case 'C':
            float grams;

            printf("Enter the weight in grams = ");
            scanf("%f", &grams);

            printf("%f grams in kilograms = %f kgs.\n", grams, grams / 1000);
            break;

        case 'D':
            float pounds;

            printf("Enter the weight in pounds = ");
            scanf("%f", &pounds);

            printf("%f pounds in kilograms = %f kgs.\n", pounds, pounds * 0.453592);
            break;

        case 'E':
            float kgs;

            printf("Enter the weight in kilograms = ");
            scanf("%f", &kgs);

            printf("%f kilograms in ounces = %f ounces.\n", kgs, kgs * 35.274);
            break;
        default:
            break;
        }
    }
    default:
        break;
    }

        return 0;
}