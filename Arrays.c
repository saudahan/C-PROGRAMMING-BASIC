#include <stdio.h>

int main(){

 // array = A fixed size collection of elements of the same type 
 // (similar to a variable, but it holds more than 1 value )


 int numbers[] = {10, 20, 30, 40, 50};
 char grades[] = {'A', 'B', 'C', 'D'};
 
 printf("%d\n", numbers[0]); // array starts from [0] not [1] be careful
 printf("%c\n", grades[2]);

 char name[] = "BRO CODE"; // aita string amra %s use kori not %c
 printf("%s\n", name); 

char name2[] = "BRO CODE"; // aita hocche array karon amra alada kore dekho printf a disi
 printf("%c\n", name2[2]); // so oi number er place a je letter ase oita show kortese


/*
 for( int i = 0; i < 3; i++){ // aigula te semicolon hobe not comma be careful
    printf("%c ", grades[i]);  // %c r pore space khali rakle code horizontal jay
 }                             // space na diye /n dile vertical a jai 
*/


 // output amra ja ase ta e pabo. but suppose ekta new grade add hoise D. then
 // amar manually eshe for loop er bhitor change korte hobe aita pera.
 // emn kuno trick jodi thakto auto koita number ase oita bujhe agaito then amr r 
 // alada kore kaj kora lagto na .

 /* suppose

 printf("%d\n", sizeof(grades));
 printf("%d\n", sizeof(grades[0]));

 ja dekhay ta holo 3 and 1. 3 divide by 1 = 3. that means array r bhitor 3 ta grade ase.
 so amra kun formula hobe amra bujte partesi
*/

 int size = sizeof(grades) / sizeof(grades[0]);

 for( int i = 0; i < size; i++){ 
    printf("%c ", grades[i]);
 }








    return 0;
}