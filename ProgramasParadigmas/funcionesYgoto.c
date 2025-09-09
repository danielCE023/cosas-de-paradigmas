#include <stdio.h>

void saludo(){
    printf("hola k ase\n");
}

int main()
{
    saludo();
    printf("FIN\n");


    //implementacion de funcion usando goto

    goto llamar_saludo;   // simulación de la "llamada a función"

retorno1:                  // punto de regreso
    printf("Fin del programa\n");
    return 0;  // "return" hacia el punto de regreso
    

llamar_saludo:            // "cuerpo de la función"
    printf("Hola desde función con goto\n");
    goto retorno1;
   
}

