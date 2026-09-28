#include <stdio.h>

int main() {

    int matriz[2][2];
    int soma = 0;

    // Preenchendo a matriz
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Somando os valores da matriz
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            soma += matriz[i][j];
        }
    }

    // Exibindo o resultado
    printf("\nA soma dos valores da matriz e: %d\n", soma);

    return 0;
}
