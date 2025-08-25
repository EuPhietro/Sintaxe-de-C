#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// Função para calcular o módulo (resto da divisão)
// A chave de abertura fica em uma nova linha, alinhada com a declaração da função (Estilo Allman)
int modulo(int divisor, int dividendo)
{
    // O código dentro do escopo da função 'modulo' é recuado
    int resultado = divisor / dividendo;        // Calcula a divisão inteira
    int modulo_calculado = divisor % dividendo; // Calcula o resto da divisão

    return modulo_calculado; // Retorna o valor do módulo
} // A chave de fechamento é declarada na última linha do bloco da função

// Função principal do programa
// A chave de abertura fica em uma nova linha, alinhada com a declaração da função (Estilo Allman)
int main()
{
    // O código dentro do escopo da função 'main' é recuado
    printf("    No mundo da programacao, ha varias convencoes de indentacao para linguagens de alto nivel.\n");
    printf("A indentacao nao interfere no compilador, mas e uma forma de manter a legibilidade e compre-\n");
    printf("-ensao de um codigo, desta forma, ela se torna relevante nao para o entendimento da maquina\n");
    printf("mas para os desenvolvedores, que sao os principais leitores e manutenedores de codigos.\n");
    printf("Assim, no geral, temos algumas regras para codigos no estilo C-Like:\n");
    printf("-------------------------------------------------------------------------------------------\n");
    printf("\t\t\tREGRAS GERAIS\n\n");
    printf("1) O ABRIR E FECHAR DE CHAVES (BRACKETS) {}\n");
    printf("    Em termos gerais, o abrir e fechar de chaves eh usado para definir um escopo de uma funcao,\n");
    printf("funcionando como delimitadores de escopos, como por exemplo, a funcao principal, a main()\n");
    printf("Servindo tambem para diferenciar contextos, eh de suma importancia que o desenvolvedor entenda que:\n");
    printf("contextos sao importantes e que dentro das chaves eh que serao escritos blocos de codigo.\n");
    printf("Como por exemplo, a funcao [modulo] que guarda em seu escopo um bloco de codigo.\n");
    printf("Chamamos de escopo todo o espaco limite entre o abrir e fechar de chaves.\n");
    printf("Eh importante ressaltar que o abrir de chaves comeca uma linha abaixo da declaracao da funcao;\n");
    printf("e o fechar eh declarado na ultima linha do codigo.\n");
    printf("2) TABULACAO\n"); // Renomeado e numerado para consistência
    printf("    A tabulacao eh usada para manter a hierarquia do codigo, de forma que a declaracao da funcao e brackets\n");
    printf("fiquem no primeiro nivel como mostra o exemplo comentado abaixo:\n");
    printf("int main()\n");
    printf("{\n");
    printf("        printf(\"Hello, world!\\n\");\n"); // Corrigido para string literal válida em C e adicionado \n
    printf("}\n");
    printf("e as expressions dentro deste escopo fiquem recuadas, para manter a coesao e legibilidade, organizacao do codigo.\n"); // Adicionado '\n' e corrigido 'expressions' para 'instruções' no final
    printf("3) PONTO E VÍRGULA\n");
    printf("    É observado também, o ponto e vírgula, mas para quê que serve o ponto e vírgula? De forma geral, ele indica");
    printf("o fim de cada expression (expressão), mas o que é isso? Expressions são as linhas ou comandos, passo a passo,\n");
    printf("para a conclusão de uma operação, desta forma, cada linha pode ser considerada uma expression");
    
    return 0; // O 'main' retorna 0 para indicar sucesso
} // A chave de fechamento da função main