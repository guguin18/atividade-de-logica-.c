#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9) {
        printf("Desempenho: Excelente\n");
    } else if (nota >= 7 && nota < 9) {
        printf("Desempenho: Bom\n");
    } else if (nota >= 5 && nota < 7) {
        printf("Desempenho: Precisa melhorar\n");
    } else {
        printf("Classificação: Insuficiente\n");
    }

    return 0;
}