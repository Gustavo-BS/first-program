/*
    O programa abaixo calcula o salario com base na quantidade de horas trabalhadas
    e com o valor da hora. Tudo isso e inserido pelo usuario do programa. No final e
    mostrado o codigo do usuario e o valor do salario a receber.

    por Gustavo Borges
    2022
*/

#include <stdio.h>

int
main()
{
    int cf = 0;  //Codigo do usuario
    float qht = 0;  //Quantidade de horas trabalhadas
    float vh = 0;   //Valor da hora trabalhada

    printf("Salario de um funcionario \n");
    printf("Digite o codigo do funcionario : ");
    scanf("%d", &cf);
    printf("Digite a quantidade de horas trabalhadas : ");
    scanf("%f", &qht);
    printf("Digite o valor da hora trabalhada : ");
    scanf("%f", &vh);
    printf("Funcionario : %d  Salario = %.2f", cf, qht*vh);


    return 0;
}
