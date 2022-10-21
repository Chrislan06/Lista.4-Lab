#include <stdio.h>

#define TAM 100

void lerstring(char *str1) {
  puts("Digite uma string");
  scanf("%s", str1);
}

char *mostrarstring(char *str1) { return (str1); }

char procurarcaractere(char *str, int n) {
  char c;
  c = *(str + n);
  return c;
}

int tamanho(char *str) {
  int tam = 0;
  for (int i = 0; *(str + i) !='\0'; i++) {
    tam++;
  }
  return tam;
}

int main(void) {
  char str1[TAM], c;
  int n;
  lerstring(str1);
  puts("a string digitada é");
  printf("=> %s\n", mostrarstring(str1));
  do{
  puts("Digite o a posição do caractere que deseja buscar nessa string");
  scanf("%d", &n);
  if (n>tamanho(str1)) {
    printf("tamanho da variavel excedido\n\n");
  } else {
    c = procurarcaractere(str1, n - 1);
    printf("Caractere da posição %d é %c\n", n, c);
  }
    }while(n>tamanho(str1));
  return 0;
}