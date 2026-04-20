#include <stdio.h>
#include <stdbool.h>

// EXAMPLE 1

int square(int num){
//int result = num * num;
//return result;
return num * num; // short way

// as amater datatype number so amra void er bodla int use korsi
}

// EXAMPLE 2

bool ageCheck(int age){

  if(age > 18){
    return true;
  }
   else {
    return false;
   }
}

// Example 3

int getMax(int x1, int y2){
 if(x1 > y2){
    return x1;
 }
 else{
    return y2;
 }
}

//Example 1

int main(){

    // retun = returns a value back to where you call a function

int x = square(2);
int y = square(3);
int z = square(4);


printf("%d\n", x);
printf("%d\n", y);
printf("%d\n", z); 


// EXAMPLE 2

int age = 0;
printf("Enter your age: ");
scanf("%d", &age);

if(ageCheck(age)){
    printf("You may sign up");
}
else {
    printf("You must be 18+ to sign up");
}

// Example 3

 int x1 = 0;
 int y2 = 0;

 printf("\nEnter value of x1: ");
 scanf("%d", &x1);
 printf("Enter value of y2: ");
 scanf("%d", &y2);

 /*if(getMax(x1, y2)){
    printf("X is greater");
 }
 else{
    printf("Y is greater");
 }
*/

int max = getMax(x1, y2);
 printf("Your max %d", max);

 
    return 0;

}