
Na programação em C, a capacidade de manipular dados e tomar decisões é fundamental. Este guia explora os **operadores relacionais e lógicos**, que permitem comparar e combinar valores, e as **estruturas de controle condicional (`if`, `else if`, `else`)**, que direcionam o fluxo de execução do programa com base nessas comparações.

### **Operadores Relacionais e Lógicos**

Para criar as condições que direcionam o fluxo do seu programa, utilizamos **operadores relacionais** (para comparar valores) e **operadores lógicos** (para combinar ou negar condições).

#### **Operadores Relacionais (Comparação)**

Assim como na matemática, os operadores relacionais são usados para comparar dois ou mais números ou variáveis. Eles sempre retornam um valor booleano: `1` (verdadeiro) ou `0` (falso) em C.

|Operador|Significado|Exemplo de Uso|Resultado (se `A=10, B=7, C=10`)|
|---|---|---|---|
|`==`|Igual a|`A == C`|`1` (verdadeiro)|
|`!=`|Diferente de|`A != B`|`1` (verdadeiro)|
|`>`|Maior que|`A > B`|`1` (verdadeiro)|
|`<`|Menor que|`B < A`|`1` (verdadeiro)|
|`>=`|Maior ou igual a|`A >= C`|`1` (verdadeiro)|
|`<=`|Menor ou igual a|`B <= A`|`1` (verdadeiro)|

#### **Operadores Lógicos (Combinação de Condições)**

Os operadores lógicos são utilizados para **combinar múltiplas expressões relacionais ou booleanas** em uma única condição composta, ou para **inverter o valor lógico** de uma expressão. Eles são amplamente usados em estruturas de controle como `if`, `while` e `for`, permitindo decisões mais complexas e precisas no fluxo do programa.

| Operador | Significado      | Exemplo de Uso      | Resultado (se `A=10, B=7, C=10`)             |
| -------- | ---------------- | ------------------- | -------------------------------------------- |
| `&&`     | E Lógico (AND)   | `(A > B && A == C)` | `1` (verdadeiro, pois ambas são verdadeiras) |
| \|\|     |                  | `                   | OU Lógico (OR)                               |
| `!`      | NÃO Lógico (NOT) | `!(A == B)`         | `1` (verdadeiro, pois `A == B` é falso)      |

### 🔍 Explicação Detalhada dos Operadores Lógicos:

- **`&&` (AND Lógico):** Combina duas ou mais expressões. Retorna `true` (representado por `1` em C) **somente se todas** as expressões forem verdadeiras. Se qualquer uma for falsa, o resultado é `false` (`0`).
    
    - **Exemplo:** `x > 0 && x < 100` → verdadeiro apenas se `x` estiver entre 1 e 99 (inclusive).
        
- **`||` (OR Lógico):** Retorna `true` (1) **se ao menos uma** das expressões for verdadeira. O resultado é `false` (`0`) apenas se todas as expressões forem falsas.
    
    - **Exemplo:** `x == 0 || y == 0` → verdadeiro se `x` for zero, ou se `y` for zero, ou se ambos forem zero.
        
- **`!` (NOT Lógico):** Inverte o valor lógico de uma expressão. Se a expressão original for verdadeira, `!` a torna falsa, e vice-versa.
    
    - **Exemplo:** `!(x > 5)` → verdadeiro se `x` **não** for maior que 5 (ou seja, se `x` for menor ou igual a 5).
        

#### **Exemplo Prático: Combinando Operadores**

Vamos usar sua ideia de pseudocódigo para demonstrar como os operadores relacionais e lógicos funcionam em C.

**Pseudocódigo:**

```pseudocodigo
A = 10
B = 7
C = 10

(A > B) ∧ (A = C)
```

Observando a expressão matemática acima, temos o operador lógico `∧` que na matemática é o `E` lógico. Logo, na última linha há uma comparação de "maior que" entre A e B, e depois há um `E` lógico, e uma comparação de igualdade entre A e C. Assim, se fôssemos transpor para C, ficaria:

```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main()
{
	int A = 10; // Declara e inicializa a variável A
	int B = 7;  // Declara e inicializa a variável B
	int C = 10; // Declara e inicializa a variável C
	
	// A condição do 'if' usa operadores relacionais (>) e lógicos (&&)
	if(A > B && A == C) // Se (A é maior que B) E (A é igual a C)
	{
		// Este bloco será executado se a condição composta for verdadeira
		printf("O valor da primeira expressao (A > B) eh: %d (1=Verdadeiro, 0=Falso)\n", A > B);     // Imprime o resultado da primeira comparacao
		printf("O valor da segunda expressao (A == C) eh: %d (1=Verdadeiro, 0=Falso)\n", A == C);   // Imprime o resultado da segunda comparacao
		printf("Ambas as condicoes sao verdadeiras!\n");             // Mensagem final
	}
    else
    {
        // Este bloco será executado se a condição composta for falsa
        printf("Pelo menos uma das condicoes nao eh verdadeira.\n");
    }
    
    return 0; // O programa termina com sucesso
}
```

Desta forma, é possível ver que em C, há uma forte semelhança no raciocínio lógico e matemático, utilizando operadores específicos para realizar comparações e combinar condições.

### **Estruturas de Controle Condicional (`if`, `else if`, `else`)**

O **desvio de fluxo**, também conhecido como **estruturas de controle condicional**, é o que permite que um programa tome decisões. Em vez de simplesmente executar o código linha por linha, o programa pode "escolher" qual caminho seguir com base em uma condição, que pode ser verdadeira ou falsa.

As palavras-chave **`if`** ("se") e **`else`** ("se não") são as ferramentas fundamentais para isso.

#### **A Analogia: Tomando Decisões na Vida Real**

Imagine a sua frase: "Vá ao mercado, se tiver leite traga também uma massa de bolo, se não, procure por leite em outro mercado."

Esta frase contém duas proposições que agem como condições para o seu interlocutor:

- A condição `se` ("se tiver leite").
    
- A condição `se não` ("se não").
    

A **condição `se`** só é executada quando a afirmação é **verdadeira**. Já a **condição `se não`** só é executada quando a afirmação é **falsa**.

**Pseudocódigo:**

```pseidocodigo
IR_AO_MERCADO ( TEM_LEITE ) :
	SE TEM_LEITE É VERDADEIRO:
		IMPRIMA("TEM LEITE");
	SE NÃO:
		IMPRIMA("VÁ A OUTRO MERCADO");
```

Neste pseudocódigo, a função `IR_AO_MERCADO` recebe uma variável booleana (`TEM_LEITE`) como parâmetro e prova a seguinte lógica: se a condição for verdadeira, executa o trecho de código correspondente; caso contrário, executa o trecho de código abaixo de `SENÃO`.

#### **Traduzindo para C: `if` e `else` na Prática**

Agora, vamos traduzir essa lógica para a sintaxe de C, organizando o código para máxima clareza.

```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main()
{
	int escolha; // Variável para armazenar a escolha do usuário

	// Mensagem de boas-vindas
	printf("Vá ao mercado\n");
	printf("No mercado em que voce foi, tem leite?\n");

	// Solicita a entrada do usuário
	printf("DIGITE 1 para SIM\nDIGITE 0 para NAO\n"); // Usa '\n' para quebra de linha
	scanf("%d", &escolha); // Lê a escolha e armazena em 'escolha'

	// Estrutura de desvio de fluxo (if-else)
	if(escolha == 1) // Se a escolha for igual a 1 (verdadeiro)...
	{
		// ...executa este bloco de código
		printf("Pegue tambem massa de bolo\n");
	}
    else // ...caso contrário (se a escolha não for 1)...
	{
		// ...executa este outro bloco de código
		printf("Vá a outro mercado\n");
	}
    
    return 0; // Encerra o programa
}
```

- **Análise do Código:**
    
    - **`int escolha;`**: Declaramos uma variável inteira `escolha` para guardar a resposta do usuário.
        
    - **`printf(...)`**: As chamadas a `printf()` exibem mensagens na tela. O caractere de escape para quebra de linha é **`\n`**.
        
    - **`scanf("%d", &escolha);`**: Esta função lê o número digitado pelo usuário e o armazena na variável `escolha`.
        
    - **`if(escolha == 1)`**: Aqui está o coração da lógica. A expressão `escolha == 1` é uma **condição**.
        
        - Se a condição for **verdadeira** (o usuário digitou `1`), o código dentro das chaves `{}` do `if` é executado.
            
        - Se a condição for **falsa** (o usuário digitou `0` ou qualquer outro número), o programa pula o bloco do `if` e executa o bloco do `else`.
            
    - **`else`**: Esta palavra-chave atua como o "plano B". Ele garante que um bloco de código seja executado se a condição do `if` principal não for satisfeita.
        

Com essa estrutura, seu programa agora pode tomar decisões com base na entrada do usuário, um passo essencial para criar aplicações interativas e inteligentes.

#### **A Sintaxe da Estrutura `if`**

A estrutura `if(<condição>)` recebe uma condição por parâmetro e a verifica. Se a condição for **verdadeira**, ela irá executar o código que está entre as chaves (`{}`). Caso contrário, o programa simplesmente pula esse bloco de código e continua a execução a partir da próxima linha.

- **Estrutura:**
    
```c
    if(<condição>) // Declaração do if e o teste da condição
    {              // Chave que delimita a abertura do seu escopo
      // <bloco de código>
    }              // Chave que delimita o fim de seu escopo
```
    
- **Quando Usar:** Use o `if` sempre que quiser executar uma ação específica apenas quando uma condição for satisfeita, como imprimir algo, atribuir um valor a uma variável ou até mesmo executar outras funções.
    

#### **Exemplo Prático (Intencionalmente Lógico)**

No código a seguir, observe que a última linha de `printf` está **fora** do bloco de controle do `if`. Isso significa que essa instrução será executada sempre, independentemente da condição ser verdadeira ou falsa. Este é um erro lógico comum, e é fundamental entendê-lo para ver por que o `else` é tão importante.

```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main()
{
	int idade;
	
    printf("Digite sua idade\n");
	scanf("%d", &idade);
	
	if(idade >= 18)
	{
		printf("Voce e maior de idade.\n");
	}
    // Repare que esta linha está fora do bloco do 'if'
	printf("Voce nao e maior de idade.\n");
    
    return 0;
}
```

- **Análise da Lógica:**
    
    - **`int idade;`** -> É declarada a variável que armazenará a idade.
        
    - **`printf("Digite sua idade\n")`** -> Imprime na tela qual ação deve ser tomada.
        
    - **`if(idade >= 18)`** -> Verifica se a idade é maior ou igual a 18 e executa o bloco de código dentro das chaves caso a condição seja verdadeira.
        
    - **`printf("Você não é maior de idade")`** -> Esta linha é executada **sempre**, após a verificação do bloco `if`, porque ela não faz parte da estrutura de controle condicional.
        

Este exemplo demonstra que para ter uma resposta exclusiva para o caso em que a condição é falsa, a palavra-chave `else` é necessária.

#### **A Sintaxe da Estrutura `else`**

Agora, analisando o código anterior, há um erro lógico intencional acontecendo. Ele faz com que a linha `printf("Voce nao e maior de idade.\n");` seja executada independentemente de a pessoa ser maior de idade ou não. Se a intenção era que esta expressão fosse executada apenas se a pessoa não fosse maior de idade, a sua lógica está semanticamente incorreta.

Vejamos a versão corrigida:

```C
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main()
{
	int idade;
	
    printf("Digite sua idade\n");
	scanf("%d", &idade);
	
	if(idade >= 18)
	{
		printf("Voce e maior de idade.\n");
	}
    else
	{
		printf("Voce nao e maior de idade.\n");
	}
    
    return 0;
}
```

Com o `else` no lugar, o trecho de código `printf("Voce nao e maior de idade.\n");` agora só é executado caso a condição do bloco `if` seja falsa.

### **`if`, `else if`, `else`: Uma Análise Completa**

Agora, se tratando de dominar o controle de fluxo, é necessário entender também o `else if`, que serve para adicionar mais uma testagem lógica após um `if` (e antes de um `else` final). Ele permite que você encadeie múltiplas condições.

**Exemplo:** Durante um bimestre, um professor que está ensinando programação em sua escola, com o objetivo de melhorar o raciocínio lógico de seus alunos, passou três avaliações. Ele quer fazer um programa em C para saber quais são as notas de seus alunos. Ele tem 3 critérios de avaliação:

- Se a nota for `>= 8`, o aluno não precisará fazer uma quarta avaliação.
    
- Se a nota for `>= 6` (e menor que 8), o aluno poderá fazer uma quarta avaliação.
    
- Se a nota for `< 6`, o aluno será reprovado.
    

```C
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main()
{
    float nota; // Variável para armazenar a nota do aluno

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota); // Lê a nota do usuário

    if (nota >= 8.0)
    {
        printf("Nota: %.1f - Nao precisara fazer a quarta avaliacao. Parabens!\n", nota);
    }
    else if (nota >= 6.0) // Esta condicao so sera testada se 'nota >= 8.0' for falsa
    {
        printf("Nota: %.1f - Podera fazer a quarta avaliacao.\n", nota);
    }
    else // Este bloco sera executado se 'nota >= 8.0' e 'nota >= 6.0' forem falsas
    {
        printf("Nota: %.1f - Reprovado. Nao foi dessa vez.\n", nota);
    }

    return 0; // O programa termina com sucesso
}
```

Neste exemplo:

1. A primeira condição (`if (nota >= 8.0)`) é verificada. Se verdadeira, o programa executa o bloco e ignora o resto.
    
2. Se a primeira for falsa, a condição do `else if (nota >= 6.0)` é verificada. Se verdadeira, o programa executa o bloco e ignora o `else`.
    
3. Se ambas as condições anteriores forem falsas, o bloco `else` final é executado.
    

Isso garante que apenas uma das mensagens de resultado seja exibida, de acordo com a nota do aluno, demonstrando o poder do `if-else if-else` para lidar com múltiplos cenários.

Você conseguiu entender como os operadores relacionais e lógicos trabalham juntos para criar condições mais complexas? Tente criar uma condição que use o operador `||` (OU Lógico)!