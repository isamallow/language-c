#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    int numeroCadeiras;
    float totalPagar;

    printf("Informe o número de cadeiras que irá comprar: ");
    scanf("%d", &numeroCadeiras);

    totalPagar = (numeroCadeiras <= 50) ? (numeroCadeiras * 45) : (numeroCadeiras * 40);

    printf("O total a pagar = %.2f \n", totalPagar);

}
