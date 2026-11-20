#include <stdio.h>
#include <string.h>

int main(){

    //SHOPPING CART PROGRAM
    char item[50] = "";
    float price = 0.0f; 
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;


    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);

    item[strcspn(item, "\n")] = '\0';

    printf("What is the price for each item?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = quantity * price;

    item[strcspn(item, "\n")] = '\0';

    printf("Your total is  %c%.2f.\n", currency,total);

    printf("The %s you bought costs %c%.2f. Thank you for shopping with us.\n", item,currency,total);

    return 0;
}