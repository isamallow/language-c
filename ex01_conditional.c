#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if(idade >= 18) {
        printf("Voc� possui %d anos � maior de idade! \n", idade);
    } else {
        printf("Voc� possui %d anos � menor de idade! \n", idade);
    }
}
