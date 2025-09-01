#include <stdio.h>
#include <limits.h>
#include <float.h>

// Variables inicializadas
char c = CHAR_MIN;
unsigned char uc = UCHAR_MAX;
int i = INT_MIN;
unsigned int ui = UINT_MAX;
long l = LONG_MIN;
unsigned long ul = ULONG_MAX;
long long ll = LLONG_MIN;
unsigned long long ull = ULLONG_MAX;

float f = FLT_MAX;
double d = DBL_MAX;
long double ld = LDBL_MAX;

int main() {
    // Imprimir resultados
    printf("char:                tamaño=%zu bytes, valor=%d\n", sizeof(c), c);
    printf("unsigned char:       tamaño=%zu bytes, valor=%u\n", sizeof(uc), uc);
    printf("int:                 tamaño=%zu bytes, valor=%d\n", sizeof(i), i);
    printf("unsigned int:        tamaño=%zu bytes, valor=%u\n", sizeof(ui), ui);
    printf("long:                tamaño=%zu bytes, valor=%ld\n", sizeof(l), l);
    printf("unsigned long:       tamaño=%zu bytes, valor=%lu\n", sizeof(ul), ul);
    printf("long long:           tamaño=%zu bytes, valor=%lld\n", sizeof(ll), ll);
    printf("unsigned long long:  tamaño=%zu bytes, valor=%llu\n", sizeof(ull), ull);

    printf("float:               tamaño=%zu bytes, valor=%e\n", sizeof(f), f);
    printf("double:              tamaño=%zu bytes, valor=%e\n", sizeof(d), d);
    printf("long double:         tamaño=%zu bytes, valor=%Le\n", sizeof(ld), ld);

    return 0;
}
