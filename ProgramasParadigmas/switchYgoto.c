#include <stdio.h>

int main(){
    int opcion = 2;

    switch (opcion) {
        case 1:
            printf("Opción 1 seleccionada\n");
            break;
        case 2:
            printf("Opción 2 seleccionada\n");
            break;
        case 3:
            printf("Opción 3 seleccionada\n");
            break;
        default:
            printf("Opción no válida\n");
            break;
    }
    printf("fin SWITCH\n");

    //implementacion de switch con goto

    
}