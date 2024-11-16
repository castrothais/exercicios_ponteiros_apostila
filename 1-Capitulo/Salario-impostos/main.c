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

    printf("Informe o seu salário base:");
    scanf("%f", salario);

    float salarioComDesconto = calculoSalarioReceber(salario);
    printf("Salário a receber é de %.2f", salarioComDesconto);
    free(salario);
    return 0;
}
