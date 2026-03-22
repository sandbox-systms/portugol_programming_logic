#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 10) {
        printf("%d eh maior que 10.\n", numero);
    } else {
        printf("%d eh menor que 10.\n", numero);
    }

    return 0;
}