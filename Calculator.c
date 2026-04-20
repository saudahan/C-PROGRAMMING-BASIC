#include <stdio.h>
 
int main(){

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter your first no: ");
    scanf("%lf", &num1);
    
    printf("Enter your operator (+ - * /): ");
    scanf(" %c", &operator);

    printf("Enter your second no: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
       result = num1 + num2;
       printf("Your result is %.2lf\n", result);
        break;

    case '-':
     result = num1 - num2;
    printf("Your result is %.2lf\n", result);
 break;
    case '*':
     result = num1 * num2;
    printf("Your result is %.2lf\n", result);
 break;
    case '/':
    if (num2 == 0){
    printf("YOU CANT DIVIDE BY 0!\n");
    }
    else{
        result = num1 / num2;
    printf("Your result is %.2lf\n", result);
    }
 break;

    default:
     printf("INVALID");
        break;
    }


    return 0;
}
