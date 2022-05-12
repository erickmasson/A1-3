#include <stdio.h>

int main(void)
{

  int i, n1, n2, count, p, t, h;
  int k;
  char resposta;

  do
  {
    do
    {
      printf("Informe o valor do limite inferior do intervalo:\n--> ");
      scanf("%d", &n1);
    } while (n1 <= 1);
    do
    {
      printf("Informe um valor superior do intervalo:\n--> ");
      scanf("%d", &n2);
    } while (n2 < n1);
    do
    {
      printf("Informe quantos numeros deseja imprimir por linha:\n");
      scanf("%d", &h);
    } while (h <= 0);
    if (n1 > n2) // serve para inverter os numero, caso o usuario digite um valor minimo maior que o maximo
    {
      t = n1;
      n1 = n2;
      n2 = t;
    }

    for (i = n1; i <= n2; i++)
    {
      p = 1;
      for (count = 2; count < i; count++)
      {
        if (i % count == 0)
        {
          p = 0;
          break;
        }
      }
      if (p)
      {
        printf("%d ", i);
        k++;
        if (k >= h)
        {
          k = 0;
          printf("\n");
        }
      }
    }
    printf("\nDeseja digitar outro numero?(S ou N):\n");
    fflush(stdin);
    scanf("%c", &resposta);
  } while (resposta != 'N');
  return 0;
}