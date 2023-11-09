#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
int main() {
    float valorCompra, desconto;
    int diaSemana;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    printf("Digite o dia da semana (1-7): ");
    scanf("%d", &diaSemana);

    if (valorCompra > 100) {
        if (diaSemana >= 1 && diaSemana <= 5) {
            desconto = valorCompra * 0.1;
        } else {
            desconto = valorCompra * 0.15;
        }

        printf("Desconto aplicado: R$ %.2f\n", desconto);
        printf("Valor total com desconto: R$ %.2f\n", valorCompra - desconto);
    } else {
        printf("Valor da compra não atende ao critério mínimo para desconto.\n");
    }

    return 0;
}