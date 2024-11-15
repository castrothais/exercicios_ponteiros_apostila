#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 3

float mediaAluno(float *notasAlunos) {
    float somaNotas = 0;
    for(int i = 0; i < MAX; i ++) {
        somaNotas+= *(notasAlunos+i);
    }
    return (somaNotas/MAX);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float *notasAlunos;
    notasAlunos = (float*)malloc(sizeof(float)*MAX);

    if(notasAlunos == NULL) {
        printf("Memória Insuficiente!");
        return 1;
    }

    printf("Olá, seja bem-vindo!\n");
    for(int i = 0; i < MAX; i++) {
        printf("Informe a %d nota:", i+1);
        scanf("%f",(notasAlunos+i));
    }

    for(int j = 0; j < MAX; j++) {
        printf("A %d nota foi: %.2f\n", j+1, *(notasAlunos+j));
    }

   printf("A média das notas é: %.2f\n", mediaAluno(notasAlunos));

    free(notasAlunos);
    return 0;
}
