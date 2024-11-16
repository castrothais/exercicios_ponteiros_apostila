#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *numero = (int*)malloc(sizeof(int));

    if(numero == NULL) {
        printf("Memória Insuficiente!\n");
        return 1;
    }

    printf("Informe um número para saber se é ímpar ou par: ");
    scanf("%d", numero);

    if(*numero % 2 == 0) {
        printf("O número %d é par!", *numero);
    } else {
        printf("O número %d é ímpar!", *numero);
    }

    free(numero);
    return 0;
}
