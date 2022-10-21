#include <stdio.h>

void troca(int *a, int *b) {
  int aux;
  puts("valores antes da troca");
  printf("a = %d b = %d", *a, *b);
  aux = *a;
  *a = *b;
  *b = aux;
  puts("");
  puts("valores depois da troca");
  printf("a = %d b = %d", *a, *b);
}

void ler(int *a, int *b) {
  puts("digite um valor para A");
  scanf("%d", a);
  puts("digite um valor para B");
  scanf("%d", b);
}

int main(void) {
  int a, b;
  ler(&a, &b);
  troca(&a, &b);
  return 0;
}