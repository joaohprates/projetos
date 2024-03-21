/*
    ALUNO....: JOAO HUGO DA SILVA PRATES
    CURSO....: ENGENHARIA DE SOFTWARE 4 SEMESTRE
    EXERCICIO: 02
*/

#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    char sexo;
    float mensalidade, desconto;

    printf("Digite o nome do associado: ");
    scanf("%s", nome);

    printf("Digite a idade do associado: ");
    scanf("%d", &idade);

    printf("Digite o sexo (M/F) do associado: ");
    scanf(" %c", &sexo);

    printf("Digite o valor da mensalidade: ");
    scanf("%f", &mensalidade);

    if (sexo == 'F') {
        if (idade <= 30) {
            desconto = 0.2;
        } else if (idade <= 40) {
            desconto = 0.3;
        } else {
            desconto = 0.35;
        }
    } else if (sexo == 'M') {
        if (idade <= 25) {
            desconto = 0;
        } else {
            desconto = 0.25;
        }
    } else {
        printf("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n");
        return 1;
    }

    float valor_com_desconto = mensalidade * (1 - desconto);

    printf("\nNome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Sexo: %c\n", sexo);
    printf("Mensalidade a pagar (com desconto): R$ %.2f\n", valor_com_desconto);

    return 0;
}