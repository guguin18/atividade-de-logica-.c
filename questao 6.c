#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "portuguese");

   char Compra;

   printf("digite O Que vocÃª vai comprar:\n");
   printf("1- Camiseta\n");
   printf("2- Calça\n");
   printf("3- Sapato\n");
   scanf("%d", &Compra);

   switch (Compra)
   {
   case 1:
      printf("Camiseta\n");
      printf("R$35.00\n");
      break;
   case 2:
      printf("Calça\n");
      printf("R$45.90\n");
      break;

   case 3:
      printf("Sapato\n");
     printf("R$79.00\n");
      break;

   default:
      printf("compra invalido\n");
     
   }

   return 0;
}