/*3. Faça um algoritmo que leia um número e imprima uma das mensagens: “É múltiplo de 3”
ou “Não é múltiplo de 3”.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int numero;
    printf("Digite um numero : ");
    scanf("%d",&numero);

    if(numero%3==0)
        printf("multiplo de 3 ☺");
    else
        printf("nao multiplo de 3");

    return 0;
}

