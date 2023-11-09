#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

int main(){
setlocale(LC_ALL,"portuguese");
int x;
int i;

printf("Digite um valor: ");
scanf("%d",&x);
for ( i = x; i >= 0; i--)

printf("%d\n", i);


    
    return 0;
}