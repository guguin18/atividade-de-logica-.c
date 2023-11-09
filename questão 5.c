#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "portuguese");

   char idioma;

   printf("digite seu idioma de preferencia:\n");
   printf("1- Inglês\n");
   printf("2- Francês\n");
   printf("3- Espanhol\n");
   scanf("%d", &idioma);

   switch (idioma)
   {
   case 1:
      printf("Inglês\n");
      printf("welcome\n");
      break;
   case 2:
      printf("Francês\n");
      printf("Bienvenue\n");
      break;

   case 3:
      printf("Espanhol\n");
      printf("Bienvenido\n");
      break;

   default:
      printf("idioma invalido\n");
     
   }

   return 0;
}