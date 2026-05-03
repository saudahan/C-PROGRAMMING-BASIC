#include <stdio.h>

int main(){

 // 2D array = An array where each element is an array
 // we use when we need grid or matrix of data
 //         array[][] = {{}, {}};

char numpads[][3] = {{'1', '2', '3'},   // in 2nd box koy column er aita mention kore dite hobe
                   {'4', '5', '6'}, 
                   {'7', '8', '9'},
                   {'*', '0', '#'}
                 };

 // printf("%d", numbers[0][1]); // 1st box row r jonno
                            // 2nd box column er jonno

 for(int i = 0; i < 4; i++){ // row
for(int j = 0; j < 3; j++){ // column
 printf("%c ", numpads[i][j]);
}
printf("\n");
 }
// Always stick to Row then Column

    return 0;
}