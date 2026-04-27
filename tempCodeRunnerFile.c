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
