#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    int idade, opcao;

    printf("Informe a sua idade: \n");
    scanf("%f", &idade);

    printf("Possui habilitação? \n");
    printf("0 - Não possui \n");
    printf("1 - Possui \n");
    scanf("%d", &opcao);


    if(opcao == 0 && idade < 18) {
       printf("Você não pode dirigir o veículo! \n");
    } else if (opcao == 0 && idade >= 18){
        printf("Você não pode dirigir o veículo! \n");
    }
    else {
        printf("Você pode dirigir o veículo! \n");
    }
}
