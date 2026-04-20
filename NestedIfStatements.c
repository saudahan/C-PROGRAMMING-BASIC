#include <stdio.h>
#include <stdbool.h>

int main(){

float price = 10.00;
bool isStudent = false;
bool isSenior = false;

if (isStudent){
    if(isSenior){
        printf("You have 10%% discount\n");
        printf("You have 20%% discount\n");
        price = price * 0.7;
        // price *= 0.7 o amra lekte pari short a
    }
else{
    printf("You have 10%% discount\n");
    price *= 0.9;
}
}

else{
if (isSenior){
     printf("You have 20%% discount\n");
price *= 0.8;
}
else {
    printf("No discount applicable\n"); // ai part vid a chilo but shob if er sathe else thake bujte simple clear hoy tai disi.

}
}
printf("your ticket price is %.2f", price);

    return 0;
}