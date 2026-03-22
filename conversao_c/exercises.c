#include <stdio.h>

int main() {
    char nomeAluno[100];
    float nota1, nota2, nota3, nota4, media;

    printf("Digite o nome do aluno: ");
    fgets(nomeAluno, sizeof(nomeAluno), stdin);

    printf("Digite a Nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a Nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a Nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a Nota 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\nAluno: %s", nomeAluno);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("Nota 4: %.2f\n", nota4);
    printf("Media: %.2f\n", media);

    return 0;
}

// Compilação e execução direta sem bugs, erros e/ou falhas de I/O