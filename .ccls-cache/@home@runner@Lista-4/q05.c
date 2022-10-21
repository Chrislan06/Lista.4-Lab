#include <stdio.h>
#include <string.h>
#define MAX 100

void lervetor(char *str) {
  puts("Digite uma Palavra (até 99 letras(sem espaço))");
  scanf("%s", str);
}

void verificartamanho(char *str, int *tamanho) {
  for (int i = 0; *(str + i) != '\0'; i++) {
    *tamanho = *tamanho + 1;
  }
}

int main(void) {
  char str[MAX];
  int tamanho = 0;
  lervetor(str);
  verificartamanho(str, &tamanho);
  printf("String = %s\nO tamanho da String é = %d", str, tamanho);
  return 0;
}