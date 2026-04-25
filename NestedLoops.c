#include <stdio.h>

int main(){
// core theme of coding is dont repeat yourself

/*
for(int i = 1; i < 10; i++){

    printf("%d ", i);
}

 printf("\n");

for(int i = 1; i < 10; i++){

    printf("%d ", i);
}

printf("\n");

for(int i = 1; i < 10; i++){

    printf("%d ", i);
}
*/

// AS WE WERE REPEATING LETS USE FOR LOOP

// i = 4 means "Keep going as long as i is 1, 2, 3, or 4"
for(int i = 1; i <= 10; i++){
 
 for(int j = 1; j <= 8; j++){
printf("%3d ", i * j);
} // 3 age diye amra ekta digit er age kototuk jaga nibe seita nirdharon korlam
printf("\n");
}

// Example 2

int row = 0;
int colomn = 0;
char symbol = '\0';

printf("\nEnter no. of # row: ");
scanf("%d", &row);

printf("Enter no. of # column: ");
scanf("%d", &colomn);

printf("Enter a symbol: ");
scanf(" %c", &symbol);


for(int i = 0; i < row; i++){

        for(int j = 0; j < colomn; j++){
            printf("%c ", symbol); // aikhane amra ki print korte chai seita dei always. 
        }
    printf("\n");
    }
  
 return 0;
}