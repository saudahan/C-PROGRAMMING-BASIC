#include <stdio.h>
#include <string.h>

int main(){

char name [50] = " ";

printf("Enter your name: ");

fgets(name, sizeof(name), stdin);
name[strlen(name)-1] = '\0';

if(strlen(name) == 0){
    printf("You didnt type your name.");
}

else {
printf("Hi %s.\nHow are you?", name);
}

    return 0;
}