#include <stdio.h>

void somar(int *a, int *b, int *soma) {
  puts("Digite dois números");
  scanf("%d%d", a, b);
  *soma = *a + *b;
  printf("A soma de %d + %d: %d\n", *a,*b,*soma);
}

int main(void) {
  int a, b, soma;
  somar(&a, &b, &soma);
  printf("Endereço da soma: %p\nEndereço de a: %p\nEndereço de b: %p", &soma,&a, &b);
  return 0;
}