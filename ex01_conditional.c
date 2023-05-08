#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if(idade >= 18) {
        printf("Você possui %d anos é maior de idade! \n", idade);
    } else {
        printf("Você possui %d anos é menor de idade! \n", idade);
    }
}
