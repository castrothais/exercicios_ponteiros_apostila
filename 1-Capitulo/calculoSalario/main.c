#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularSalarioLiquido(float *horasTrabalhadas, float *valorSalarioHora, float *imposto) {
    float salarioBruto = *horasTrabalhadas * *valorSalarioHora;
    *imposto = salarioBruto * 0.03f;  // Imposto de 3%
    float salarioLiquido = salarioBruto - *imposto;
    return salarioLiquido;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float *horasTrabalhadas = (float*)malloc(sizeof(float));
    float *valorSalarioHora = (float*)malloc(sizeof(float));
    float *imposto = (float*)malloc(sizeof(float));

    if (horasTrabalhadas == NULL || valorSalarioHora == NULL || imposto == NULL) {
        printf("Erro ao alocar mem�ria!\n");
        return 1;
    }

    printf("Informe o n�mero de horas trabalhadas: ");
    scanf("%f", horasTrabalhadas);

    printf("Informe o valor do sal�rio hora: ");
    scanf("%f", valorSalarioHora);

    float salarioLiquido = calcularSalarioLiquido(horasTrabalhadas, valorSalarioHora, imposto);

    printf("Sal�rio Bruto: R$ %.2f\n", *horasTrabalhadas * *valorSalarioHora);
    printf("Imposto (3%%): R$ %.2f\n", *imposto);
    printf("O seu sal�rio l�quido � de R$ %.2f\n", salarioLiquido);

    free(horasTrabalhadas);
    free(valorSalarioHora);
    free(imposto);

    return 0;
}
