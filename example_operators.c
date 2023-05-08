#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main () {

    float n1, n2, r1, r2, r3, r4, r5, r6;

    printf("Digite um número: ");
    scanf("%f", &n1);
    printf("Digite outro número: ");
    scanf("%f", &n2);
    r1 = n1 + n2;
    printf("%.if + %.f = %.1f \n", n1, n2, r1);
    r2 = n1 - n2;
    printf("%.if - %.f = %.1f \n", n1, n2, r2);
    r3 = n1 * n2;
    printf("%.if * %.f = %.1f \n", n1, n2, r3);
    r4 = n1 / n2;
    printf("%.if / %.f = %.1f \n", n1, n2, r4);
    r5 = pow(n1, n2);
    printf("%.if elevado a %.f = %.1f \n", n1, n2, r5);
    r6 = sqrt(n1);
    printf("A raiz quadrada de %.if = %.1f \n", n1, r6);

}
