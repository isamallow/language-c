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

    printf("Informe o sal�rio m�nimo: ");
    scanf("%f", &salarioMinimo);

    printf("Informe o valor total de vendas efetuadas no m�s: ");
    scanf("%f", &totalVendas);

    comissao = (0.15 * totalVendas) + salarioMinimo;

    printf("O vendedor(a) %s recebeu no final do m�s o sal�rio %.2f \n", nome, comissao);

}
