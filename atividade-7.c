#include <stdio.h>
#include <math.h>

int main(void)
{

  float quantidade, unitario, valorT, valorM, quantidadeT;
  int moeda, nota100, nota50, nota20, nota10, nota5, nota2;
  char resposta;

  do
  {
    do
    {
      printf("Informe a quantidade de um produto:\n");
      scanf("%f", &quantidade);
      if (quantidade <= 0) // parar o codigo caso digite 0
      {
        break;
      }
      printf("Informe o valor unitario do produto:\n");
      scanf("%f", &unitario);

      valorT = valorT + (quantidade * unitario); // valor total
      quantidadeT = quantidadeT + quantidade;
      valorM = valorT / quantidadeT; // valor medio
    } while ((quantidade != 0) && (unitario != 0));

    printf("VALOR TOTAL DA COMPRA: %2.2fR$\n", valorT);
    printf("VALOR MEDIO DA COMPRA: %2.2FR$\n\n", valorM);
    printf("O valor total da compra eh %2.f reais e %.2f centavos.\n\n", valorT, valorT - (int)valorT); // O float valor foi alterado para int, para remover o valor inteiro do valor, tendo assim apenas os numeros apos a virgula
    printf("%2.f reais equivale a:\n\n", valorT);

    nota100 = valorT / 100;
    valorT = valorT - (nota100 * 100);
    printf("%d nota(s) de 100\n", nota100);
    nota50 = valorT / 50;
    valorT = valorT - (nota50 * 50);
    printf("%d nota(s) de 50\n", nota50);
    nota20 = valorT / 20;
    valorT = valorT - (nota20 * 20);
    printf("%d nota(s) de 20\n");
    nota10 = valorT / 10;
    valorT = valorT - (nota10 * 10);
    printf("%d nota(s) de 10\n", nota10);
    nota5 = valorT / 5;
    valorT = valorT - (nota5 * 5);
    printf("%d nota(s) de 5\n", nota5);
    nota2 = valorT / 2;
    valorT = valorT - (nota2 * 2);
    printf("%d nota(s) de 2\n", nota2);
    moeda = valorT / 1;
    valorT = valorT - (moeda * 1);
    printf("%d moeda(s) de 1\n", moeda);

    printf("\nDeseja digitar outro numero?(S ou N):\n");
    fflush(stdin);
    scanf("%c", &resposta);
  } while (resposta != 'n');
  return 0;
}
