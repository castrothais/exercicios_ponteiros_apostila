#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *alternativaEscolhida = (char*)malloc(sizeof(char));

    if(alternativaEscolhida == NULL) {
        printf("Erro ao alocar mem�ria! \n");
        return 1;
    }

    printf("Ol�! Vamos treinar seus conhecimentos de ponteiro em programa��o!\n");

    printf("1. O que � um ponteiro em programa��o?\n");
    printf("a) Um tipo de vari�vel que armazena um valor literal.\n");
    printf("b) Um tipo de vari�vel que armazena o endere�o de mem�ria de outra vari�vel.\n");
    printf("c) Um tipo de fun��o usada para acessar vari�veis.\n");
    printf("d) Uma refer�ncia a um tipo de dado espec�fico, como inteiro ou caractere.\n");
    printf("e) Uma estrutura de dados que cont�m dados do tipo array.\n");

    // Adicionando espa�o antes de %c para evitar problemas com o buffer de entrada
    scanf(" %c", alternativaEscolhida);

    //alternativaEscolhida = getchar();  L� o caractere de entrada
    //getchar();  Consumir o '\n' residual ap�s pressionar Enter

    switch(*alternativaEscolhida)
    {
        case 'a':
            printf("Resposta Incorreta!\n");
            break;
        case 'b':
            printf("Parab�ns! Voc� acertou.\n");
            break;
        case 'c':
            printf("Resposta Incorreta!\n");
            break;
        case 'd':
            printf("Resposta Incorreta!\n");
            break;
        case 'e':
            printf("Resposta Incorreta!\n");
            break;
        default:
            printf("Escolha uma alternativa entre 'a' e 'e'.\n");
            break;
    }

    free(alternativaEscolhida);

    return 0;
}
