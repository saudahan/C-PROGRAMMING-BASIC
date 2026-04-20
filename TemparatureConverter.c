#include <stdio.h>

int main(){
char choice = '\0';
float F = 0.0f;
float C = 0.0f;

printf("C. C to F\n");
printf("F. F to C\n");
printf("Enter your choice: ");
scanf("%c", &choice);

// If we use char then when we use if something then we have to use '?' this single quatation like 'C' or it will not works be careful.

if(choice == 'C'){
    printf("Enter your temparature in CELCIUS: ");
    scanf("%f" , &C);
    F = (C * 9 / 5) + 32;
   printf("%.2f celsius is equal to %.2f farenheit", C , F);

}
else if (choice == 'F') {
        printf("Enter your temperature in FAHRENHEIT: ");
        scanf("%f", &F);
        C = (F - 32) * 5 / 9;
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", F, C);
    }
else {
    printf("INVALID choice. Choose either C or F.");
}

    return 0;
}