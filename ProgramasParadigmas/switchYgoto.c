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

    if (opcion == 1) goto caso1;
    if (opcion == 2) goto caso2;
    if (opcion == 3) goto caso3;
    goto casoDefault;   // si no fue ninguna, va a default

caso1:
    printf("Opción 1 seleccionada\n");
    goto finSwitch;

caso2:
    printf("Opción 2 seleccionada\n");
    goto finSwitch;

caso3:
    printf("Opción 3 seleccionada\n");
    goto finSwitch;

casoDefault:
    printf("Opción no válida\n");
    goto finSwitch;

finSwitch:
    printf("Fin del switch GOTO\n");
    return 0;
}
