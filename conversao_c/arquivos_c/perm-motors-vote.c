#include <stdio.h>
#include <time.h>

int main() {
    int anoNascimento, idade;

    time_t t = time(NULL);
    struct tm *data = localtime(&t);
    int anoAtual = data->tm_year + 1900;

    printf("Digite o ano em que voce nasceu: ");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    printf("Voce tem %d anos\n", idade);

    if (idade >= 18) {
        printf("Voce ja pode votar\n");
        printf("Voce ja pode tirar sua carteira de motorista\n");
    } else if (idade >= 16) {
        printf("Voce ja pode votar\n");
        printf("Voce NAO pode tirar sua carteira de motorista\n");
    } else {
        printf("Voce nao pode votar e nem pode tirar a carteira de motorista\n");
    }

    return 0;
}