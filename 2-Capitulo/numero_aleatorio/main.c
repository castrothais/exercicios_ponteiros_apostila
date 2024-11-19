#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void gerarNumeroAleatorio(int *numeroEscolhido) {
    do {
        printf("Escolha um n�mero entre 0 e 9: ");
        scanf("%d", numeroEscolhido);

        if (*numeroEscolhido > 9 || *numeroEscolhido < 0) {
            printf("O n�mero deve estar entre 0 e 9!\n");
        }
    } while (*numeroEscolhido > 9 || *numeroEscolhido < 0);
}

int main() {
    setlocale(LC_ALL, "Portuguese");


    int *numeroEscolhido = (int*)malloc(sizeof(int));
    int *numeroGerado = (int*)malloc(sizeof(int));

    srand(time(NULL));


    if (numeroEscolhido == NULL || numeroGerado == NULL) {
        printf("Erro ao alocar mem�ria! \n");
        return 1;
    }

    printf("Informe o n�mero e verifique se voc� acertou! \n");


    *numeroGerado = rand() % 10;

    gerarNumeroAleatorio(numeroEscolhido);


    if (*numeroEscolhido == *numeroGerado) {
        printf("Parab�ns, voc� acertou! O n�mero gerado foi %d.\n", *numeroGerado);
    } else {
        printf("Voc� errou! O n�mero gerado foi %d.\n", *numeroGerado);
    }


    free(numeroEscolhido);
    free(numeroGerado);

    return 0;
}
