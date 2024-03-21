/*
    ALUNO....: JOAO HUGO DA SILVA PRATES
    CURSO....: ENGENHARIA DE SOFTWARE 4 SEMESTRE
    EXERCICIO: 02
*/
#include <stdio.h>

int main(){
    //var
    float litros_gastos = 30.10;
    float quilometros = 100;

    //quanto foi os litros
    float reais_litros_gastos = litros_gastos * 5.24;

    //consumo medio
    float consumo_medio = litros_gastos / quilometros;
    //printsssssss
    printf("Foi gasto %.2f litros de gasolina\n", litros_gastos);
    printf("Foi percorrido um total de %.2f quilometros\n", quilometros);
    printf("Foi gasto em combustivel R$ %.2f\n", reais_litros_gastos);
    printf("Em media o carro gasta %.2f litros por km", consumo_medio);

    return 0;
}