#include <stdio.h>

int main() {

  int num;

  printf("Digite um numero inteiro: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("Numero par.\n");
  } else {
    printf("Numero impar.\n");
  }
  
  return 0;

}
