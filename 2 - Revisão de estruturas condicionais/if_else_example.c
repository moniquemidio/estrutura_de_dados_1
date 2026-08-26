#include <stdio.h>

int main() {

  int idade;
  
  printf("Digite a idade: ");
  scanf("%d", &idade);
    
  if (idade >= 18 && idade <= 65) {
    printf("Dentro da faixa permitida.\n");
  } else {
    printf("Fora da faixa permitida.\n");
  }
    
  return 0;
  
}
