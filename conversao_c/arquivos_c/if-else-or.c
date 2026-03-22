#include <stdio.h>
#include <string.h>

int main() {
    char cor[50];

    printf("Digite uma cor: ");
    scanf("%49s", cor);

    if (strcmp(cor, "azul") == 0 || strcmp(cor, "amarelo") == 0) {
        printf("Cor válida!\n");
    } else {
        printf("A cor inserida é invalida!\n");
    }

    return 0;
}