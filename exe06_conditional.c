#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    char estadoCivil;

    printf("Estado civil: \n s - solteiro \n c - casado \n d - divorciado \n v - vi�vo \n");
    printf("Escolha uma op��o (digite s,c, d ou v): ");
    scanf("%c", &estadoCivil);

    if (estadoCivil == 'S' || estadoCivil == 's') {
        printf("Sua escolha � solteiro! \n");
    } else if (estadoCivil == 'C' || estadoCivil == 'c') {
        printf("Sua escolha � casado! \n");
    } else if (estadoCivil == 'D' || estadoCivil == 'd') {
        printf("Sua escolha � divorcidado! \n");
    } else if (estadoCivil == 'V' || estadoCivil == 'v') {
        printf("Sua escolha � vi�vo! \n");
    } else {
        printf("Op��o inv�lida! \n");
    }

}
