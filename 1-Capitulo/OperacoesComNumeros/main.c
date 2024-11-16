#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int *numero = (int*)malloc(sizeof(int));

    if (numero == NULL) {

        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Informe um número para realizar operações matemáticas:\n");
    scanf("%d", numero);

    printf("O número escolhido foi: %d\n", *numero);

    int quadrado = *numero * *numero;
    int numeroAoCubo = *numero * *numero * *numero;
    float metadeNumero = (float)(*numero) / 2;
    int sucessorNumero = *numero + 1;


    printf("\n");
    printf("O quadrado de %d é %d\n", *numero, quadrado);
    printf("%d ao cubo é %d\n", *numero, numeroAoCubo);
    printf("A metade é %.2f\n", metadeNumero);
    printf("O sucessor é %d\n", sucessorNumero);


    free(numero);
    return 0;
}
