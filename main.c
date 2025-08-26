#include <stdio.h>
#include <string.h>

int main() {
    // ============================================
    // SEÇÃO 1: OPERADORES ARITMÉTICOS (+, -, *, /, %)
    // ============================================

    // Declaração de variáveis
    int A, B;
    int soma, subtr, multip, divis, modulo;

    // Entrada de dados
    printf("Digite um valor para A: ");
    scanf("%d", &A);

    printf("Digite um valor para B: ");
    scanf("%d", &B);

    // Operações aritméticas
    soma   = A + B;   // Operador de soma (+)
    subtr  = A - B;   // Operador de subtração (-)
    multip = A * B;   // Operador de multiplicação (*)
    divis  = A / B;   // Operador de divisão (/)
    modulo = A % B;   // Operador de módulo (%)

    // Saída dos resultados
    printf("\n=== RESULTADOS ARITMÉTICOS ===\n");
    printf("A + B (Soma):           %d\n", soma);
    printf("A - B (Subtração):      %d\n", subtr);
    printf("A * B (Multiplicação):  %d\n", multip);
    printf("A / B (Divisão):        %d\n", divis);
    printf("A %% B (Módulo):         %d\n", modulo);

    // ==================================================
    // SEÇÃO 2: OPERADORES DE ATRIBUIÇÃO (+=, -=, *=, /=, %=)
    // ==================================================

    // Variáveis com valores iniciais
    int igualSoma     = 10;
    int igualSubtra   = 5;
    int igualMultipli = 14;
    int igualDiv      = 20;
    int igualModulo   = 20;

    // Aplicação dos operadores de atribuição
    igualSoma     += soma;    // += Soma acumulada
    igualSubtra   -= subtr;   // -= Subtração acumulada
    igualMultipli *= multip;  // *= Multiplicação acumulada
    igualDiv      /= divis;   // /= Divisão acumulada
    igualModulo   %= soma;    // %= Módulo acumulado

    // Saída dos resultados
    printf("\n=== OPERADORES DE ATRIBUIÇÃO ===\n");
    printf("+= (Soma acumulada):           %d\n", igualSoma);
    printf("-= (Subtração acumulada):      %d\n", igualSubtra);
    printf("*= (Multiplicação acumulada):  %d\n", igualMultipli);
    printf("/= (Divisão acumulada):        %d\n", igualDiv);
    printf("%%= (Módulo acumulado):         %d\n", igualModulo);

    // ============================================
    // SEÇÃO 3: INCREMENTADOR (++i)
    // ============================================

    char nome[50] = "HENRY PHIETRO AGUIAR DA SILVA";

    printf("\n=== INCREMENTADOR (leitura da esquerda para a direita) ===\n");
    for (int i = 1; i <= strlen(nome); ++i) {
        char letter = nome[i - 1];
        printf("Índice: %2d | Letra: %c\n", i - 1, letter);
    }

    // ============================================
    // SEÇÃO 4: DECREMENTADOR (--i)
    // ============================================

    printf("\n=== DECREMENTADOR (leitura da direita para a esquerda) ===\n");
    for (int i = strlen(nome); i > 0; --i) {
        char letter = nome[i - 1];
        printf("Índice: %2d | Letra: %c\n", i - 1, letter);
    }

    return 0;
}
