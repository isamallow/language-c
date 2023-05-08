#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");
    float peso, altura, IMC;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);

    printf("O seu IMC é %.2f \n", IMC);

}
