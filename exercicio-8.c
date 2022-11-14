/*8. Fa�a um algoritmo calculadora, que dados dois n�meros fornecidos pelo usu�rio, calcula
e mostra o resultado de uma das opera��es: adi��o, subtra��o, multiplica e divis�o.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");  //DEIXAR AS MENSAGENS ACENTUADAS

    float numero_1, numero_2;
    int opcao;

    printf("ALGORITMO CALCULADORA !\n");  //RECEBE OS N�MEROS DO USU�RIO
    printf("Escolha um n�mero : ");
    scanf("%f",&numero_1);
    printf("Escolha outro n�mero : ");
    scanf("%f",&numero_2);

    printf("A seguir as op��es de opera��o :\n");  //OFERECE AS OPERA��ES DISPON�VEIS
    printf("    1 - para adi��o\n");
    printf("    2 - para subtra��o\n");
    printf("    3 - para multiplica��o\n");
    printf("    4 - para divis�o");

    printf("\n\nEscolha a opera��o desejada : ");  //PERGUNTA QUAL OPERA��O QUER FAZER
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1:
            printf("Resultado da ADI��O : %f ",numero_1+numero_2);
            break;
        case 2:
            printf("Resultado da SUBTRA��O : %f ",numero_1-numero_2);
            break;
        case 3:
            printf("Resultado da MULTIPLICA��O : %f ",numero_1*numero_2);
            break;
        case 4:
            printf("Resultado da DIVIS�O : %f ",numero_1/numero_2);
            break;
        default :
            printf("OP��O INV�LIDA !");

    }

    printf("\n");

    return 0;
}

