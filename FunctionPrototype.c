#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // 1st a lekhe dilan function er prototype,
bool ageCheck(int age);          // so amra main fuction nise lekte pari and int main part ta age lekhe code ta sundr and kom messed up and easily readble hobe
                                // and onno code lekte o easy hoy.

                                
int main(){

// function prototype = Provides the compiler w/ information about a function's:
//                       name, return type, and parameter before its actual defination.
//                      Enables type checking and allows functions to be used before there defined.
//                     Improves readability, organizatoin, and helps prevent errors     .            

 hello("BOB", 22); // array r khetre quotation dite bhulyo na.

int age = 0;
printf("\nEnter your age: ");
scanf("%d", &age);

if(ageCheck(age)){
    printf("You may sign up");
}
else {
    printf("You must be 18+ to sign up");
}

    return 0;
}

void hello(char name[], int age){
    printf("Hello my name is %s\n", name);
    printf("My age is %d", age);
}

bool ageCheck(int age){

  if(age > 18){
    return true;
  }
   else {
    return false;
   }
}