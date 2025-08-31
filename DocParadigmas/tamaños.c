#include <stdio.h>
#include <limits.h>
#include <float.h>

// Variables globales con valores mínimos y máximos
char c_min = CHAR_MIN;
char c_max = CHAR_MAX;
unsigned char uc_min = 0;
unsigned char uc_max = UCHAR_MAX;

int i_min = INT_MIN;
int i_max = INT_MAX;
unsigned int ui_min = 0;
unsigned int ui_max = UINT_MAX;

long l_min = LONG_MIN;
long l_max = LONG_MAX;
unsigned long ul_min = 0UL;
unsigned long ul_max = ULONG_MAX;

long long ll_min = LLONG_MIN;
long long ll_max = LLONG_MAX;
unsigned long long ull_min = 0ULL;
unsigned long long ull_max = ULLONG_MAX;

float f_min = -FLT_MAX;   // mínimo negativo
float f_max = FLT_MAX;
double d_min = -DBL_MAX;
double d_max = DBL_MAX;
long double ld_min = -LDBL_MAX;
long double ld_max = LDBL_MAX;

int main() {
    // char
    printf("char:               tamaño=%zu bytes, min=%d, max=%d\n",
           sizeof(c_min), c_min, c_max);
    printf("unsigned char:      tamaño=%zu bytes, min=%u, max=%u\n",
           sizeof(uc_min), uc_min, uc_max);

    // int
    printf("int:                tamaño=%zu bytes, min=%d, max=%d\n",
           sizeof(i_min), i_min, i_max);
    printf("unsigned int:       tamaño=%zu bytes, min=%u, max=%u\n",
           sizeof(ui_min), ui_min, ui_max);

    // long
    printf("long:               tamaño=%zu bytes, min=%ld, max=%ld\n",
           sizeof(l_min), l_min, l_max);
    printf("unsigned long:      tamaño=%zu bytes, min=%lu, max=%lu\n",
           sizeof(ul_min), ul_min, ul_max);

    // long long
    printf("long long:          tamaño=%zu bytes, min=%lld, max=%lld\n",
           sizeof(ll_min), ll_min, ll_max);
    printf("unsigned long long: tamaño=%zu bytes, min=%llu, max=%llu\n",
           sizeof(ull_min), ull_min, ull_max);

    // flotantes
    printf("float:              tamaño=%zu bytes, min=%e, max=%e\n",
           sizeof(f_min), f_min, f_max);
    printf("double:             tamaño=%zu bytes, min=%e, max=%e\n",
           sizeof(d_min), d_min, d_max);
    printf("long double:        tamaño=%zu bytes, min=%Le, max=%Le\n",
           sizeof(ld_min), ld_min, ld_max);

    return 0;
}
