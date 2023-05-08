#include <stdio.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL, "");

    float valor, total;
    int opcao;

    printf("Informe o valor do produto: ");
    scanf("%f", &valor);
    printf("Forma de pagamento: \n");
    printf("1 - a vista \n 2 - a prazo \n");
    printf("Escolha o pagamento (1 ou 2):");
    scanf("%d", &opcao);

    switch(opcao)
    {
    case 1:
    {
        total = valor - (valor * 0.10);
        printf("O total a pagar a vista = %.1f \n", total);
        break;
    }


    case 2:
    {
        printf("O total a pagar a prazo é = %.1f \n", valor);
        break;
    }

    default:
    {
        printf("Forma de pagamento inválida!");
    }

    }
}
