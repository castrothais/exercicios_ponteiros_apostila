#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float lerValorPositivo(char *mensagem) {
float valor;

    do{
        printf("%s", mensagem);
        scanf("%f", &valor);

        if (valor <= 0) {
            printf("Valor inv�lido! Deve ser maior que zero.\n");
        }

    } while(valor<=0);

return valor;
}

int main()
{

    setlocale(LC_ALL,"Portuguese");
    float *salario = (float*)malloc(sizeof(float));
    float *valorEmprestimo = (float*)malloc(sizeof(float));
    float *quantidadePrestacoes = (float*)malloc(sizeof(float));

    if(salario == NULL || valorEmprestimo == NULL || quantidadePrestacoes == NULL) {
        printf("Erro ao alocar mem�ria!\n");
        return 1;
    }

    printf("Ol�. Para verificar se o empr�stimo vai ocorrer perfeitamente, nos informe:\n ");
    *salario = lerValorPositivo("Qual o seu sal�rio? ");
    *valorEmprestimo = lerValorPositivo("Qual o valor do empr�stimo? ");
    *quantidadePrestacoes = lerValorPositivo("Quantas presta��es? ");

    float valorprestacao = *valorEmprestimo / *quantidadePrestacoes;

    if (valorprestacao > (*salario * 0.30)) {
        printf("Empr�stimo n�o pode ser concedido! O valor da parcela (%.2f) ultrapassa 30%% do seu sal�rio (%.2f).\n", valorprestacao, *salario);
    } else {
        printf("Empr�stimo concedido! O valor da parcela ser� %.2f, que est� dentro do limite de 30%% do seu sal�rio.\n", valorprestacao);
    }

    free(salario);
    free(valorEmprestimo);
    free(quantidadePrestacoes);

    return 0;

}
