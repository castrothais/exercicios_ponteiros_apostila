#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float somarNumeros(float *primeiroNumero, float *segundoNumero) {
    float soma = *primeiroNumero + *segundoNumero;

    if(soma >20){
        soma+=8;
    } else {
        soma-=5;
    }

    return soma;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float *primeiroNumero = (float*)malloc(sizeof(float));
    float *segundoNumero = (float*)malloc(sizeof(float));

    if(primeiroNumero == NULL || segundoNumero == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Olá. Por favor, informe o primeiro número:");
    scanf("%f", primeiroNumero);

    printf("Informe o segundo número: ");
    scanf("%f", segundoNumero);

    printf("O resultado da operação é %.2f", somarNumeros(primeiroNumero, segundoNumero));



    free(primeiroNumero);
    free(segundoNumero);

    return 0;
}
