#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    float valorProduto, desconto, valorFinal;
    int opcao;

    printf("Informe o valor do produto: \n");
    scanf("%f", &valorProduto);

    printf("Escolha a forma de pagamento: \n");
    printf("1 - a vista \n");
    printf("2 - a prazo \n");
    scanf("%d", &opcao);

    if(opcao == 1) {
        desconto = valorProduto * 0.1;
        valorFinal = valorProduto - desconto;
        printf("O valor final a vista é R$ %.2f \n", valorFinal);
    } else if(opcao == 2) {
        printf("O valor final a prazo é R$ %.2f \n", valorProduto);
    } else {
        printf("Forma de pagamento inválida!");
    }

}
