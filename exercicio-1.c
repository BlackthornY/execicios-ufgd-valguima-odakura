/*1. Fa�a um algoritmo que receba um n�mero e imprima-o caso seja maior que 10.*/

#include <stdio.h>

int main()
{
    float number;
    printf("Digite um numero : ");
    scanf("%f",&number);

    if(number>10)
        printf("Seu numero : %f \n",number);
    else
        printf("Numero menor que 10!\n");

        return 0;

}

