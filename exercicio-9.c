/*9. Dados três valores, verifique se eles podem ser os lados de um triângulo. Se forem,
verificar se é um triângulo equilátero, isósceles ou escaleno. Se os três valores não forem
os lados de um triângulo, escreva uma mensagem informando este fato.*/

#include <stdio.h>
#include <locale.h>

 int main()
 {
     setlocale(LC_ALL,"Portuguese");  //DEIXAR AS MENSAGENS ACENTUADAS

     float lado_1, lado_2, lado_3;
     printf("VERIFICADOR TRIÂNGULO\n");
     printf("Escreva o primeiro lado : ");
     scanf("%d",&lado_1);
     printf("Escreva o segundo lado : ");
     scanf("%d",&lado_2);
     printf("Escreva o terceiro lado : ");
     scanf("%d",&lado_3);

     if(lado_1+lado_2>lado_3 && lado_1+lado_3>lado_2 && lado_2+lado_3>lado_1)
     {
         printf("\nEsses lados formam um triângulo ! ");
         if(lado_1 == lado_2 && lado_2 == lado_3)
            printf("\nEsse triângulo é equilátero.");
         else
         {
             if(lado_1 == lado_2 || lado_1 == lado_3 || lado_2 == lado_3)
                printf("\nEsse triângulo é isósceles.");

             else
                printf("\nEsse triângulo é escaleno.");
         }

     }

    printf("\n");

     return 0;
 }
