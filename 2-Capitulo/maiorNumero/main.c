#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Aloca��o din�mica de mem�ria para os 3 n�meros
    int *primeiroNumero = (int*)malloc(sizeof(int));
    int *segundoNumero = (int*)malloc(sizeof(int));
    int *terceiroNumero = (int*)malloc(sizeof(int));

    if (primeiroNumero == NULL || segundoNumero == NULL || terceiroNumero == NULL) {
        printf("Mem�ria Insuficiente!\n");
        return 1;
    }

    printf("Vamos localizar o maior n�mero!\n");
    printf("Informe o primeiro n�mero: ");
    scanf("%d", primeiroNumero);

    printf("Informe o segundo n�mero: ");
    scanf("%d", segundoNumero);

    printf("Informe o terceiro n�mero: ");
    scanf("%d", terceiroNumero);

    if (*primeiroNumero >= *segundoNumero && *primeiroNumero >= *terceiroNumero) {
        printf("O maior n�mero � o %d\n", *primeiroNumero);
    } else if (*segundoNumero >= *primeiroNumero && *segundoNumero >= *terceiroNumero) {
        printf("O maior n�mero � o %d\n", *segundoNumero);
    } else {
        printf("O maior n�mero � o %d\n", *terceiroNumero);
    }

    free(primeiroNumero);
    free(segundoNumero);
    free(terceiroNumero);

    return 0;
}
