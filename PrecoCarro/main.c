#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"Portuguese");

    float *precoFabricaVeiculo = (float*)malloc(sizeof(float));
    float *percentualLucroDistribuidor = (float*)malloc(sizeof(float));
    float *percentualImpostos = (float*)malloc(sizeof(float));

    if(precoFabricaVeiculo == NULL || percentualLucroDistribuidor == NULL || percentualImpostos == NULL) {
        printf("Erro ao alocar mem�ria!");
        return 1;
    }

    printf("Ol�! Informe o pre�o de f�brica do ve�culo: ");
    scanf("%f", precoFabricaVeiculo);

    printf("Qual o percentual de lucro do distribuidor? ");
    scanf("%f", percentualLucroDistribuidor);

    printf("Qual o percentual de impostos? ");
    scanf("%f", percentualImpostos);

    float valorLucroDistribuidor = *precoFabricaVeiculo * (*percentualLucroDistribuidor/100);
    float valorImpostos = *precoFabricaVeiculo * (*percentualImpostos/100);

    float precoveiculoTotal = *precoFabricaVeiculo + valorImpostos + valorLucroDistribuidor;

    printf("O pre�o do ve�culo � de: %.2f", precoveiculoTotal);

    free(precoFabricaVeiculo);
    free(percentualLucroDistribuidor);
    free(percentualImpostos);
    return 0;


}
