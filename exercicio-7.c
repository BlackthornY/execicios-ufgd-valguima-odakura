/*7. Faça um algoritmo que receba três números obrigatoriamente em ordem crescente e um
quarto número que não siga essa regra. Mostre, em seguida, os quatro números em ordem
decrescente. Suponha que o usuário digitará quatro números diferentes.*/

#include <stdio.h>

int main()
{
    int A, B, C, D, X;

    printf("DIGITE EM ORDEM CRESCENTE !\n");

    printf("DIGITE A : ");
    scanf("%d",&A);
    printf("DIGITE B : ");
    scanf("%d",&B);
    printf("DIGITE C : ");
    scanf("%d",&C);

    printf("\n");

    while(A>B || A>C || B>C)     // PARA SER OBRIGATORIAMENTE CRESCENTE !
    {
        if(A>C)
        {
            printf("DIGITE A : ");
            scanf("%d",&A);
            printf("DIGITE B : ");
            scanf("%d",&B);
            printf("DIGITE C : ");
            scanf("%d",&C);

            printf("\n");

        }

       if(A>B)
        {
            printf("DIGITE A : ");
            scanf("%d",&A);
            printf("DIGITE B : ");
            scanf("%d",&B);
            printf("DIGITE C : ");
            scanf("%d",&C);

            printf("\n");

        }

        if(B>C)
        {
            printf("DIGITE A : ");
            scanf("%d",&A);
            printf("DIGITE B : ");
            scanf("%d",&B);
            printf("DIGITE C : ");
            scanf("%d",&C);

            printf("\n");

        }
    }

    printf("Digite um numero qualquer : ");
    scanf("%d",&D);

    // PARA COLOCAR OS NÚMEROS EM ORDEM CRESCENTE

    if(C > D)
    {
        X = D;
        D = C;
        C = X;
    }

    if(B > C)
    {
        X = B;
        B = C;
        C = X;
    }


    if(A > B)
    {
        X = A;
        A = B;
        B = X;
    }

    printf("A ordem crescente : %d %d %d %d ",A,B,C,D);

}


