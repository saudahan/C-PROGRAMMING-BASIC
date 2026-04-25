#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

/*
 Pseudo random = Appear random but are determined by a 
  mathematical formula that uses a seed value
  to genatrate a predeictable sequence of numbers.
  advanced: Mersenne Twister ot /dev/random
*/

// printf("%d", rand());

srand(time(NULL));

int min = 50;
int max = 100;

int randomNum = (rand() % 2) + 1;
// int randomNum = (rand() % range) + last limit of what i want;

// +1 cuz if i have 0 then it will add up and give me 1. and i wanted 1 and 2 
// similarly ami 50 theke 100 er bhitore chai akn jodi rand random chuto no. chooce kore then +50 korle oita auto 50 r upor chole jabe.

int randomNum1 = (rand() % (max - min + 1)) + min;
int randomNum2 = (rand() % (max - min + 1)) + min;
int randomNum3 = (rand() % (max - min + 1)) + min;
 

printf("%d %d %d %d", randomNum, randomNum1, randomNum2, randomNum3);

    return 0;
}