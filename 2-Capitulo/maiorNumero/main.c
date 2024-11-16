#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Alocação dinâmica de memória para os 3 números
    int *primeiroNumero = (int*)malloc(sizeof(int));
    int *segundoNumero = (int*)malloc(sizeof(int));
    int *terceiroNumero = (int*)malloc(sizeof(int));

    if (primeiroNumero == NULL || segundoNumero == NULL || terceiroNumero == NULL) {
        printf("Memória Insuficiente!\n");
        return 1;
    }

    printf("Vamos localizar o maior número!\n");
    printf("Informe o primeiro número: ");
    scanf("%d", primeiroNumero);

    printf("Informe o segundo número: ");
    scanf("%d", segundoNumero);

    printf("Informe o terceiro número: ");
    scanf("%d", terceiroNumero);

    if (*primeiroNumero >= *segundoNumero && *primeiroNumero >= *terceiroNumero) {
        printf("O maior número é o %d\n", *primeiroNumero);
    } else if (*segundoNumero >= *primeiroNumero && *segundoNumero >= *terceiroNumero) {
        printf("O maior número é o %d\n", *segundoNumero);
    } else {
        printf("O maior número é o %d\n", *terceiroNumero);
    }

    free(primeiroNumero);
    free(segundoNumero);
    free(terceiroNumero);

    return 0;
}
