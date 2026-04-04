#include <stdio.h>
#include <string.h>
int main(){

// Shopping Cart Program 

//kuno project a kaj korar 1st step age sob variable declare kore fela
char item[50] = "";
float price = 0.0f;
int quantity = 0;
char currency = '$';
float total = 0.0f;


printf("What item you want to buy? : ");
fgets(item, sizeof(item), stdin);
item[strlen(item)-1] = '\0';

printf("What is the price for each? :");
scanf("%f", &price);

printf("How many would you like? : ");
scanf("%d", &quantity);


printf("%s\n", item);
printf("%.2f\n", price);
printf("%d\n", quantity);

printf("\nYou have bought %d %s/s\n", quantity, item);

printf("\nTotal:");
total = quantity * price;
printf("%C%.2f\n", currency, total);


    return 0;
}