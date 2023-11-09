#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



 
int main() {
 setlocale(LC_ALL, "");
 int numero, i, resultado = 0;
 
 printf("Digite um número: ");
 scanf("%d", &numero);
 
 for (i = 2; i <= numero / 2; i++) {
    if (numero % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d é um número primo\n", numero);
 else
    printf("%d não é um número primo\n", numero);
 
 return 0;
}