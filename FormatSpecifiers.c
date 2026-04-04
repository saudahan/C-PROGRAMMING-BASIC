#include <stdio.h>
int main(){

// Format specifier tells the compiler what type of data
// is being printed or taken as input.
// %d = integer, %f = float, %c = character, %s = string

// optional modifiers ( width, percision, flags)

int age = 20;
float temparature = 13.33;
double pi = 3.141678999;
char sign = '$';
char teacher[] = "Bro Code";

printf("%d\n", age);
printf("%f\n", temparature);
printf("%lf\n", pi);
printf("%c\n", sign);
printf("%s\n", teacher);

// width

// koyekta jinish ektashe add kore practise kore nisi. pore na bujle yt dekhe nibo
int num = 1;
int num2 = 10;
int num3 = -100;

// plus signn dile mone koro pos no. a plus aschlo r neg gula neg e thakbe
// plus sign dile o jah na dile o tah. but specify korle  mono koro valo rki bujte

printf("%+4d\n", num);
printf("%+4d\n", num2);
printf("%+4d\n", num3);
/* we use the num in between the % and d to define the width. he re width indicates the no. of space 
one digit will leave before or after */

int num4 = 1;
int num5 = 10;
int num6 = 100;

printf("%-3d\n", num4);
printf("%-3d\n", num5);
printf("%-3d\n", num6);

// precision

float price1 = 19.22;
float price2 = 33.33;
float price3 = -10.00;

// aikhane .2 diye amra oiej decimal er pore koita no. chai seita specify korsi
// and age 7 diye amra width ta speficy korsi 

printf("%7.2f\n", price1);
printf("%7.2f\n", price2);
printf("%7.2f\n", price3);

/*
printf("%+4d", 5);	[ ][ ][+][5]	Used + flag: 2 spaces + sign + digit.
printf("%4d", 5);	[ ][ ][ ][5]	No + flag: 3 spaces + digit. Still on the right!
printf("%-4d", 5);	[5][ ][ ][ ]	Used - flag: Digit + 3 spaces. Pushed to the left.
*/



    return 0;
}