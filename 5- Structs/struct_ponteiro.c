#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

void alterarIdade(Pessoa *p) {
    p->idade = 30;
}

int main() {
    Pessoa pessoa1;

    printf("Digite o nome: ");
    scanf(" %[^\n]", pessoa1.nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoa1.idade);

    alterarIdade(&pessoa1);

    printf("\n--- DADOS ALTERADOS ---\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    
    return 0;
}