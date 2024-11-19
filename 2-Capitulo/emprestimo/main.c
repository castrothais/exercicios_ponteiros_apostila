#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


float lerValorPositivo(char *mensagem) {
float valor;

    do{
        printf("%s", mensagem);
        scanf("%f", &valor);

        if (valor <= 0) {
            printf("Valor inválido! Deve ser maior que zero.\n");
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
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Olá. Para verificar se o empréstimo vai ocorrer perfeitamente, nos informe:\n ");
    *salario = lerValorPositivo("Qual o seu salário? ");
    *valorEmprestimo = lerValorPositivo("Qual o valor do empréstimo? ");
    *quantidadePrestacoes = lerValorPositivo("Quantas prestações? ");

    float valorprestacao = *valorEmprestimo / *quantidadePrestacoes;

    if (valorprestacao > (*salario * 0.30)) {
        printf("Empréstimo não pode ser concedido! O valor da parcela (%.2f) ultrapassa 30%% do seu salário (%.2f).\n", valorprestacao, *salario);
    } else {
        printf("Empréstimo concedido! O valor da parcela será %.2f, que está dentro do limite de 30%% do seu salário.\n", valorprestacao);
    }

    free(salario);
    free(valorEmprestimo);
    free(quantidadePrestacoes);

    return 0;

}
