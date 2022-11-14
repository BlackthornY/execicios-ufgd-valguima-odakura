/*8. Faça um algoritmo calculadora, que dados dois números fornecidos pelo usuário, calcula
e mostra o resultado de uma das operações: adição, subtração, multiplica e divisão.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");  //DEIXAR AS MENSAGENS ACENTUADAS

    float numero_1, numero_2;
    int opcao;

    printf("ALGORITMO CALCULADORA !\n");  //RECEBE OS NÚMEROS DO USUÁRIO
    printf("Escolha um número : ");
    scanf("%f",&numero_1);
    printf("Escolha outro número : ");
    scanf("%f",&numero_2);

    printf("A seguir as opções de operação :\n");  //OFERECE AS OPERAÇÕES DISPONÍVEIS
    printf("    1 - para adição\n");
    printf("    2 - para subtração\n");
    printf("    3 - para multiplicação\n");
    printf("    4 - para divisão");

    printf("\n\nEscolha a operação desejada : ");  //PERGUNTA QUAL OPERAÇÃO QUER FAZER
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1:
            printf("Resultado da ADIÇÃO : %f ",numero_1+numero_2);
            break;
        case 2:
            printf("Resultado da SUBTRAÇÃO : %f ",numero_1-numero_2);
            break;
        case 3:
            printf("Resultado da MULTIPLICAÇÃO : %f ",numero_1*numero_2);
            break;
        case 4:
            printf("Resultado da DIVISÃO : %f ",numero_1/numero_2);
            break;
        default :
            printf("OPÇÃO INVÁLIDA !");

    }

    printf("\n");

    return 0;
}

