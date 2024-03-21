/*
    ALUNO....: JOAO HUGO DA SILVA PRATES
    CURSO....: ENGENHARIA DE SOFTWARE 4 SEMESTRE
    EXERCICIO: 01
*/


#include <stdio.h>

int main() {
    //variaveis
    char nome[50] = "Joao Prates";
    int idade = 30;
    char cargo[50] = "Faz tudo";
    float salario_bruto = 500.00;

    // 38%
    float reajuste = 0.38;
    float salario_corrigido = salario_bruto * (1 + reajuste);

    // 20%
    float gratificacao = 0.20 * salario_corrigido;
    // -15%
    float desconto_IR = 0.15 * salario_corrigido;
    // salario final
    float liquido = salario_corrigido - desconto_IR;

    // printsss
    printf("Nome: %s\n", nome);
    printf("idade: %d anos \n", idade);
    printf("Cargo: %s\n", cargo);
    printf("Salario bruto anterior: R$ %.2f\n", salario_bruto);
    printf("Salario bruto corrigido: R$ %.2f\n", salario_corrigido);
    printf("Valor da gratificacao: R$ %.2f\n", gratificacao);
    printf("Valor do desconto IR: R$ %.2f\n", desconto_IR);
    printf("Salario liquido: R$ %.2f\n", liquido);

    return 0;
}