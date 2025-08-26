#include <stdio.h>
#include <math.h>
#include <float.h>

// INTEIROS
const int INT_MAX = 2147483647;
const int INT_MIN = -2147483648;
// INTEIROS SEM SINAL
const unsigned int UINT_MIM = 0;
const unsigned int UINT_MAX = 4294967295;
// SHORT INTEIROS
const short int S_INT_MIN = -32768;
const short int S_INT_MAX = 32767;
// LONG INTEIROS
const long int L_INT_MIN = -9223372036854775808;
const long int L_INT_MAX = 9223372036854775807;
// FLOATS, NÚMEROS COM PONTO FLUTUANTE
const float FLOAT_MIN = 1.17549435082228750796873653722224568e-38F;
const float FLOAT_MAX = 3.40282346638528859811704183484516925e+38F;
// FLOAT NÚMEROS COM PONTO FLUTUANTE COM DUPLA PRECISÃO
const double DOUBLE_MIN = 2.22507385850720138309023271733240406e-308L;
const double DOUBLE_MAX = 1.79769313486231570814527423731704357e+308L;





int main()
{

    printf("Numéricos inteiros");
    // Contadores de loops como for(), idade, quantidade
    int inteiroMin = INT_MIN; // 4bytes
    int inteiroMax = INT_MAX; // 4bytes
    // Índices, tamanhos de arrays
    unsigned int inteiroSemSinalMin = UINT_MIM; // 4bytes
    unsigned int inteiroSemSinalMax = UINT_MAX; // 4bytes

    // VARIANTES

    // Dados compactos, sensores
    short shortMin = S_INT_MIN;
    short shortMax = S_INT_MAX;
    // Timestamps, grandes contagens
    long longMin = L_INT_MIN;
    long longMax = L_INT_MAX;

    printf("Numéricos decimais");
    // Cálculos científicos, gráficos
    float floatMin = FLOAT_MIN; // 4bytes
    float floatMax = FLOAT_MAX; // 4bytes
    // Precisão financeira, simulações
    double doubleMin = DOUBLE_MIN; // 8bytes
    double doubleMax = DOUBLE_MAX; // 8bytes

    printf("Char e String");
    // Armazenar letras, símbolos
    char charEmBytes = '1';             // 1byte
    char vetorEmBytes[10] = "Variável"; // undefined bit lenght
    // Condições, flags
    int booleanFalse = 0; // 1bit
    int booleanTrue = 1;  // 1bit
}
