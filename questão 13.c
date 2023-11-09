#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

int main() {
    int numeroum, numerodois;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numeroum);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numeroum);

    if (numeroum == numerodois) {
        printf("Os numeros sao iguais.\n");
    } else if (numeroum > numerodois) {
        printf("O primeiro numero (%d) e maior que o segundo numero (%d).\n", numeroum, numerodois);
    } else {
        printf("O segundo numero (%d) e maior que o primeiro numero (%d).\n", numerodois, numeroum);
    }











    return 0;
}