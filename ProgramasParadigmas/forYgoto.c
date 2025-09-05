#include <stdio.h>

int main(){
    int i;
    

    //implementacion normal de for:

    for (i = 0; i < 5; i++)
    {
        int multi= i*2;
        printf("multiplicación: %d\n",multi);
    }

    printf("fin FOR\n");
// implementacion de un for con goto
    int b=0;

    inicio:
    int mul = b*2;
    printf("multi %d\n",mul);
    b++;

    if (b<5)
        goto inicio;
    
     printf("fin GOTO\n");
    
    return 0;
    
}