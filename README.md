

No universo da programação, os **operadores** são símbolos especiais que instruem o compilador a realizar operações específicas, sejam elas matemáticas, lógicas ou de atribuição. Eles são a espinha dorsal de qualquer cálculo ou manipulação de dados em C. Assim como na matemática, essas operações seguem uma **hierarquia de precedência**, onde algumas são executadas antes de outras (por exemplo, a multiplicação tem precedência sobre a adição).

Conforme exploramos em [[📚 Variáveis em C]], as operações computacionais frequentemente envolvem a manipulação de dados armazenados em variáveis na memória, como números, caracteres, valores de ponto flutuante e vetores de caracteres (strings).

### Operadores Aritméticos

Os **operadores aritméticos** são utilizados para realizar cálculos matemáticos básicos. Eles funcionam de maneira análoga às operações que aprendemos na escola.

|Operador|Descrição|Exemplo de Uso|Resultado|
|---|---|---|---|
|`+`|Adição|`5 + 3`|`8`|
|`-`|Subtração|`10 - 4`|`6`|
|`*`|Multiplicação|`2 * 6`|`12`|
|`/`|Divisão|`10 / 2`|`5`|
|`%`|Módulo (Resto da Divisão)|`10 % 3`|`1`|

**Atenção com a Divisão (`/`):**

- Se ambos os operandos forem **inteiros**, o resultado da divisão também será um inteiro (a parte decimal é truncada). Por exemplo, `7 / 2` resulta em `3`.
    
- Se pelo menos um dos operandos for um número de **ponto flutuante** (`float` ou `double`), o resultado será de ponto flutuante. Por exemplo, `7.0 / 2` ou `7 / 2.0` resulta em `3.5`.
    

**Exemplo Prático:**

```C
#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 3;
    float num3 = 10.0f;

    printf("Soma: %d\n", num1 + num2);
    // Saída: 13
    printf("Subtracao: %d\n", num1 - num2);
    // Saída: 7
    printf("Multiplicacao: %d\n", num1 * num2); 
    // Saída: 30
    printf("Divisao Inteira: %d\n", num1 / num2); 
    // Saída: 3 (parte decimal truncada)
    printf("Divisao com float: %.2f\n", num3 / num2); 
    // Saída: 3.33
    printf("Modulo (Resto): %d\n", num1 % num2); 
    // Saída: 1

    return 0;
}
```

### Operadores de Atribuição

Os **operadores de atribuição** são utilizados para armazenar um valor em uma variável. O mais básico é o `=` (atribuição simples), mas C oferece formas abreviadas para operações comuns.

#### 1. Atribuição Simples (`=`)

- **Propósito:** Atribui o valor do operando à direita para a variável no operando à esquerda.
    
- **Exemplo:** `int idade = 25;` (a variável `idade` recebe o valor `25`).
    

#### 2. Atribuição Composta (Incrementadores, Decrementadores e Aritméticos Compostos)

Esses operadores combinam uma operação aritmética com uma atribuição, tornando o código mais conciso.

|Operador|Descrição|Exemplo de Uso|Equivalente a|
|---|---|---|---|
|`++`|Incremento (adiciona 1)|`contador++`|`contador = contador + 1;`|
|`--`|Decremento (subtrai 1)|`contador--`|`contador = contador - 1;`|
|`+=`|Atribuição-Soma|`total += 5`|`total = total + 5;`|
|`-=`|Atribuição-Subtração|`total -= 2`|`total = total - 2;`|
|`*=`|Atribuição-Multiplicação|`valor *= 3`|`valor = valor * 3;`|
|`/=`|Atribuição-Divisão|`resultado /= 2`|`resultado = resultado / 2;`|
|`%=`|Atribuição-Módulo|`resto %= 10`|`resto = resto % 10;`|

**Exemplo Prático:**

```C
#include <stdio.h>

int main() {
    int x = 10;
    int y = 5;

    printf("Valor inicial de x: %d\n", x); // Saída: 10

    x++; // x é incrementado para 11
    printf("x depois de x++: %d\n", x); // Saída: 11

    y--; // y é decrementado para 4
    printf("y depois de y--: %d\n", y); // Saída: 4

    x += 5; // x = x + 5, agora x é 16
    printf("x depois de x += 5: %d\n", x); // Saída: 16

    y *= 2; // y = y * 2, agora y é 8
    printf("y depois de y *= 2: %d\n", y); // Saída: 8

    return 0;
}
```

**Observação sobre `++` e `--` (Pré e Pós-incremento/decremento):**

Estes operadores têm uma particularidade quando usados em expressões:

- **Pós-incremento/decremento (`i++`, `i--`):** O valor da variável é **usado na expressão primeiro**, e **DEPOIS** é incrementado/decrementado.
    
    ```
    int a = 5;
    int b = a++; // 'b' recebe o valor de 'a' (5), então 'a' é incrementado para 6.
    // Agora: a = 6, b = 5
    ```
    
- **Pré-incremento/decremento (`++i`, `--i`):** O valor da variável é **incrementado/decrementado primeiro**, e **DEPOIS** é usado na expressão.
    
    ```
    int c = 5;
    int d = ++c; // 'c' é incrementado para 6, então 'd' recebe o valor de 'c' (6).
    // Agora: c = 6, d = 6
    ```
    

Entender a diferença entre pré e pós-incremento/decremento é crucial para evitar erros sutis em seus programas.