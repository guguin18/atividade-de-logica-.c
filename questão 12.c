#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
    int i;
    int nota,notaII,notaIII,NotaIV;
    float media;
int somanota;


    for ( i = 1; i <= 4; i++)
    {
    printf("Digite a sua nota \n: ");
    scanf("%d", &nota);
    
somanota += nota;
       
    }
    
    media = somanota / 4 ;

    printf(" media %f", media);
   

return 0;

}