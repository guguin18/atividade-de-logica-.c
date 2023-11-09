#include <stdio.h>

int main() {
    int opcao;
    float valor;
    
    do {
        printf("Escolha a conversao desejada:\n");
        printf("1. Quilometros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("0. Sair do programa\n");
        
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                printf("Digite o valor em quilometros: ");
                scanf("%f", &valor);
                float milhas = valor * 0.621371;
                printf("%.2f quilometros equivalem a %.2f milhas.\n", valor, milhas);
                break;
            case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%f", &valor);
                float fahrenheit = (valor * 9/5) + 32;
                printf("%.2f graus Celsius equivalem a %.2f Fahrenheit.\n", valor, fahrenheit);
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Escolha novamente.\n");
        }
        
        printf("\n");
    } while(opcao != 0);
    
    return 0;
}