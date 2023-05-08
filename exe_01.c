#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");
    int valor, quantidade, parcelas;


    printf("Qual é o valor do produto? ");
    scanf("%d", &valor);
    printf("Quantas parcelas deseja pagar? ");
    scanf("%d", &quantidade);

    parcelas = valor / quantidade;
    printf("O valor de cada parcela será %d \n", parcelas);

}
