#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");
    int distancia, quantidadeLitros;
    float consumoMedio;

    printf("Informe a distância percorrida: ");
    scanf("%d", &distancia);

    printf("Digite a quantidade de litros: ");
    scanf("%d", &quantidadeLitros);

    consumoMedio = distancia / quantidadeLitros;

    printf("O consumo médio é %.2f km/h \n", consumoMedio);

}
