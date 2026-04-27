
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int UserChoice, int ComputerChoice);

int main() {

    // ROCK PAPER SCISSORS
    srand(time(NULL));

    printf("*** ROCK PAPER SCISSORS ***\n");

    int UserChoice = getUserChoice();
    int ComputerChoice = getComputerChoice();

    // User choice display
    switch (UserChoice) {
        case 1:
            printf("You chose ROCK\n");
            break;
        case 2:
            printf("You chose PAPER\n");
            break;
        case 3:
            printf("You chose SCISSOR\n");
            break;
    }

    // Computer choice display
    switch (ComputerChoice) {
        case 1:
            printf("Computer chose ROCK\n");
            break;
        case 2:
            printf("Computer chose PAPER\n");
            break;
        case 3:
            printf("Computer chose SCISSOR\n");
            break;
    }

    // 🔥 THIS WAS MISSING
    checkWinner(UserChoice, ComputerChoice);

    return 0;
}

// Generate random choice
int getComputerChoice() {
    return (rand() % 3) + 1;
}

// Take user input
int getUserChoice() {
    int choice = 0;

    do {
        printf("\nChoose an option:\n");
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSOR\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);

    return choice;
}

// Decide winner
void checkWinner(int UserChoice, int ComputerChoice) {
    if (UserChoice == ComputerChoice) {
        printf("\nIt's a tie!\n");
    } 
    else if ((UserChoice == 1 && ComputerChoice == 3) || 
             (UserChoice == 2 && ComputerChoice == 1) || 
             (UserChoice == 3 && ComputerChoice == 2)) {
        printf("\nYOU WIN! 🎉\n");
    } 
    else {
        printf("\nYOU LOSE! 😢\n");
    }
}


// ***** MY FAILED CODE IS IN BELOW AND IDK WHY IT DINT WORK *****

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

   int getComputerChoice();
   int  getUserChoice();
   void checkWinner(int UserChoice, int ComputerChoice);
    

int main(){

    // ROCK PAPER SCICSSORS

 srand(time(NULL));
printf("***ROCK PAPERS SCISSORS***");
 
int UserChoice = getUserChoice();
int ComputerChoice = getComputerChoice();

switch (UserChoice){
    case 1:
    printf("YOu chose ROCK\n");
    break;
     case 2:
    printf("YOu chose PAPER\n");
    break;
     case 3:
    printf("YOu chose SCISSOR\n");
    break;
}


switch (ComputerChoice){
    case 1:
    printf("COM chose ROCK\n");
    break;
     case 2:
    printf("COM chose PAPER\n");
    break;
     case 3:
    printf("COM chose SCISSOR\n");
    break;
}


 checkWinner(UserChoice, ComputerChoice);
   return 0;

}
   
int getComputerChoice(){
     return (rand() % 3) + 1;
   }

   int getUserChoice(){
    int choice = 0;

    do{
printf("Choose an option\n");
printf("1.ROCK\n");
printf("2.PAPER\n");
printf("3.SCISSOR\n");
printf("Enter Your Choice: ");
scanf("%d", &choice);
    }while(choice < 1 || choice > 3);
    
  return choice;
   }

void checkWinner(int UserChoice, int ComputerChoice) {
    if (UserChoice == ComputerChoice) {
        printf("\nIt's a tie!\n");
    } 
    // Logic: (Rock beats Scissors) OR (Paper beats Rock) OR (Scissors beat Paper)
    else if ((UserChoice == 1 && ComputerChoice == 3) || 
             (UserChoice == 2 && ComputerChoice == 1) || 
             (UserChoice == 3 && ComputerChoice == 2)) {
        printf("\nYOU WIN! Congratulations!\n");
    } 
    else {
        printf("\nYOU LOSE! Better luck next time.\n");
    }
}


 /* void checkWinner(int UserChoice, int ComputerChoice){
 if(UserChoice == ComputerChoice){
 printf("Its a tie");
 }
 else if(UserChoice == 1 && ComputerChoice == 3){
 printf("YOU WIN");
}
else if(UserChoice == 2 && ComputerChoice == 1){
 printf("YOU WIN");
}
else if(UserChoice == 3 && ComputerChoice == 2){
 printf("YOU WIN");
}
else{
printf("you lose");
}*/

