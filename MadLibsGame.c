#include <stdio.h>
#include <string.h>
int main(){

// Mad Libs Game

char noun[50] = "";
char verb[50] = "";
char adjective1[50] = "";
char adjective2[50] = "";
char adjective3[50] = "";

  
printf("Enter an adjective (description) : ");
fgets(adjective1, sizeof(adjective1), stdin);
adjective1[strlen(adjective1)-1] = '\0';

printf("Enter a noun ( animal or person) : ");
fgets(noun, sizeof(noun), stdin);
noun[strlen(noun)-1] = '\0';

printf("Enter an adjective (description) : ");
fgets(adjective2, sizeof(adjective2), stdin);
adjective2[strlen(adjective2)-1] = '\0';

printf("Enter a verb ( ending /w -ing) : ");
fgets(verb, sizeof(verb), stdin);
verb[strlen(verb)-1] = '\0';

printf("Enter an adjective (description) : ");
fgets(adjective3, sizeof(adjective3), stdin);
adjective3[strlen(adjective3)-1] = '\0';

printf("\nI saw a %s cat", adjective1);
printf("\nI think it was a %s", noun);
printf("\nHis eyes were %s", adjective2);
printf("\nHe saw me and started %s", verb);
printf("\nHe was running really %s", adjective3);

    return 0;
}