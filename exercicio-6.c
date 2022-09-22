/*6. Faça um algoritmo que receba três números e mostre-os em ordem decrescente*/

int main()
{
    int  A, B, C, X;
    printf("Escreva valor de A : ");
    scanf("%d",&A);
    printf("Escreva valor de B : ");
    scanf("%d",&B);
    printf("Escreva valor de C : ");
    scanf("%d",&C);

     if (A < C)     //Este caso é específico para quando se usa 3 valores !
     {
         X = A;
         A = C;
         C = X;
     }
     if (A < B)
     {
         X = A;
         A = B;
         B = X;
     }

     if (B < C)
     {
         X = C;
         C = B;
         B = X;

     }

    printf("A ordem crescente : %d  %d  %d",A,B,C);

     return 0;
}


