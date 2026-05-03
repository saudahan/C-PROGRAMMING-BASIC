#include <stdio.h>

int main(){

// char score[5] = " "; aita diye amra string initialize kori

int scores[5] = {0}; // array initialize kore {} use kori

/*
 AIKAHNE REPEAT HOCCHE TO AMRA LOOP USE KORTE PARI

printf("Enter a scores: ");
scanf("%d", &scores[0]);

printf("Enter a scores: ");
scanf("%d", &scores[1]);

printf("Enter a scores: ");
scanf("%d", &scores[2]);

for(int i = 0; i < 2; i++){
    printf("%d ", scores[i]);
}
*/

for(int i = 0; i < 2; i++){
   printf("Enter a scores: ");
   scanf("%d", &scores[i]);
}

for(int i = 0; i < 2; i++){
    printf("%d ", scores[i]);
}
    return 0;
}


/*
1. The if Statement (The Decision)
Use this when you want to run code once—but only if a specific condition is true. It’s a "Yes or No" branch.
"If it's raining, take an umbrella."

2. The for Loop (The Counter)
We use for when we know exactly how many times we want to do something.
"Do 10 pushups."

3. The while Loop (The Unknown)
Use this when you don't know how many times you’ll need to repeat. You just want to keep going until something changes.
Real-world example: "Keep washing dishes while the sink is not empty." You don't know if there are 3 dishes or 10.
"Run until you are tired."

4. The do-while Loop (The "At Least Once")
This is exactly like a while loop, but it guarantees the code runs at least one time before checking the condition.
Real-world example: "Ask the user for a password. If it's wrong, ask again." You have to ask at least once to see if they get it right!
"Try a sample of food, then eat more if you like it."
*/