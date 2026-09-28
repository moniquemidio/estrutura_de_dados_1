#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
} Produto;

void exibirProduto(Produto p) {
    printf("\n--- PRODUTO ---\n");
    printf("Nome: %s\n", p.nome);
    printf("Preco: R$ %.2f\n", p.preco);
}

int main() {
    Produto prod;
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", prod.nome);

    printf("Digite o preco: ");
    scanf("%f", &prod.preco);

    exibirProduto(prod);
    
    return 0;
}
