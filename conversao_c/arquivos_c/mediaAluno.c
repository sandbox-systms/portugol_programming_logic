#include <stdio.h>

int main() {
    char nomeAluno[100];
    float nota1, nota2, nota3, nota4, media;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", nomeAluno);  // lê string com espaços

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota 4: ");
    scanf("%f", &nota4);

    // cálculo correto da média
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("Media do aluno %s: %.2f\n", nomeAluno, media);

    if (media >= 5.0) {
        printf("Parabens! Voce foi aprovado nas disciplinas ;)\n");
    } else {
        printf("Que pena! Infelizmente voce nao foi aprovado :(\n");
    }

    return 0;
}