#include <stdio.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL, "");

    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    switch(idade >= 18)
    {
    case 1:
        printf("Voc� possui %d anos � maior de idade! \n", idade);
        break;
    default:
        printf("Voc� possui %d anos � menor de idade! \n", idade);
    }
}
