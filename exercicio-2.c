/*2. Faça um algoritmo que receba um número e imprima a raiz quadrada do número caso ele
seja positivo e o quadrado do número caso ele seja negativo.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float numero, raiz, quadrado;
    printf("Digite um numero : ");
    scanf("%f",&numero);
    if(numero>0)
    {
       raiz=pow(numero,1.0/2.0);
       printf("Raiz de %.2f = %.2f",numero,raiz);
    }
    else
    {
        if(numero<0)
        {
            quadrado=pow(numero,2);
            printf("Quadrado de %.2f = %.2f",numero,quadrado);
        }
        else
        {
            printf("Numero igual a 0(zero)");
        }
    }

    return 0;

}
