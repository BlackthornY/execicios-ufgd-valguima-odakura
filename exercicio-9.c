/*9. Dados tr�s valores, verifique se eles podem ser os lados de um tri�ngulo. Se forem,
verificar se � um tri�ngulo equil�tero, is�sceles ou escaleno. Se os tr�s valores n�o forem
os lados de um tri�ngulo, escreva uma mensagem informando este fato.*/

#include <stdio.h>
#include <locale.h>

 int main()
 {
     setlocale(LC_ALL,"Portuguese");  //DEIXAR AS MENSAGENS ACENTUADAS

     float lado_1, lado_2, lado_3;
     printf("VERIFICADOR TRI�NGULO\n");
     printf("Escreva o primeiro lado : ");
     scanf("%d",&lado_1);
     printf("Escreva o segundo lado : ");
     scanf("%d",&lado_2);
     printf("Escreva o terceiro lado : ");
     scanf("%d",&lado_3);

     if(lado_1+lado_2>lado_3 && lado_1+lado_3>lado_2 && lado_2+lado_3>lado_1)
     {
         printf("\nEsses lados formam um tri�ngulo ! ");
         if(lado_1 == lado_2 && lado_2 == lado_3)
            printf("\nEsse tri�ngulo � equil�tero.");
         else
         {
             if(lado_1 == lado_2 || lado_1 == lado_3 || lado_2 == lado_3)
                printf("\nEsse tri�ngulo � is�sceles.");

             else
                printf("\nEsse tri�ngulo � escaleno.");
         }

     }

    printf("\n");

     return 0;
 }
