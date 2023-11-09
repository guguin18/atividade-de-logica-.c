#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 
int main() {
    float temperatura;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura);

    if (temperatura > 25) {
        printf("O clima é ensolarado.\n");
    } else if (temperatura < 15) {
        printf("O clima é chuvoso.\n");
    } else {
        printf("O clima é nublado.\n");
    }

    return 0;
}