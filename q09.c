#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MAX 101

void preenchervetor(int *v, int qtd) {
  srand(time(NULL));
  for (int i = 0; i < qtd; i++) {
    *(v + i) = rand() % MAX;
  }
}

void mostrarvetor(int *v, int qtd) {
  for (int i = 0; i < qtd; i++) {
    printf("%3d ", *(v + i));
  }
  printf("\n");
}

void ordenarvetor(int *v, int qtd) {
  int aux;
  for (int k = qtd - 1; k > 0; k--) {
    for (int i = 0; i < k; i++) {
      if (*(v + i) > *(v + i + 1)) {
        aux=*(v+i);
        *(v+i)=*(v+i+1);
        *(v+i+1)=aux;
      }
    }
  }
}

int main(void) {
  int v[TAM];
  puts("vetor sem ordenação");
  preenchervetor(v,TAM);
  mostrarvetor(v, TAM);
  ordenarvetor(v,TAM);
  puts("vetor com ordenação");
  mostrarvetor(v,TAM);
  return 0;
}