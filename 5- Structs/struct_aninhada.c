#include <stdio.h>

typedef struct {
    char rua[50];
    int numero;
} Endereco;

typedef struct {
    char nome[50];
    int idade;
    Endereco end;
} Pessoa;

int main() {
    Pessoa p;

    printf("Digite o nome: ");
    scanf(" %[^\n]", p.nome);

    printf("Digite a idade: ");
    scanf("%d", &p.idade);

    printf("Digite a rua: ");
    scanf(" %[^\n]", p.end.rua);

    printf("Digite o numero: ");
    scanf("%d", &p.end.numero);

    printf("\n--- DADOS COMPLETOS ---\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Rua: %s\n", p.end.rua);
    printf("Numero: %d\n", p.end.numero);
    
    return 0;
}