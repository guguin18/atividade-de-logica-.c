#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){



    setlocale(LC_ALL, "portuguese");
    int codigo;
    int codigocorreto;

    codigocorreto = 123;



    do
    {
    printf("digite seu codigo\n:");
   scanf("%d",&codigo);

    if (codigo == codigocorreto)
    {
        printf("acesso permitido.");
    }

    else 
    {
        printf("acesso negado.");
    }
        
    } while (codigocorreto != codigo);
    

    return 0;
}