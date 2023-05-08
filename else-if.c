#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");
    float media, n1, n2, n3, n4;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    printf("Digite a nota 4: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    if(media >= 6) {
        printf("Sua média foi de %.2f e você está aprovado! \n", media);
    } else if (media < 6 && media >= 3 ) {
        printf("Sua média foi de %.2f e você está em recuperação!", media);
    } else {
        printf("Sua média foi de %.2f e você está reprovado!", media);
    }

}
