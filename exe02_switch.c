#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    int numCadeiras;
    float precoUnitario;
    float total;

    printf("Infome o número de cadeiras: \n ");
    scanf("%d", &numCadeiras);

    switch (numCadeiras) {
        case 0 ... 50:
            precoUnitario = 45.00;
            break;
        default:
            precoUnitario = 40.00;
            break;
    }

    total = numCadeiras * precoUnitario;

    printf("Total a ser pago: R$%.2f\n", total);

}
