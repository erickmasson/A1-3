#include <stdio.h>
#include <stdlib.h>
#include <time.h> // para usar o "srand()".

int main(void)
{

  int n, rn;

  srand(time(NULL));      // para gerar um valor aleatorio no "rand()", pois o mesmo gera um "valor aleatorio fixo".
  rn = (rand() % 10) + 0; // valor aleatorio entre 0 e 10.
  // printf("numero magico --> %d\n", rn); //<-- Tirar o comentario caso precise ver o numero magico para ver se o programa funciona.
  do{
  printf("Advinhe o numero magico:\n--> ");
  scanf("%d", &n);

  if (n == rn)
  {
    printf("Certo! %d eh o numero magico", rn);
  }
  else if (n > rn)
  {
    printf("Errado, muito alto\n");
  }
  else
  {
    printf("Errado, muito baixo\n");
  }
  }while (n != rn);
  return 0;
}