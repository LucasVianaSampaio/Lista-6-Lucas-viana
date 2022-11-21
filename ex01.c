#include <stdio.h>

struct nota {
  int nota1;
  int nota2;
  int media;
};

int main() {
  struct nota aluno;

  printf("Digite a primeira nota do aluno:\n");
  scanf("%d", &aluno.nota1);
  printf("Digite a segunda nota do aluno:\n");
  scanf("%d", &aluno.nota2);

  aluno.media = (aluno.nota1 + aluno.nota2) / 2;

  printf("A média do aluno é: %d", aluno.media);
  return 0;
}