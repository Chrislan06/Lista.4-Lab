#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MAX 11

void pegarmenor(int *numero, int qtd, int *menor) {
  *menor = *numero;
  for (int i = 1; i < qtd; i++) {
    *menor = (*menor > *(numero + i)) ? *(numero + i) : *menor;
  }
}

void pegarmaior(int *numero, int qtd, int *maior) {
  *maior = *numero;
  for (int i = 1; i < qtd; i++) {
    *maior = (*maior < *(numero + i)) ? *(numero + i) : *maior;
  }
}

void preenchervetor(int *pn, int qtd) {
  srand(time(NULL));
  for (int i = 0; i < qtd; i++) {
    *(pn + i) = rand() % MAX;
  }
}

void mostrarvetor(int *pn, int qtd) {
  for (int i = 0; i < qtd; i++) {
    printf("Valor do n[%d] = %d", i, *(pn + i));
    puts("");
  }
}

int main(void) {
  int n[TAM], menor, maior;
  preenchervetor(n, TAM);
  mostrarvetor(n, TAM);
  pegarmenor(n, TAM, &menor);
  pegarmaior(n, TAM, &maior);
  printf("Menor valor do vetor: %d\nMaior valor do vetor: %d", menor, maior);
  return 0;
}