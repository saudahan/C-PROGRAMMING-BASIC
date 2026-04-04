#include <stdio.h>
#include <stdbool.h>
int main(){
// variable = a box u store something so u can find it and use it later. A container. 

int age = 20; 
printf("My age is %d yrs\n", age);
int year = 2026;
printf("The year im learning c is %d\n", year);

/* int contains integer %d
float contains deicmal %f
char contains alphabets */

float gpa = 4.83;
printf("My HSC gpa is %f with optional subject\n", gpa);
// when we dont define how many no. we want after decimal our no. becomes to big so we need to deifne it clearly for example
float gpas = 4.83;
printf("My HSC gpa is %.2f with optional subject\n", gpas);
float price = 5.32;
printf ("The price of my parcel is total of $%.2f\n", price);
float temparature = -13.3;
printf ("Todays temparature in Uk is %.1f°F\n", temparature);
// to add the degree sign we use ALT then 0176 in numeric keyboard not the top one and add that after %f be careful

/*float can only use 6-7 digits after decimal so to get more precision we can use DOUBLE 15-16 digits
remember to declare no. after decimal other wise as default u will see 6 digits 
*/ 
double pi =3.141893874665;
printf("The value of pi is %.12lf\n", pi);

// char hold only one single character
char grade = 'A';
printf("MY HSC grade is %c\n", grade);
char symbol = '@';
printf("MY fav symbol is %c\n", symbol);
char currency = '$';
printf("MY fav currency is %c\n", currency);

/* as char cna contain only 1 character we use array similar like string 
be careful to add double qutation nit single one*/
char name[] = "BRO Code";
printf("My teacher is %s\n", name);
char email[] = "Fske123@gmail.com";
printf("His gmail is %s\n", email);

/* we use boolean for true and false more likely to be used when using statement
but we need to add header file for boolean specificly include stdbool.h ... careful...and the print formet is also different 
and amra print diye alda bhabe use tmn kori na just incase jene rakho mainly statement a beshi boolean use hoy*/
bool forSale = true;
printf("%d\n", forSale);

// uporer way te only 1 or 0 show korbe but if process a text diye kora jabe . 

bool isONline = false;
if(isONline){
    printf("U r online");
}
else{
    printf("U r offline\n");
}

return 0;
}