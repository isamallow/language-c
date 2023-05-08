#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");
    char nome[50];
    float comissao, salarioMinimo, totalVendas;

    printf("Informe o nome do vendedor: ");
    scanf("%s", &nome);

    printf("Informe o salário mínimo: ");
    scanf("%f", &salarioMinimo);

    printf("Informe o valor total de vendas efetuadas no mês: ");
    scanf("%f", &totalVendas);

    comissao = (0.15 * totalVendas) + salarioMinimo;

    printf("O vendedor(a) %s recebeu no final do mês o salário %.2f \n", nome, comissao);

}
