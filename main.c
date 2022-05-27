#include <stdio.h>

int
main()
{
    int cf = 0;
    float qht = 0;
    float vh = 0;

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
