#include <stdio.h>
#include <windows.h>

int main(){

// for loop = Repeat some code a limited # of times
//            for(Initialization; Condition; Update)

for(int i = 0; i <= 10; i++){
    // delay korar jonno amra sleep term use kori but heading a windows.h clarify kore dite hobe.
    // and sleep er s capital Sleep be careful
    Sleep(1000);
    printf("%d\n", i); // \n dile line vertically nambe
}

// i++ dile ek ghor kore kore barbe similarly minus a kombe
// i+=2 ba i-=2 dile 2 kore barbe ba kombe 

for(int i1 = 10; i1>= 0; i1--){
    Sleep(1000);
    printf("%d ", i1); // \n na diye ekta space dile code horizontally jabe
}

printf("HAPPY NEW YEAR!");

    return 0;
}