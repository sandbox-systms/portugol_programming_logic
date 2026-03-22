#include <stdio.h>

int main() {
    int quantidade;
    float preco, totalAPagar;
    char produto[100];
    char cliente[100];
    int compraEfetuada; // 1 = verdadeiro, 0 = falso

    quantidade = 2;
    preco = 89.90;
    totalAPagar = quantidade * preco;

    // Em C, strings devem ser copiadas com strcpy
    sprintf(produto, "Bolsas");
    sprintf(cliente, "Ana Paula");

    compraEfetuada = 1;

    printf("%d\n", quantidade);
    printf("%.2f\n", preco);
    printf("%.2f\n", totalAPagar);
    printf("%s\n", cliente);
    printf("%s\n", produto);
    printf("%d\n", compraEfetuada);

    printf("\n\n");

    printf("A cliente %s comprou %d %s e vai pagar o total de %.2f\n",
           cliente, quantidade, produto, totalAPagar);

    return 0;
}