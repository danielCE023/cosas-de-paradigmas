#include <stdio.h>

int main(){
    int i=0;
    int n=0;
// implementacion normal de la funcion while

    while (i<5)
    {
        printf("que onda\n");

        i++;
    }
    printf("FIN while\n");  

    // variante de while usando goto
    inicio:
    printf("hola\n");
    n++;

    if(n<5)
        goto inicio;
    

    printf("FIN goto\n");

    return 0;

}