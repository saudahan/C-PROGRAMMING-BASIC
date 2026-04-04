#include <stdio.h>
int main(){

// operator.... + - * / % ++ -- 

int x = 10;
int y = 3;
int z = 0;

// z = x + y;
 z = x - y;
// z = x * y;
// z = x / y;
/*
divide er ketre onk somoy value decimal a asar kotha so tokhon amader int na use kore float use 
korte hobe.
sathe tmr printf a %f use korete hobe %d r bodla....careful
*/
// z = x % y; (% diye reminder bujay)

printf("%d\n", z);
// added all the example in comment format
// jokhon review dibo ekta ekta kore comment soraile e statement hoye jabe and function kaj korbe

int a = 5;
a++;
// ++ increment means it will increase by 1
// -- means it will decrease by 1
printf("%d\n", a);

// Augmented assignment operators

// x = x + 2;
// x = x - 2;
// x = x * 2;
// x = x / 2;

// this r general one. we can use more shortcut in below ways.  both will give us same result

x+=2;
// x-=2;
// x*=2;
// x/=2;

printf("%d\n", x);


    return 0;
}