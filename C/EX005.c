/*
    ALUNO....: JOAO HUGO DA SILVA PRATES
    CURSO....: ENGENHARIA DE SOFTWARE 4 SEMESTRE
    EXERCICIO: 05
*/


#include <stdio.h>

int main() {
    //var e scan p var
    int num_empregados, num_bicicletas_vendidas;
    float salario_minimo, preco_custo_bicicleta;
    
    printf("Digite o número de empregados da loja: ");
    scanf("%d", &num_empregados);
    
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);
    
    printf("Digite o preço de custo de cada bicicleta: ");
    scanf("%f", &preco_custo_bicicleta);
    
    printf("Digite o número de bicicletas vendidas: ");
    scanf("%d", &num_bicicletas_vendidas);

    // calculos
    float preco_venda_bicicleta = preco_custo_bicicleta * 1.5;
    float comissao_por_bicicleta = (preco_custo_bicicleta * 0.15) / num_empregados;
    float salario_base = 2 * salario_minimo;
    float total_comissao = comissao_por_bicicleta * num_bicicletas_vendidas * num_empregados;
    float salario_final = salario_base + (comissao_por_bicicleta * num_bicicletas_vendidas);
    float receita_vendas = preco_venda_bicicleta * num_bicicletas_vendidas;
    float custo_bicicletas = preco_custo_bicicleta * num_bicicletas_vendidas;
    float lucro_liquido = receita_vendas - custo_bicicletas - (salario_base * num_empregados) - total_comissao;

    // printssss
    printf("Salário final de cada empregado: R$%.2f\n", salario_final);
    printf("Lucro líquido da loja: R$%.2f\n", lucro_liquido);

    return 0;
}