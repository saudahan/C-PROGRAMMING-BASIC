#include <stdio.h>
#include <string.h>

// user input er jonno string use korle header dite bhulyo na

void happyBirthday(char name[], int age ){
    printf("\nBIRTHDAY TO YOU");
    printf("\nBIRTHDAY TO YOU");
    printf("\nBIRTHDAY DEAR %s", name);
    printf("\nBIRTHDAY TO YOU\n");
    printf("You are %d years old\n", age);
}

int main(){

   // functions= A reuseable section of code that can be invoked 'called'
   // Arguments can be sent to a function so that it can use them.
   // argument tmr mono koro mainly ki pathaba oita r nam pathay je ami aita dibo oita dibo seijonno name, age airokom leklei hoise value pass hoise
   // parameter hoile o sinta kore ami ki ki recieve korbo tai amader char name[] airokom lekste hoise name , age airokom na lekhe
   // must know that inside r outside of main() nam matter kore na c te. karon value to same e juice r drink ja e daki na keno

   char name[50] = "";
   int age = 0;

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name)-1] = '\0';
  
  printf("Enter your age: ");
  scanf("%d", &age);

  
 happyBirthday(name, age);
 happyBirthday(name, age);



/*
void happyBirthday(char birhdayBoy[], int yearOld ){
    printf("\nBIRTHDAY TO YOU");
    printf("\nBIRTHDAY TO YOU");
    printf("\nBIRTHDAY DEAR %s", birhdayBoy);
    printf("\nBIRTHDAY TO YOU\n");
    printf("You are %d years old", yearOld);
}

int main(){

   char name[] = "BRO";
 int age = 25;

 happyBirthday(name, age);

 why using birthday boy and year old insyead of name and age stills wokrs ?

= 🚫 Important rule:

C does NOT send the variable name.
It sends only the value inside it.

🎯 Simple truth:

👉 Names outside ≠ names inside
👉 Only the values travel, not the names

🍫 Even simpler:

You give chocolate to someone.

You call it chocolate
They call it snack

🍫 is still the same thing 😄

*/









    return 0;
}