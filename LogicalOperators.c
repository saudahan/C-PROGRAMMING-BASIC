#include <stdio.h>
#include <stdbool.h>

int main(){

//logical operators = used to combine or modify boolean expressions.

 // && = AND
 // || = OR
 // ! = NOT

 // int temp = 33;

/* 
if (temp > 0 && temp < 30){
    printf("Temparature is good.");
}
else{
    printf("Temparature is bad.");
}
*/


/*
if (temp <= 0 || temp >= 30){
    printf("Temparature is good.");
}
else{
    printf("Temparature is bad.");
}
*/


bool isSunny = true;

if(!isSunny){
    printf("It is cloudy."); // ! used to indicate NOT. (if not sunny) like this.
}
else{
    printf("It is sunny");
}










    return 0;
}