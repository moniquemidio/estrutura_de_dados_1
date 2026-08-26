#include <stdio.h>

int main() {

  int num;
  
  printf("Digite um numero: ");
  scanf("%d", &num);
  
  if (num > 0) {
    printf("O numero eh positivo.\n");
  }
  
  return 0;

}
