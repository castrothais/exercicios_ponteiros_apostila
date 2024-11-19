#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int *planetaEscolhido = (int*)malloc(sizeof(int));
    float *pesoNaTerra = (float*)malloc(sizeof(float));
    float *gravidadeRelativa = (float*)malloc(sizeof(float));
    float *pesoNoPlaneta = (float*)malloc(sizeof(float));

    if(planetaEscolhido == NULL || pesoNaTerra == NULL || gravidadeRelativa == NULL || pesoNoPlaneta == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Planetas Disponíveis: \n");
    printf("1- Mercúrio\n");
    printf("2- Vênus\n");
    printf("3- Marte\n");
    printf("4- Júpiter\n");
    printf("5- Saturno\n");
    printf("6- Urano\n");
    printf("7- Netuno\n");

    do {
        printf("Digite o número do planeta escolhido (1-7): ");
        scanf("%d", planetaEscolhido);

        if (*planetaEscolhido < 1 || *planetaEscolhido > 7) {
            printf("Escolha inválida! O número do planeta deve estar entre 1 e 7.\n");
        }
    } while (*planetaEscolhido < 1 || *planetaEscolhido > 7);

    do {
        printf("Informe seu peso na Terra: ");
        scanf("%f", pesoNaTerra);

        if (*pesoNaTerra <= 0) {
            printf("Peso inválido! O peso deve ser maior que zero.\n");
        }
    } while (*pesoNaTerra <= 0);

    switch(*planetaEscolhido) {
        case 1: *gravidadeRelativa = 0.376; break;
        case 2: *gravidadeRelativa = 0.903; break;
        case 3: *gravidadeRelativa = 0.380; break;
        case 4: *gravidadeRelativa = 2.340; break;
        case 5: *gravidadeRelativa = 1.160; break;
        case 6: *gravidadeRelativa = 1.150; break;
        case 7: *gravidadeRelativa = 1.190; break;
        default: *gravidadeRelativa = 0; break;
    }

    if (*gravidadeRelativa != 0) {
        *pesoNoPlaneta = *pesoNaTerra * *gravidadeRelativa;
        printf("Seu peso no planeta escolhido é %.2f\n", *pesoNoPlaneta);
    } else {
        printf("Erro na escolha do planeta.\n");
    }

    free(planetaEscolhido);
    free(pesoNaTerra);
    free(gravidadeRelativa);
    free(pesoNoPlaneta);

    return 0;
}
