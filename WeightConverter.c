#include <stdio.h>

int main(){
int choice = 0;
float kg = 0.0f;
float pound = 0.0f;

printf("1. KG to POUND\n");
printf("2. POUND to KG\n");
printf("Enter your choice: ");
scanf("%d", &choice);

if(choice == 1){
    printf("Enter your weight in Kilogram: ");
    scanf("%f" , &kg);
    pound = kg * 2.2046;
   printf("%.2f", pound);

}
else if (choice == 2) {
    printf("Enter your weight in Pound: ");
    scanf("%f" , &pound);
    kg = pound / 2.2046;
   printf("%.2f", kg);
}
else {
    printf("INVALID choice. Choose either 1 or 2.");
}

    return 0;
}