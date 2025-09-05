#include <stdio.h>

int main(){
    int i=0;

    //implementacion normal de do while
    do
    {
        printf("WA SAAA\n");
        i++;
    } while (i<5);

    printf("fin do while\n");
    //implementacion de do while usando goto
    int a=0;
    inicio: 
    printf("WA SAAA\n");
    a++;

    if (a < 5) 
        goto inicio;  // vuelve al inicio
    

    printf("fin GOTO\n");

    return 0;
}


    
