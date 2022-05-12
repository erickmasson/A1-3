#include <stdio.h>

int main(void)
{
  char categoria;
  float quantidade, soma = 0, total = 0; // E - substituiçao da int pelo float;
  float media;

  do
  {
    printf("informe a categoria como A, B e C: ");
    fflush(stdin);
    scanf("%c", &categoria);
    do // B - Execuções sucessivas do programa
    {
      printf("informe a quantidade(deve ser maior que 0): ");
      scanf("%f", &quantidade);
    } while (quantidade <= 0); // C - Para garantir que a quantidade seja maior que 0, repetindo o processo caso nao seja;
    soma = soma + quantidade;
    total++;
    media = soma / total;

  } while (categoria == 'A' || categoria == 'B' || categoria == 'C'); // A - adicionada a categoria "C";
  printf("A media dos produtos eh %.2f", media);

  return 0;
}