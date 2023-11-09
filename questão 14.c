#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

int main() {
    int numero, totalNumero, contadorPar, contadorImpar;
    float somaPar, somaImpar;
  int i;

contadorPar = 0;
contadorImpar = 0;

somaPar = 0;
somaImpar = 0;

    printf("Digite a quantidade de numeros a serem inseridos: ");
    scanf("%d", &totalNumero);

    for ( i = 0; i < totalNumero; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            contadorPar++;
            somaPar += numero;
        } else {
            contadorImpar++;
            somaImpar += numero;
        }
    }

    if (contadorPar > 0) {
        printf("Quantidade de numeros pares: %d\n", contadorPar);
        printf("Media dos numeros pares: %.2f\n", somaPar / contadorPar);
    } else {
        printf("Nenhum numero par foi inserido.\n");
    }

    if (contadorImpar > 0) {
        printf("Quantidade de numeros impares: %d\n", contadorImpar);
        printf("Media aritmetica dos numeros impares: %.2f\n", somaImpar / contadorImpar);
    } else {
        printf("Nenhum numero impar foi inserido.\n");
    }

    return 0;
}