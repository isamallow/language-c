#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    float salario;
    int tempo, idade;

    printf("Informe o tempo de servi�o (com anos inteiros): ");
    scanf("%d", &tempo);
    printf("Informe a idade (anos): ");
    scanf("%d", &idade);
    printf("Informe o sol�rio: ");
    scanf("%f", &salario);

    if(tempo > 3 && idade > 30 && salario <= 4000) {
        printf("Receberia reajuste! \n");
    } else {
        printf("N�o receber� reajuste! \n");
    }

}
