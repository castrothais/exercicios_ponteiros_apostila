#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularRestanteRacao(float *pesoPacote, float *racaoGato1, float *racaoGato2) {
    float quantidadeDiaria = *racaoGato1 + *racaoGato2;
    printf("Os gatos consomem diariamente %.2f gramas de ra��o\n", quantidadeDiaria);

    // Ap�s 5 dias, calcula-se o restante da ra��o
    float diasDeRacao = 5;

    // C�lculo de quanto restar� ap�s 5 dias, considerando o pacote de ra��o em gramas
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
        printf("Mem�ria Insuficiente!");
        return 1;
    }

    printf("Informe quantos KG possui o pacote de ra��o para gatos: ");
    scanf("%f", pesoPacote);

    printf("Informe quantidade de ra��o di�ria que o Gato 1 recebe em gramas: ");
    scanf("%f", racaoGato1);

    printf("Informe quantidade de ra��o di�ria que o Gato 2 recebe em gramas: ");
    scanf("%f", racaoGato2);

    printf("\n");

    printf("Os valores fornecidos foram: \n");
    printf("Peso Pacote Ra��o: %.2f KG \n", *pesoPacote);
    printf("Ra��o Gato 1: %.2f gramas \n", *racaoGato1);
    printf("Ra��o Gato 2: %.2f gramas \n", *racaoGato2);

    float racaorestante = calcularRestanteRacao(pesoPacote, racaoGato1, racaoGato2);
    // Exibe o restante de ra��o em gramas
    printf("\nAp�s 5 dias, sobrar� %.2f gramas de ra��o.\n", racaorestante);

    free(pesoPacote);
    free(racaoGato1);
    free(racaoGato2);
    return 0;
}
