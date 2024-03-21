/*
    ALUNO....: JOAO HUGO DA SILVA PRATES
    CURSO....: ENGENHARIA DE SOFTWARE 4 SEMESTRE
    EXERCICIO: 03
*/

#include <stdio.h>

int main() {
    char nome[100];
    float salario_hora, horas_trabalhadas, salario_final;

    
    printf("Digite o nome do funcionário: ");
    scanf("%s", nome);

    printf("Digite o salário por hora: ");
    scanf("%f", &salario_hora);

    printf("Digite o total de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);

    float salario_base = 40 * salario_hora;
    float horas_extras = horas_trabalhadas - 40;
    float acrescimo = 0.5 * horas_extras * salario_hora;
    salario_final = salario_base + acrescimo;

    printf("\nNome do funcionário: %s\n", nome);
    printf("Horas trabalhadas: %.2f\n", horas_trabalhadas);
    printf("Salário final: R$ %.2f\n", salario_final);

    return 0;
}