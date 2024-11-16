#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *numero = (int*)malloc(sizeof(int));

    if (numero == NULL) {
        printf("Mem�ria Insuficiente!\n");
        return 1;
    }

    printf("Informe um n�mero para verificar se � positivo, negativo ou nulo.\n");
    scanf("%d", numero);

    if (*numero > 0) {
        printf("O n�mero � positivo!\n");
    } else if (*numero < 0) {
        printf("O n�mero � negativo!\n");
    } else {
        printf("O n�mero � nulo!\n");
    }

    free(numero);
    return 0;
}
