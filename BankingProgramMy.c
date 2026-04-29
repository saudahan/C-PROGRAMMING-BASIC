// ai program a mai onk atkaite then shes mesh ai ke diye amr moto kore fix korsi then onk kichu confusion shilo connect korte 
//partesilam na . function r main er moddhe parameter diye then claude fix kore dise but parameter use kore nai . asaol somossa hoisilo ami video yt r moto kore 
// na kore nijer moto alada input er joono function nite chaisilam. r oikhan theke e joto prb start. 5 hr + gutaisi pari nai.
// clause jeita dise paramter shara but atleast alada fuction ta connect korte parse. aita bujha baki akn bujbo.
// r amr main jeita parameter soho aita r concept akn bujshi...loop input ek jagay thakte hoy oita e miss korteshilam.  niche pura chat copy paste korsi.
// 

#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);
int getUserInput();

int main(){
 int userChoice = 0;
 float balance = 0.0f;

 printf("***Welcome to the Bank***\n");
 
 //🟣 One line rule (important)
// 👉 Function যদি নিজে data collect করে → parameter লাগে না
// 👉 Function যদি বাইরে থেকে data লাগে → parameter লাগে
 
 do {
        userChoice = getUserInput();
   switch(userChoice){
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nThank you for using the bank!\n");
                break;
            default:
                printf("\nInvalid choice! Please select 1 - 4\n");
        }

    } while(userChoice != 4); 
    return 0;
}


//💡 One powerful line মনে রাখো
//👉 “Loop যেখানে, input সেখানেই”

int getUserInput(){
    int choice = 0;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice < 1 || choice > 4){                                    //🎯 Final answer

                                                                        //✔ Yes, if alone is totally fine
                                                                        //✔ else is NOT mandatory
                                                                       //✔ Use else only when you need an opposite action
            printf("Invalid choice! Please select 1 - 4\n");
        }
    } while(choice < 1 || choice > 4);

    return choice;
}



 
void checkBalance(float balance){
    printf("\nYour current balance is: $%.2f\n", balance);
}



float deposit(){
    float amount = 0.0f;
    printf("\nEnter amount to deposit: $");
    scanf("%f", &amount);

    if(amount <= 0){
        printf("Invalid amount!\n");
        return 0.0f;
    } else {
        printf("Successfully deposited $%.2f\n", amount);
        return amount;
    }
}

// 🧠 Very important mental model
///✔ main() return
//→ tells system status
//✔ function return (deposit, withdraw)
//→ sends calculated value to other code
//🎯 Final simple summary
// 0 = integer zero
//0.0f = float zero
//main return 0 = success
//main return 1 = error
//other functions return values for logic/data transfer

float withdraw(float balance){
    float amount = 0.0f;
    printf("\nEnter amount to withdraw: $");
    scanf("%f", &amount);

    if(amount <= 0){
        printf("Invalid amount!\n");
        return 0.0f;
    } else if(amount > balance){
        printf("Insufficient funds! Your balance is $%.2f\n", balance);
        return 0.0f;
    } else {
        printf("Successfully withdrew $%.2f\n", amount);
        return amount;
    }
}

// amar jei parameter loop main a a prb hoisilo , connect er prb oita e niche diye disi

/*
 i want parameter . loop and input in main and validation in function. no extras things  plz

Got it — you want:

main() → handles loop + input
function → only validates
uses parameter
no extra complexity

That’s totally fine. Let’s fix it cleanly.

❌ Your mistake

You were trying to “return to main” — but actually you only need:
👉 function returns TRUE/FALSE (valid or invalid)

✔️ Correct simple structure
✔️ Validation function (with parameter)
int getUserInput(int choice) {
    if (choice >= 1 && choice <= 4) {
        return 1;   // valid
    } else {
        printf("Invalid choice! Please select 1 - 4\n");
        return 0;   // invalid
    }
}

// info from chatgpt
// function checks:
// valid → returns 1 → loop stops
//invalid → returns 0 → loop repeats


✔️ main function (loop + input)
#include <stdio.h>

int getUserInput(int choice);

int main() {
    int choice;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

    } while (getUserInput(choice) == 0);

    printf("Valid choice selected: %d\n", choice);

    return 0;
}


🧠 How it works
user inputs in main
function checks:
valid → returns 1 → loop stops
invalid → returns 0 → loop repeats
⭐ Key idea you needed

👉 Function does NOT restart main
👉 It only says: valid or invalid
*/