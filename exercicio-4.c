/*4. Faça um algoritmo que leia cinco números inteiros diferentes e identifique o maior e o
menor valor.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, num3, num4, num5, maior, menor;
    printf("Digite um numero : ");
    scanf("%d",&num1);
    printf("Digite um numero : ");
    scanf("%d",&num2);
    printf("Digite um numero : ");
    scanf("%d",&num3);
    printf("Digite um numero : ");
    scanf("%d",&num4);
    printf("Digite um numero : ");
    scanf("%d",&num5);

    // verifica o maior

    if(num1>num2)
        maior=num1;
    if(num1<num2)
        maior=num2;
    if(maior<num3)
        maior=num3;
    if(maior<num4)
        maior=num4;
    if(maior<num5)
        maior=num5;

    // verifica o menor

    if(num1<num2)
        menor=num1;
    if(num1>num2)
        menor=num2;
    if(menor>num3)
        menor=num3;
    if(menor>num4)
        menor=num4;
    if(menor>num5)
        menor=num5;

    printf("Maior numero : %d\n",maior);
    printf("Menor numero : %d",menor);

    return 0;

}
