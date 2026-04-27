#include <stdio.h>

// GLOBAL SCOPE hoccche 1st a e int result = 0; mention kore diye pore r na korle but aita hard to debug use na kora e valo. LOCAL SCOPE BEST

int add(int x, int y){
    int result = x + y;
    return result;
}
int sub(int x, int y){
    int result = x - y;
    return result;
}


int main(){

// Variable scope = Refers to where a variable is recognized and accesible.
//                  Variables can share the same if
//                  they're in different scopes {}


int result = add(3, 4); // LOCAL SCOPE
printf("%d\n", result);

result = sub(4, 3);  //Tumi jodi ek-i variable bar bar bebohar korte chao, tobe ditio bar int likhba na, shudhu value change korbe.
printf("%d", result);


return 0;  
}