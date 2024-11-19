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
        printf("Erro ao alocar mem�ria!\n");
        return 1;
    }

    printf("Ol�. Por favor, informe o primeiro n�mero:");
    scanf("%f", primeiroNumero);

    printf("Informe o segundo n�mero: ");
    scanf("%f", segundoNumero);

    printf("O resultado da opera��o � %.2f", somarNumeros(primeiroNumero, segundoNumero));



    free(primeiroNumero);
    free(segundoNumero);

    return 0;
}
