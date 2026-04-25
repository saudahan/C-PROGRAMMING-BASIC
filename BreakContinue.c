#include  <stdio.h>

int main(){

// break = Break out of a loop (STOP)
// continue = Skip current cycle of a loop (Skip)

for(int i = 1; i<= 10; i++){

    if(i == 4){
    continue;
}
// continue dile 4 ke skip kore baki continue hoy

if(i == 8){
    break;
}
// break use korle 4 dekte e theme jay that measn 3 te thame



printf("%d\n", i);
}


    return 0;
}