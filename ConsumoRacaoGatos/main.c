#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularRestanteRacao(float *pesoPacote, float *racaoGato1, float *racaoGato2) {
    float quantidadeDiaria = *racaoGato1 + *racaoGato2;
    printf("Os gatos consomem diariamente %.2f gramas de ração\n", quantidadeDiaria);

    // Após 5 dias, calcula-se o restante da ração
    float diasDeRacao = 5;

    // Cálculo de quanto restará após 5 dias, considerando o pacote de ração em gramas
    float restanteRacao = (*pesoPacote * 1000) - (quantidadeDiaria * diasDeRacao);
    return restanteRacao;


}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float *pesoPacote = (float*)malloc(sizeof(float));
    float *racaoGato1 = (float*)malloc(sizeof(float));
    float *racaoGato2 = (float*)malloc(sizeof(float));

    if(pesoPacote == NULL || racaoGato1 == NULL || racaoGato2 == NULL) {
        printf("Memória Insuficiente!");
        return 1;
    }

    printf("Informe quantos KG possui o pacote de ração para gatos: ");
    scanf("%f", pesoPacote);

    printf("Informe quantidade de ração diária que o Gato 1 recebe em gramas: ");
    scanf("%f", racaoGato1);

    printf("Informe quantidade de ração diária que o Gato 2 recebe em gramas: ");
    scanf("%f", racaoGato2);

    printf("\n");

    printf("Os valores fornecidos foram: \n");
    printf("Peso Pacote Ração: %.2f KG \n", *pesoPacote);
    printf("Ração Gato 1: %.2f gramas \n", *racaoGato1);
    printf("Ração Gato 2: %.2f gramas \n", *racaoGato2);

    float racaorestante = calcularRestanteRacao(pesoPacote, racaoGato1, racaoGato2);
    // Exibe o restante de ração em gramas
    printf("\nApós 5 dias, sobrará %.2f gramas de ração.\n", racaorestante);

    free(pesoPacote);
    free(racaoGato1);
    free(racaoGato2);
    return 0;
}
