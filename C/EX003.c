/*
    ALUNO....: JOAO HUGO DA SILVA PRATES
    CURSO....: ENGENHARIA DE SOFTWARE 4 SEMESTRE
    EXERCICIO: 03
*/


#include <stdio.h>

int main(){
    //var por scan
    float odometro_inicio, km_fim_dia, litros, valor;
    
    printf("Digite a marcacao do odometro no inicio do dia: ");
    scanf("%f", &odometro_inicio);

    printf("Digite a marcacao de km no final do dia: ");
    scanf("%f", &km_fim_dia);

    printf("Digite quantos litros de combustivel foram gastos: ");
    scanf("%f", &litros);

    printf("Digite quanto foi o valor recebido dos passageiros: ");
    scanf("%f", &valor);

    // valor litros
    float valor_litros = litros * 5.24;

    // km percorrido
    float km = km_fim_dia - odometro_inicio;

    //lucro
    float lucro = valor - valor_litros; 

    //media consumo
    float media = km / litros; 

    //prints
    printf("Odometro no inicio do dia : %.2f\n", odometro_inicio);
    printf("Odometro no fim do dia : %.2f\n", km_fim_dia);
    printf("Quantidade de quilometros percorridos : %.2f\n", km);
    printf("O custo com combustível foi R$ %.2f\n", valor_litros);
    printf("O lucro do dia foi : %.2f\n", lucro);
    printf("Seu carro faz %.2f km por litro\n", media); 
    
    return 0;
}