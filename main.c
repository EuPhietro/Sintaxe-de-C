#include <stdio.h>
#include <stdbool.h>

struct Aluno
{ // AQUI É DECLARADO
    char primeiroNome[15];
    char ultimoNome[15];
    int primeiraAvaliacao;
    int segundaAvaliacao;
    int terceiraAvaliacao;
    int avaliacaoRecuperacao;
    bool isTrabalhoExtra;
    bool isAprovado;
};

float mediaNotas(struct Aluno aluno)
{
    return (aluno.primeiraAvaliacao + aluno.segundaAvaliacao + aluno.terceiraAvaliacao) / 3.0;
}

void menu(struct Aluno alunos[10])
{
    int item;
    printf("\n|ESCOLHA UMA OPÇÃO|\n");
    printf("1 - VER ALUNOS APROVADOS\n");
    printf("2 - VER SELECIONADOS PARA A 4ª AVALIAÇÃO\n");
    printf("3 - VER ALUNOS REPROVADOS\n");
    printf("4 - SAIR\n");
    printf("Opção: ");
    scanf("%d", &item);

    switch (item)
    {
    case 1:
        printf("\n--- ALUNOS APROVADOS (Média ≥ 8) ---\n");
        for (int i = 0; i < 10; i++)
        {
            float media = mediaNotas(alunos[i]);
            if (media >= 8)
            {
                alunos[i].isAprovado = true;
                printf("|%-15s %-15s| -> MÉDIA: %.2f\n", alunos[i].primeiroNome, alunos[i].ultimoNome, media);
            }
        }
        menu(alunos);
        break;

    case 2:
        printf("\n--- ALUNOS NA 4ª AVALIAÇÃO (Média ≥ 6 e < 8) ---\n");
        for (int i = 0; i < 10; i++)
        {
            float media = mediaNotas(alunos[i]);
            if (media >= 6 && media < 8)
            {
                alunos[i].isAprovado = true;
                 alunos[i].isTrabalhoExtra = true;
                printf("|%-15s %-15s| -> MÉDIA: %.2f\n", alunos[i].primeiroNome, alunos[i].ultimoNome, media);
            }
        }
        menu(alunos);
        break;

    case 3:
        printf("\n--- ALUNOS REPROVADOS (Média < 6) ---\n");
        for (int i = 0; i < 10; i++)
        {
            float media = mediaNotas(alunos[i]);
            if (media < 6)
            {
                printf("|%-15s %-15s| -> MÉDIA: %.2f\n", alunos[i].primeiroNome, alunos[i].ultimoNome, media);
            }
        }
        menu(alunos);
        break;

    case 4:
        printf("\nSAINDO...\n");
        break;

    default:
        printf("\nOpção inválida. Tente novamente.\n");
        menu(alunos);
        break;
    }
}

int main()
{
    struct Aluno alunos[10] = {
        {"HENRY", "AGUIAR", 10, 9, 8, 0, 0, 0},
        {"LUCAS", "SILVA", 7, 6, 5, 6, 1, 0},
        {"MARIA", "FERREIRA", 9, 8, 10, 0, 0, 0},
        {"ANA", "COSTA", 4, 5, 3, 7, 0, 0},
        {"JOÃO", "PEREIRA", 6, 6, 6, 0, 1, 0},
        {"CARLA", "MENDES", 2, 3, 4, 5, 0, 1},
        {"PEDRO", "ROCHA", 8, 7, 9, 0, 0, 0},
        {"JULIA", "SANTOS", 5, 5, 5, 6, 1, 0},
        {"BRUNO", "ALMEIDA", 10, 10, 9, 0, 0, 0},
        {"RENATA", "BARROS", 3, 4, 2, 6, 0, 1}};

    menu(alunos);
    return 0;
}
