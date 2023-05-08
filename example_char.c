#include <stdio.h>
#include <stdlib.h>

void main() {
    char name[50];
    char sex;

    printf("Digite o seu nome: ");
    gets(name);
    printf("Digite o seu sexo: ");
    scanf("%c", &sex);

    printf("\n O nome digitado foi %s e o sexo %c \n", name, sex);
}
