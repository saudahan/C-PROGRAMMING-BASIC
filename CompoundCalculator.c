#include <stdio.h>
#include <math.h>

int main() {

printf("COMPOUND CALCULATOR\n");

    double total = 0.0;
    double principal = 0.0;
    double rate = 0.0;
    int times = 0;
    int year = 0;
    char currency = '$';

printf("Enter your principal: ");
scanf("%lf" , &principal);

printf("Enter your times: ");
scanf("%d" , &times);

printf("Enter your year: ");
scanf("%d" , &year);


printf("Enter your rate: ");
scanf("%lf" , &rate);
rate = rate/100;

// A = P(1+ r/n)^nt

total = principal * pow ((1+(rate/times)),(times * year));
printf("Total = %c%.2lf", currency , total);

/*
A(The "All Done" Amount):

P (The "Principal"): This is the Starting Pile.

r (The "Rate"): This is the Speed Limit.

n (The "Number of times"): This is How Often the bank checks your pile to add more money.
If they check it every month, $n$ is $12$.
If they check it once a day, $n$ is $365$.

t (The "Time"): This is How Long you leave the money in the machine. Usually, we count this in years.
*/

    return 0;
}