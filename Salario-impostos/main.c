#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculoSalarioReceber(float *salario) {
    float gratificacao = 5.0f;
    float imposto = 7.0f;
    float salariocomGratificacao = *salario + (gratificacao/100) * *salario;
    float salariocomImposto = salariocomGratificacao - ((imposto/100) * salariocomGratificacao);
    return salariocomImposto;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float *salario = (float*)malloc(sizeof(float));

    printf("Informe o seu sal�rio base:");
    scanf("%f", salario);

    float salarioComDesconto = calculoSalarioReceber(salario);
    printf("Sal�rio a receber � de %.2f", salarioComDesconto);
    free(salario);
    return 0;
}
