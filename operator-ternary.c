#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    float salario, resultado;

    printf("Digite o sal�rio: ");
    scanf("%f", &salario);
    resultado = salario >= 1000 ? salario + (salario * 0.10) : salario + (salario * 0.05);
    printf("O novo sal�rio = %.2f \n", resultado);

}
