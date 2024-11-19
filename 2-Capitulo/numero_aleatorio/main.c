#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void gerarNumeroAleatorio(int *numeroEscolhido) {
    do {
        printf("Escolha um número entre 0 e 9: ");
        scanf("%d", numeroEscolhido);

        if (*numeroEscolhido > 9 || *numeroEscolhido < 0) {
            printf("O número deve estar entre 0 e 9!\n");
        }
    } while (*numeroEscolhido > 9 || *numeroEscolhido < 0);
}

int main() {
    setlocale(LC_ALL, "Portuguese");


    int *numeroEscolhido = (int*)malloc(sizeof(int));
    int *numeroGerado = (int*)malloc(sizeof(int));

    srand(time(NULL));


    if (numeroEscolhido == NULL || numeroGerado == NULL) {
        printf("Erro ao alocar memória! \n");
        return 1;
    }

    printf("Informe o número e verifique se você acertou! \n");


    *numeroGerado = rand() % 10;

    gerarNumeroAleatorio(numeroEscolhido);


    if (*numeroEscolhido == *numeroGerado) {
        printf("Parabéns, você acertou! O número gerado foi %d.\n", *numeroGerado);
    } else {
        printf("Você errou! O número gerado foi %d.\n", *numeroGerado);
    }


    free(numeroEscolhido);
    free(numeroGerado);

    return 0;
}
