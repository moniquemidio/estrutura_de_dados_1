#include <stdio.h>

int main() {

    int numeros[5];

    // Preenchendo o vetor
    for(int i = 0; i < 5; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Mostrando os valores digitados
    printf("\nNumeros digitados:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
