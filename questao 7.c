#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "portuguese");

   char menu;

   printf("Escolha o seu Menu no seu celular:\n");
   printf("1- Novo Jogo\n");
   printf("2- Carregar jogo\n");
   printf("3- Configurações\n");
   scanf("%d", &menu);

   switch (menu)
   {
   case 1:
      printf("Novo jogo\n");
      
      break;
   case 2:
      printf("Carregar jogo\n");
      
      break;

   case 3:
      printf("Coonfigurações\n");
     
      break;

   default:
      printf("Menu invalido\n");
     
   }

   return 0;
}