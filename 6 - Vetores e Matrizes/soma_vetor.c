#include <stdio.h>

int main() {

    int numeros[5];
    int soma = 0;

    // Preenchendo o vetor
    for(int i = 0; i < 5; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Somando os valores do vetor
    for(int i = 0; i < 5; i++) {
        soma += numeros[i];
    }

    // Exibindo o resultado
    printf("\nA soma dos numeros e: %d\n", soma);

    return 0;
}
