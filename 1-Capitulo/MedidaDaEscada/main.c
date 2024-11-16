#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");


    float *alturaParede = (float*)malloc(sizeof(float));
    float *medidaAngulo = (float*)malloc(sizeof(float));
    float *tamanhoEscada = (float*)malloc(sizeof(float));


    if(alturaParede == NULL || medidaAngulo == NULL || tamanhoEscada == NULL) {
        printf("Mem�ria Insuficiente!\n");
        return 1;
    }


    printf("Ol�. Informe a Altura da Parede em metros: ");
    scanf("%f", alturaParede);

    printf("Informe a medida do �ngulo (em graus): ");
    scanf("%f", medidaAngulo);

    // Convers�o do �ngulo de graus para radianos
    float radianos = *medidaAngulo * (M_PI / 180); // M_PI � a constante PI definida na math.h

    *tamanhoEscada = *alturaParede / sin(radianos);

    printf("A medida da escada �: %.2f metros\n", *tamanhoEscada);


    free(alturaParede);
    free(medidaAngulo);
    free(tamanhoEscada);

    return 0;
}
