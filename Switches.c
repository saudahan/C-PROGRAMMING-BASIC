/* #include <stdio.h>

int main(){

// switch = An alternative to using many if-else statements 
//    More effecient w/ fixed interger


int daysOfWeek = 0;
printf("Ender a no. in between 1-7: ");
scanf("%d" , &daysOfWeek);

if(daysOfWeek == 1){
    printf("It is Monday");
}
else if(daysOfWeek == 2){
    printf("It is Tuesday");
}
else if(daysOfWeek == 3){
    printf("It is Wednesday");
}
else if(daysOfWeek == 4){
    printf("It is Thursday");
}
else if(daysOfWeek == 5){
    printf("It is Friday");
}
else if(daysOfWeek == 6){
    printf("It is Saturday");
}
else if(daysOfWeek == 7){
    printf("It is Sunday");
}
else {
    printf("INVALID");
}

    return 0;
}
    */

// INSTEAD OF USING SO MANY ELSE IF AND IT LOOKS MESSED UP. WE CAN USE SWITCH SO IT LOOKS MORE SIMPLE AND READABLE.

#include <stdio.h>

int main(){

// WITH INTEGER STYLE

int daysOfWeek = 0;
printf("Enter a no. in between 1-3: ");
scanf("%d" , &daysOfWeek);

switch (daysOfWeek){

case 1: 
printf("MONDAY");
break;
case 2:
printf("TUESDAY");
break;
case 3:
printf("WEDNESDAY");
break;
default:
printf("INVALID");
}

// WITH CHARACTER STYLE

char daysOfWeekS = '\0';
printf("\nEnter a character in between M, T, W: ");
scanf(" %c" , &daysOfWeekS);
/*
As we know in scanf, we need the space before %c because %c reads EVERYTHING, including the Enter key (\n).
%d and %f automatically ignore spaces and newlines, so they don’t need it.
*/
switch (daysOfWeekS){

case 'M': 
printf("MONDAY");
break;
case 'T':
printf("TUESDAY");
break;
case 'W':
printf("WEDNESDAY");
break;
default:
printf("INVALID");
}

    return 0;
}