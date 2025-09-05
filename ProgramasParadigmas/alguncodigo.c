#include <stdio.h>

int main(){
    int i=0;

    etiqueta1:
    printf("Incremento %d\n", i);
    i++;
    if(i<5){
        goto etiqueta1;
    }

    printf("FIN\n");

    return 0;
}