/*
    ALUNO....: JOAO HUGO DA SILVA PRATES
    CURSO....: ENGENHARIA DE SOFTWARE 4 SEMESTRE
    EXERCICIO: 04
*/

#include <stdio.h>

int main() {
    int A, B, Y;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    if (A < B) {
        Y = B - A;
    } else if (B < A) {
        Y = A - B;
    } else {
        Y = A + B;
    }

    printf("\nValores:\n");
    printf("A: %d\n", A);
    printf("B: %d\n", B);
    printf("Y: %d\n", Y);

    return 0;
}