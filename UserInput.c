#include <stdio.h>
#include <string.h>
int main(){

// int stores numbers, float stores decimals,
// char stores single character,
// scanf takes input, printf shows output

// Initial values mean variables start empty and safe before use
// c te guard nai bole value kichu declare na korleo tmr ager kuno program ba kichu theke no. show korbe ja amader jonno bhul
// onno programming language a guard thake but c te nai to alada bhabe specify kora lage
//// Variables are initialized with starting values to avoid garbage data
/* 
int = 0
float = 0.0f (f deyar karon holo onno programer ra bujbe je aita float not an integar)
char = '\0'
string = ""
*/

// First printf asks the user for input
// scanf stores the input in a variable
// Last printf shows the stored value

int age = 0;
float gpa = 0.0f;
char grade = '\0';
 

printf("Enter your age: ");
scanf("%d", &age);

printf("Enter your gpa: ");
scanf("%f", &gpa);

printf("Enter your grade: ");
scanf(" %c", &grade);

/*
We need the space before %c because %c reads EVERYTHING, including the Enter key (\n).
%d and %f automatically ignore spaces and newlines, so they don’t need it.
%d and %f ignore leading whitespace (it skips any Enters or spaces before the number), it does not clear the whitespace that comes after the number.
 thats why %c r age space dite hoise*/

printf("%d\n", age);
printf("%.2f\n", gpa);
printf("%c\n", grade);


char name[30] = "";
// /printf("Enter your full name: ");
// /scanf("%s", &name);
// doesNT allow us to type full name so we need different function name

getchar();
printf("Enter your full name: ");
fgets(name, sizeof(name), stdin); // stdin mean standard input
name[strlen(name)-1] = '\0'; 
/*
Why fgets?
 Because scanf("%s") cannot read spaces, but names have spaces.
Why getchar();
 Clears the leftover Enter (\n) from previous input.
*/

printf("%s\n", name);


/* MORE DETAILED EXPLANATION
he "5-Year-Old" Explanation 👶
Imagine you have a Robot that cleans your room.

getchar(); (The Vacuum Cleaner):
Before the robot starts, there is a piece of trash (an old "Enter" key) left on the floor from the last toy you played with.
 If you don't clean it, the robot will trip over it and stop immediately. getchar() sucks up that one piece of trash so the floor is clean for the next part.

fgets(name, sizeof(name), stdin); (The Long Grabber):
Usually, your robot only picks up one block at a time (that's scanf).
 But fgets is a giant grabber! It picks up everything—the first name, the space, and the last name—until it hits the wall (the "Enter" key).
  The sizeof(name) part is like a safety fence; it tells the robot, "Don't grab more than your bucket can hold, or you'll break!"

name[strlen(name)-1] = '\0'; (The Tail Cutter):
When the robot grabs your name, it accidentally grabs the "Enter" key too!
 It’s like buying a toy that comes with a piece of string you don't want.

strlen(name) counts how long the string is.

[strlen(name)-1] points to the very last thing (the "Enter" key).

= '\0' is like a pair of scissors. It cuts off the "Enter" key and puts a "Stop Sign" there instead. Now your name is clean!

*/




    return 0;
}