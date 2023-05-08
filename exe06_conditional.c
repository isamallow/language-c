#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    char estadoCivil;

    printf("Estado civil: \n s - solteiro \n c - casado \n d - divorciado \n v - viúvo \n");
    printf("Escolha uma opção (digite s,c, d ou v): ");
    scanf("%c", &estadoCivil);

    if (estadoCivil == 'S' || estadoCivil == 's') {
        printf("Sua escolha é solteiro! \n");
    } else if (estadoCivil == 'C' || estadoCivil == 'c') {
        printf("Sua escolha é casado! \n");
    } else if (estadoCivil == 'D' || estadoCivil == 'd') {
        printf("Sua escolha é divorcidado! \n");
    } else if (estadoCivil == 'V' || estadoCivil == 'v') {
        printf("Sua escolha é viúvo! \n");
    } else {
        printf("Opção inválida! \n");
    }

}
