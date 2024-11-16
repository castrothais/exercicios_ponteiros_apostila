#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularSaldoAtual (float *saldoConta) {
    float quantidadeCheques = 2;  // Dois cheques
    float CPMF = 0.0038;  // CPMF de 0,38%

    float valorCPMF = (*saldoConta * CPMF * quantidadeCheques);

    float saldoAposRetirada = *saldoConta - valorCPMF;

    printf("Valor total a ser descontado devido à CPMF: R$ %.2f\n", valorCPMF);

    return saldoAposRetirada;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float *saldoConta = (float*)malloc(sizeof(float));

    if (saldoConta == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    *saldoConta = 0.00;

    printf("Antes do depósito, o saldo é: R$ %.2f\n", *saldoConta);

    printf("Informe o valor a ser depositado: ");
    scanf("%f", saldoConta);

    printf("Você depositou: R$ %.2f\n", *saldoConta);

    float saldoAtual = calcularSaldoAtual(saldoConta);
    printf("Atualmente o seu saldo é no valor de R$%.2f", saldoAtual);

    free(saldoConta);

    return 0;
}
