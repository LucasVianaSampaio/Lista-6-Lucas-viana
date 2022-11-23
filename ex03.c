#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define MX 50

struct mt
{
  int *pmatriz;
  int qtdelementos;
  int media;
};

int main()
{
  srand(time(NULL));
  struct mt matriz;
  int vetor[TAM];

  matriz.qtdelementos = 0;
  matriz.media = 0;

  for (int i = 0; i < TAM; i++)
  {
    vetor[i] = rand() % MX;
    matriz.qtdelementos++;
    matriz.media += vetor[i];
  }

  for (int i = 0; i < TAM; i++)
  {
    printf("%d\n", vetor[i]);
  }
  puts("-------");

  matriz.pmatriz = &vetor[4];
  matriz.media /= TAM;

  printf("A quantidade de elementos é: %d\n", matriz.qtdelementos);
  printf("O quinto elemento do vetor é: %d\n", *matriz.pmatriz);
  printf("A média dos elementos do vetor é: %.2f", (float)matriz.media);

  return 0;
}