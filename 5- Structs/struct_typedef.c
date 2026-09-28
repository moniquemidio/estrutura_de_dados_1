#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main() {
    Aluno a1;

    printf("Digite o nome: ");
    scanf(" %[^\n]", a1.nome);

    printf("Digite a idade: ");
    scanf("%d", &a1.idade);

    printf("Digite a nota: ");
    scanf("%f", &a1.nota);

    printf("\n--- DADOS DO ALUNO ---\n");
    printf("Nome: %s\n", a1.nome);
    printf("Idade: %d\n", a1.idade);
    printf("Nota: %.2f\n", a1.nota);
    
    return 0;
}