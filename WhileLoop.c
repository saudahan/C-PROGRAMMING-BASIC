#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

// while loop = Continues some code WHILE the condition remains true
//               Condition must be true for us to enter while loop

int num = 0;

while(num <= 0){
    printf("Enter a number greater than 0: ");
    scanf("%d", &num);
}

//while mane JOTOKKHON
// while loop forever continue hoite thakbe jotokkhon na amder while loop er condition true hocche.
// while loop start hoite hoile bracket er part condiotion ke true hoite hobe
// as amra upore int num = 0 dise then condition a o 0 so aita work kortese
// but 1 dile tokhon r run kore na
// while loop a age condition check kore then pront hoy
// but in case of do while loop age print hoy then contiodion check hoy
// so oikhane int num = 1 hole o somossa hobe na , print thik e hobe

int num1 = 1;

/*  do{
    printf("Enter a number1 greater than 0: ");
    scanf("%d", &num1);
}
while(num1 <= 0);

/* [REASON WHY NUM1 = 1 LEKHA PRB HOI NA]
Initialization: num1 is set to 1.

The do Block: The computer enters the loop immediately. It doesn't care about the while condition yet.

Action: It prints "Enter a number1..." and waits for your input via scanf.

The Update: Whatever you type in (let's say you type 5) is now stored in num1.

The Check: Only now does the computer look at while(num1 <= 0).

If you entered 5, then 5 <= 0 is false, and the loop stops.

If you entered -2, then -2 <= 0 is true, and it jumps back to the do to ask you again.
*/

getchar();

/* 
why getchar();
 Clears the leftover Enter (\n) from previous input.
*/

char name[50] = "";

printf("Enter your name: ");
fgets(name, sizeof(name), stdin);
name[strlen(name)-1] = '\0';

while(strlen(name) == 0){
printf("Plz enter your name, u cant write nothing: ");
fgets(name, sizeof(name), stdin);
name[strlen(name)-1] = '\0';
}


bool isRunning = true;
char response = '\0';

/*
do{
    printf("You are playing the game");
    printf("\nDo you want to continue ? press Y (yes) or N (no): ");
    scanf(" %c", &response);

if(response != 'Y' && response != 'y'){ //dont forget to add single quatation when using character
    isRunning = false;
} 
}while(isRunning == true);
*/

// do while loop diye o kora jay while loop diye o kora jay no prb

while(isRunning == true){
    printf("You are playing the game");
    printf("\nDo you want to continue ? press Y (yes) or N (no): ");
    scanf(" %c", &response);

if(response != 'Y' && response != 'y'){ //dont forget to add single quatation when using character
    isRunning = false;
} 
}

printf("You exit the game");

return 0;
}