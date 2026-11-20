#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    //WEIGHT CONVERTER PROGRAM

    int choice = 0;
    float pounds = 0.0f;
    float kg = 0.0f;
     
    printf("======WEIGHT CONVERSION PROGRAM======\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        //Convert Kilograms to Pounds
        printf("Enter the weight in kilograms: ");
        scanf("%f", &kg);
        pounds = kg * 2.20462;
        printf("The weight conversion of %.2f Kilograms to Pounds is %.2f Pounds", kg,pounds);

    }
    else if (choice == 2)
    {
        //Convert Pounds to Kilograms
        printf("Enter the weight in Pounds: ");
        scanf("%f", &pounds);
        kg = pounds / 2.20462;
        printf("The weight conversion of %.2f Pounds to Kilograms is %.2f Kilograms", pounds,kg);

    }
    else
    {
        printf("Invalid choice. Please enter 1 or 2\n");
    }
    

    

    return 0;
}