#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 3

float mediaPonderada(float*notas, int *pesoNotas) {
    float somaNotas = 0;
    float somaPesos = 0;
    for(int i =0; i< MAX; i++) {
        somaNotas+=(*(notas+i) * *(pesoNotas+i));
        somaPesos+=*(pesoNotas+i);
    }
    return somaNotas/somaPesos;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float *notas = (float*)malloc(sizeof(float)*MAX);
    int *pesoNotas = (int*)malloc(sizeof(int)*MAX);

    if(notas == NULL || pesoNotas == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Olá! Informe as notas e seus respectivos pesos:\n");
    for(int i = 0; i < MAX; i++) {
        printf("Informe a sua %dª nota:", i+1);
        scanf("%f", (notas+i));
        printf("O peso da %dª nota:", (i+1));
        scanf("%d", (pesoNotas+i));
        printf("\n");
    }

    float mediaNotas = mediaPonderada(notas, pesoNotas);
    printf("A média ponderada foi de %.2f", mediaNotas);

    free(notas);
    free(pesoNotas);
    return 0;
}
