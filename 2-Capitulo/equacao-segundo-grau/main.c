#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void calcularRaizes(float *coeficinteA, float *coeficinteB, float *coeficinteC) {
    float delta = pow(*coeficinteB, 2) - 4 * (*coeficinteA) * (*coeficinteC);
    float raizUm;
    float raizDois;

    if (delta < 0) {
        printf("\nDelta negativo, a equa��o n�o tem ra�zes reais.\n");
    } else if (delta == 0) {
        printf("Possui apenas uma raiz.\n");
        raizUm = raizDois = (-1) * (*coeficinteB) / (2 * (*coeficinteA));
        printf("Raiz: %.2f\n", raizUm);
    } else {
        raizUm = (-1) * (*coeficinteB) + sqrt(delta) / (2 * (*coeficinteA));
        raizDois = (-1) * (*coeficinteB) - sqrt(delta) / (2 * (*coeficinteA));
        printf("As ra�zes s�o: %.2f e %.2f\n", raizUm, raizDois);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float *coeficienteA = (float*)malloc(sizeof(float));
    float *coeficienteB = (float*)malloc(sizeof(float));
    float *coeficienteC = (float*)malloc(sizeof(float));

    if (coeficienteA == NULL || coeficienteB == NULL || coeficienteC == NULL) {
        printf("Erro na aloca��o de mem�ria.\n");
        return 1;
    }

    printf("Ol�, seja bem-vindo! Para encontrar as ra�zes da equa��o de segundo grau, informe os coeficientes.\n");

    printf("Informe o coeficiente a: ");
    scanf("%f", coeficienteA);

    if (*coeficienteA == 0) {
        printf("O coeficiente 'a' n�o pode ser zero!\n");
        free(coeficienteA);
        free(coeficienteB);
        free(coeficienteC);
        return 0;
    }

    printf("Informe o coeficiente b: ");
    scanf("%f", coeficienteB);

    printf("Informe o coeficiente c: ");
    scanf("%f", coeficienteC);

    calcularRaizes(coeficienteA, coeficienteB, coeficienteC);

    free(coeficienteA);
    free(coeficienteB);
    free(coeficienteC);

    return 0;
}
