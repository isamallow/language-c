#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    int idade, opcao;

    printf("Informe a sua idade: \n");
    scanf("%f", &idade);

    printf("Possui habilita��o? \n");
    printf("0 - N�o possui \n");
    printf("1 - Possui \n");
    scanf("%d", &opcao);


    if(opcao == 0 && idade < 18) {
       printf("Voc� n�o pode dirigir o ve�culo! \n");
    } else if (opcao == 0 && idade >= 18){
        printf("Voc� n�o pode dirigir o ve�culo! \n");
    }
    else {
        printf("Voc� pode dirigir o ve�culo! \n");
    }
}
