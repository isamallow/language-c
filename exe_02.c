#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main () {

    setlocale(LC_ALL, "");
    char nome[61];
    int n1, n2, n3, n4, media;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite n1: ");
    scanf("%d", &n1);
    printf("Digite n2: ");
    scanf("%d", &n2);
    printf("Digite n3: ");
    scanf("%d", &n3);
    printf("Digite n4: ");
    scanf("%d", &n4);
    media = (n1 + n2 + n3 + n4)/4;

    printf("O nome do aluno é %s e sua média é %d \n", nome, media);

}
