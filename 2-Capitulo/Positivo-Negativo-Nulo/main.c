#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *numero = (int*)malloc(sizeof(int));

    if (numero == NULL) {
        printf("Memória Insuficiente!\n");
        return 1;
    }

    printf("Informe um número para verificar se é positivo, negativo ou nulo.\n");
    scanf("%d", numero);

    if (*numero > 0) {
        printf("O número é positivo!\n");
    } else if (*numero < 0) {
        printf("O número é negativo!\n");
    } else {
        printf("O número é nulo!\n");
    }

    free(numero);
    return 0;
}
