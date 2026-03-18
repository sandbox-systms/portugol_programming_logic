#include <stdio.h>

int main() {
    float minutos, totalAPagar;

    printf("Digite a quantidade em minutos utilizados pelo cliente: ");
    scanf("%f", &minutos);

    totalAPagar = minutos * ((1.0 / 60.0) * 2.0);

    printf("Total a pagar: %.2f reais\n", totalAPagar);

    return 0;
}