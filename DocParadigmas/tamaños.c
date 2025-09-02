#include <stdio.h>
#include <limits.h>

// Variables inicializadas
char c = CHAR_MIN;
unsigned char uc = UCHAR_MAX;
int i = INT_MAX;
unsigned int ui = UINT_MAX;
long l = LONG_MIN;
unsigned long ul = ULONG_MAX;
long long ll = LLONG_MIN;
unsigned long long ull = ULLONG_MAX;

//float f = FLT_MAX;
//double d = DBL_MAX;
//long double ld = LDBL_MAX;

int main()
{
    // Imprimir resultados
    printf("char: %d\n", (int)c);
    printf("unsigned char: %u\n", (unsigned int)uc);
    printf("int: %d\n", i);
    printf("unsigned int: %u\n", ui);
    printf("long: %ld\n", l);
    printf("unsigned long: %lu\n", ul);
    printf("long long: %lld\n", ll);
    printf("unsigned long long: %llu\n", ull);
   ///printf("float: %f\n", f);
    //printf("double: %f\n", d);
    //printf("long double: %Lf\n", ld);
    return 0;
}
