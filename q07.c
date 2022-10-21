#include <stdio.h>

#define TAM 100

void lerstring(char *str1, char *str2) {
  puts("Digite a primeira string");
  scanf("%s", str1);
  puts("Digite a primeira string");
  scanf("%s", str2);
}

void mostrarstring(char *str1, char *str2, char *concat) {
  puts(str1);
  puts(str2);
  puts(concat);
}

void concatenar(char *str1, char *str2, char *concat) {
  int j = 0;
  for (int i = 0; *(str1 + i) != '\0'; i++) {
    *(concat + j) = *(str1 + i);
    j++;
  }
  for (int i = 0; *(str2 + i) != '\0'; i++) {
    *(concat + j) = *(str2 + i);
    j++;
  }
  *(concat + j) = '\0';
}

int main(void) {

  char str1[TAM], str2[TAM], concat[TAM];

  lerstring(str1, str2);
  puts("string antes da concatenação");
  mostrarstring(str1, str2, "");

  concatenar(str1, str2, concat);

  puts("string depois da concatenação");
  mostrarstring(str1, str2, concat);
  return 0;
}