/*
    ALUNO....: JOAO HUGO DA SILVA PRATES
    CURSO....: ENGENHARIA DE SOFTWARE 4 SEMESTRE
    EXERCICIO: 04
*/


#include <stdio.h>

int main() {
    //var
    char nome[100]; 
    int horas_trabalhadas, num_dependentes;
    float salario_bruto, salario_liquido, desconto_inss, desconto_ir;
    
    // valor constante
    const float valor_hora = 12.00;
    const float valor_por_dependente = 40.00;
    const float taxa_inss = 0.085; // 8,5%
    const float taxa_ir = 0.05; // 5%
    
    // scan var
    printf("Digite o nome do funcionario: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;
    
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);
    
    printf("Digite o numero de dependentes: ");
    scanf("%d", &num_dependentes);
    
    // salário bruto
    salario_bruto = (horas_trabalhadas * valor_hora) + (num_dependentes * valor_por_dependente);
    
    // descontos
    desconto_inss = salario_bruto * taxa_inss;
    desconto_ir = salario_bruto * taxa_ir;
    
    // Cálculo do salário líquido
    salario_liquido = salario_bruto - desconto_inss - desconto_ir;
    
    // Exibição dos resultados
    printf("Nome: %s\n", nome);
    printf("Salario Bruto: R$%.2f\n", salario_bruto);
    printf("Desconto INSS: R$%.2f\n", desconto_inss);
    printf("Desconto IR: R$%.2f\n", desconto_ir);
    printf("Salario Liquido: R$%.2f\n", salario_liquido);
    
    return 0;
}