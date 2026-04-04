#include <stdio.h>
#include <stdbool.h>

// boolean use korte hoile <stdbool.h> heading a dite hobe bhulle hobe na.

int main(){

printf("[IF/ELSE BOOLEAN]\n");

bool isStudent1 = true;

if(isStudent1 == true){
    printf("You are a student.\n");
}
else{
    printf("You are not a student.\n");
}

// alada bhabe mention kore na dile o hoy no prb. Just variable dile e kaj hobe. and
// Variable true hole if and false hole else run hobe

bool isStudent2 = false;

if(isStudent2){
    printf("You are a student.\n");
}
else{
    printf("You are not a student.\n");
}

    return 0;
}