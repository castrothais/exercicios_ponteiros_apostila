#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int *numero = (int*)malloc(sizeof(int));

    if (numero == NULL) {

        printf("Erro ao alocar mem�ria!\n");
        return 1;
    }

    printf("Informe um n�mero para realizar opera��es matem�ticas:\n");
    scanf("%d", numero);

    printf("O n�mero escolhido foi: %d\n", *numero);

    int quadrado = *numero * *numero;
    int numeroAoCubo = *numero * *numero * *numero;
    float metadeNumero = (float)(*numero) / 2;
    int sucessorNumero = *numero + 1;


    printf("\n");
    printf("O quadrado de %d � %d\n", *numero, quadrado);
    printf("%d ao cubo � %d\n", *numero, numeroAoCubo);
    printf("A metade � %.2f\n", metadeNumero);
    printf("O sucessor � %d\n", sucessorNumero);


    free(numero);
    return 0;
}
