#include <stdio.h>

int main(){
    float f=-5.75;
    double d=-5.75;

    // se usan los unsigned para recorrer la memoria
    
    unsigned char *pf = (unsigned char*)&f;
    unsigned char *pd = (unsigned char*)&d;

    printf("Float (%f) en hex: 0x", f);
    for (int i = sizeof(float) - 1; i >= 0; i--) {
        printf("%02X", pf[i]);
    }
    printf("\n");

    printf("Double (%lf) en hex: 0x", d);
    for (int i = sizeof(double) - 1; i >= 0; i--) {
        printf("%02X", pd[i]);
    }
    printf("\n");

    return 0;

    

}