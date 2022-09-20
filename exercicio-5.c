/*5. Faça um algoritmo que receba três números e mostre o maior.*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, maior;

    printf("Digite um numero : ");
    scanf("%d",&num1);
    printf("Digite um numero : ");
    scanf("%d",&num2);
    printf("Digite um numero : ");
    scanf("%d",&num3);

    if(num1>num2)
        maior=num1;
    if(num1<num2)
        maior=num2;
    if(maior<num3)
        maior=num3;

    printf("Maior numero : %d",maior);

    return 0;

}
