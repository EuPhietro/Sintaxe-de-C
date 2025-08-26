#include <stdio.h>

int main()
{
  char primeiroNome[50];
  char ultimoNome[50];
  int idade;
  float peso;
  float altura;

  printf("Digite seu  primeiro nome\n");
  scanf("%s", primeiroNome);

  printf("Digite seu ultimo nome\n");
  scanf("%s", ultimoNome);

  printf("\nDigite sua idade\n");
  scanf("%d", &idade);

  printf("\nQual é o seu peso?\n");
  scanf("%f", &peso);

  printf("\nQual é o sua altura em metros?\n");
  scanf("%f", &altura);

  printf("\nNome completo: %s %s\n", primeiroNome, ultimoNome);

  printf("\nIdade: %d\n", idade);

  printf("\nPeso: %.2f\n", peso);

  printf("\nAltura: %.2f\n\n", altura);
}
