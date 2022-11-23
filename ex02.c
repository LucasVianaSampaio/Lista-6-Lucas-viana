#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

struct UF
{
  char peca[TAM];
  int identifica;
  float preco;
  int numpedido;
};

int main()
{
  srand(time(NULL));

  struct UF estoque;

  printf("Digite a peça que você deseja:\n");
  scanf("%s", &estoque.peca[TAM]);

  estoque.identifica = rand() % 100;
  printf("O número da peça é: %d\n", estoque.identifica);

  estoque.preco = rand() % 1000;
  printf("O preço da peça em questão é: RS%.2f\n", estoque.preco);

  estoque.numpedido = rand() % 100;
  printf("O número do seu pedido é: %d\n", estoque.numpedido);

  return 0;
}