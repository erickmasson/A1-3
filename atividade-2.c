//Árvore de Decisão

#include <stdio.h>

int main(void)
{
  float temperatura;
  char resposta, resposta2;

  do
  {
    printf("O paciente se sente bem? Responda apenas com (s)sim ou (n)nao:\n--> ");
    fflush(stdin);
    scanf("%c", &resposta);
  } while ((resposta != 's') && (resposta != 'n'));
  if (resposta == 's')
  {
    printf("Saudavel");
  }
  else if (resposta == 'n')
  {
    do
    {
      printf("Paciente tem dor? Responda apenas com (s)sim ou (n)nao:\n--> ");
      fflush(stdin);
      scanf("%c", &resposta2);
    } while ((resposta2 != 's') && (resposta2 != 'n'));
    if (resposta2 == 's')
    {
      printf("Doente");
    }
    else if (resposta2 == 'n')
    {
      printf("Temperatura do paciente:\n--> ");
      scanf("%f", &temperatura);
      if (temperatura <= 37)
      {
        printf("Saudavel");
      }
      else
      {
        printf("Doente");
      }
    }
  }

  return 0;
};