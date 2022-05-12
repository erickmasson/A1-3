#include <stdio.h>

int main(void)
{
  int i, n, j;
  char resposta;

  do
  {
    printf("informe um numero positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
      for (j = 1; j <= i; j++)
      {
        printf(" %d", i);
      }
      printf("\n");
    }

    printf("Deseja digitar outro numero?(S ou N):\n");
    fflush(stdin);
    scanf("%c", &resposta);
  } while (resposta != 'N');
  return 0;
}