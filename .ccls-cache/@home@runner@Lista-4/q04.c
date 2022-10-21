#include <stdio.h>
#define TAM 5

void lervetor(int *v) {
  for (int i = 0; i < TAM; i++) {
    puts("digite um numero");
    scanf("%d", (v + i));
  }
}

void imprimirvetor(int *v) {
  for (int i=0; i < TAM; i++) {
    printf("valor de v[%d] = %d\n",i,*(v+i));
    printf("Endereço de v[%d] = %p\n",i,v+i);
  }
}

int main(void) {
  int v[5];
  char str[6];
  float m[5];
  // vetor char(String)
  printf("Digite uma string(5 letras)\n");
  fgets(str, 6, stdin);
  for (int i = 0; i < 5; i++) {
    printf("caractere de str[%d] = %c\n", i, str[i]);
    printf("Endereço de str[%d]: %p\n", i, &str[i]);
  }
  // vetor float
  for (int i = 0; i < 5; i++) {
    puts("Digite um numero");
    scanf("%f", &m[i]);
  }
  for (int i = 0; i < 5; i++) {
    printf("Valor de m[%d] = %f\n", i, m[i]);
    printf("Endereço de m[%d]: %p\n", i, &m[i]);
  }
  //vetor int
  lervetor(v);
  imprimirvetor(v);
  return 0;
}