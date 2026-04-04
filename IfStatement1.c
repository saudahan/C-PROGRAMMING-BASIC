#include <stdio.h>

int main() {

// Condiotion gula serial a thakte hobe ekta por ekta properly kaj korar jonno , bhul ta age diye
// dile then condition properly na manle o show kore felse. so serial mantained kora must.

printf("[IF/ELSE BASIC]\n");

 int age = 0;

 printf("Enter your age: ");
 scanf("%d", &age);

if (age >= 60) {
    printf("You are senior.");
}
else if(age >= 18){
    printf("You are a adult.");
}
else if(age > 0){
    printf("You are a child.");
}
else if(age == 0){
    printf("You are new born.");
}
else {
printf("You are no born yet.");
}

    return 0;
}