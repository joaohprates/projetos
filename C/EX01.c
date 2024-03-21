/*
    ALUNO....: JOAO HUGO DA SILVA PRATES
    CURSO....: ENGENHARIA DE SOFTWARE 4 SEMESTRE
    EXERCICIO: 01
*/


#include <stdio.h>

int main() {
    int horas_extras, horas_faltas, premio, h;

    printf("Digite o número de horas extras: ");
    scanf("%d", &horas_extras);

    printf("Escreva o número de horas de faltas: ");
    scanf("%d", &horas_faltas);

    h = horas_extras - (2 * horas_faltas / 3);

    if (h <= 10) {
        premio = 20;
    } else if (h <= 20) {
        premio = 40;
    } else if (h <= 30) {
        premio = 60;
    } else if (h <= 40) {
        premio = 80;
    } else {
        premio = 100;
    }

    printf("O valor da gratificação é de R$ %d\n", premio);

    return 0;
}