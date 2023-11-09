#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int operacao;
    int soma, somaI, somaII;
    int subtracao, subtracaoI, subtracaoII;
    int numeroum;
    int numerodois;

    printf("1- soma.\n");
    printf("2- subtração\n");

    printf("digite a operação matematica que você deseja.\n:");
    scanf("%d", &operacao);

    printf("digite um numero\n:");
    scanf("%d", &numeroum);

    printf("digite um numero\n:");
    scanf("%d", &numerodois);

    switch (operacao)
    {
    case 1:
        printf("voce escolheu soma\n");

        soma = numeroum + numerodois;
        printf(" A soma é: %d\n",soma);
        
        break;

    case 2:
        printf("voce escolheu subtração\n");
     subtracao = numeroum - numerodois;
printf(" A Subtração é: %d\n",subtracao);
        break;

    default:

        printf("operação invalida!");
        break;
    }

    return 0;
}