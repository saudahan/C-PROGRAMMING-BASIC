#include <stdio.h>
#include <math.h>

int main(){

printf("CIRCLE CALCULATOR\n");

 double radius = 0.0;
 double area = 0.0;
 double surfaceArea = 0.0;
 const double PI = 3.1416;

printf("Enter your radius: ");
scanf("%lf", &radius);
area = PI * pow(radius, 2);
printf("AREA: %.3lf\n", area);

//amra radius*radius o dite pare but amra ektu advamced style a korlam. 
//but as amra pow use korsi maader age #inlcude math use korte hoise

printf("Enter your radius: ");
scanf("%lf", &radius);
surfaceArea= 4 * PI * pow(radius, 2);
printf("SURFACE AREA: %.3lf\n", surfaceArea);


    return 0;
}