#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *numero = (int*)malloc(sizeof(int));

    if(numero == NULL) {
        printf("Mem�ria Insuficiente!\n");
        return 1;
    }

    printf("Informe um n�mero para saber se � �mpar ou par: ");
    scanf("%d", numero);

    if(*numero % 2 == 0) {
        printf("O n�mero %d � par!", *numero);
    } else {
        printf("O n�mero %d � �mpar!", *numero);
    }

    free(numero);
    return 0;
}
