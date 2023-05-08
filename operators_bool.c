#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");
    printf("Operador E \n");
    printf("V e V = %d \n", true && true);
    printf("V e F = %d \n", true && false);
    printf("F e V = %d \n", false && true);
    printf("F e F = %d \n", false && false);
    printf("Operador OU \n");
    printf("V ou V = %d \n", true || true);
    printf("V ou F = %d \n", true || false);
    printf("F ou V = %d \n", false || true);
    printf("F ou F = %d \n", false || false);
    printf("Operador NÃO \n");
    printf("não V = %d \n", !true);
    printf("não F = %d \n", !false);

}
