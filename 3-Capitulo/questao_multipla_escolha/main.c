#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char *alternativaEscolhida = (char*)malloc(sizeof(char));

    if(alternativaEscolhida == NULL) {
        printf("Erro ao alocar memória! \n");
        return 1;
    }

    printf("Olá! Vamos treinar seus conhecimentos de ponteiro em programação!\n");

    printf("1. O que é um ponteiro em programação?\n");
    printf("a) Um tipo de variável que armazena um valor literal.\n");
    printf("b) Um tipo de variável que armazena o endereço de memória de outra variável.\n");
    printf("c) Um tipo de função usada para acessar variáveis.\n");
    printf("d) Uma referência a um tipo de dado específico, como inteiro ou caractere.\n");
    printf("e) Uma estrutura de dados que contém dados do tipo array.\n");

    // Adicionando espaço antes de %c para evitar problemas com o buffer de entrada
    scanf(" %c", alternativaEscolhida);

    //alternativaEscolhida = getchar();  Lê o caractere de entrada
    //getchar();  Consumir o '\n' residual após pressionar Enter

    switch(*alternativaEscolhida)
    {
        case 'a':
            printf("Resposta Incorreta!\n");
            break;
        case 'b':
            printf("Parabéns! Você acertou.\n");
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
