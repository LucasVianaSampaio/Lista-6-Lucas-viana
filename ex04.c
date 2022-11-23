#include <stdio.h>

#define TAM 3

struct nota
{
  float nota1;
  float nota2;
  float media;
};

int main()
{
  struct nota aluno[TAM];

  for (int i = 1; i <= TAM; i++)
  {
    printf("Digite a primeira nota do aluno %d:\n", i);
    scanf("%f", &aluno[i].nota1);
    printf("Digite a segunda nota do aluno %d:\n", i);
    scanf("%f", &aluno[i].nota2);
    aluno[i].media = (aluno[i].nota1 + aluno[i].nota2) / 2;
  }

  for (int i = 1; i <= TAM; i++)
  {
    printf("primeira nota do aluno %d é: %.2f\n", i, aluno[i].nota1);
    printf("Segunda nota do aluno %d é: %.2f\n", i, aluno[i].nota2);
    printf("A média do aluno %d é: %.2f\n", i, aluno[i].media);
    puts("--------");
  }

  return 0;

  // DEPOIS TESTAR COM FUNÇÃO
}