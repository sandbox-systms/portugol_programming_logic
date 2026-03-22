#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero >= 2 && numero <= 10) {
        printf("O %d esta no intervalo de 2 a 10\n", numero);
    } else {
        printf("O numero digitado esta fora do intervalo de 2 a 10\n");
    }

    return 0;
}