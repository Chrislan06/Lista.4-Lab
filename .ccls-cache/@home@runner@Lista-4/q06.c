#include <stdio.h>

#define TAM 100

void lerstring(char *str1, char *str2) {
  puts("Digite a primeira string");
  scanf("%s", str1);
  puts("Digite a primeira string");
  scanf("%s", str2);
}

void mostrarstring(char *str1, char *str2) {
  puts(str1);
  puts(str2);
}

void copiastring(char *str1, char *str2) {
  for (int i = 0; *(str2+i) != '\0'; i++) {
    *(str1 + i) = *(str2 + i);
  }
}

int main(void) {
  char str1[TAM], str2[TAM];
  lerstring(str1, str2);
  puts("string antes da copia");
  mostrarstring(str1, str2);

  copiastring(str1, str2);
  puts("string depois da copia");
  mostrarstring(str1, str2);
  return 0;
}