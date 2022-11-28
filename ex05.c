#include <stdio.h>

#define TAM 12

struct s_professor
{
  char nome_professor[TAM];
};

struct s_disciplina
{
  char nome_disciplina[TAM];
  float horario;
  struct s_professor professor;
};

int main()
{
  struct s_disciplina disciplina;

  puts("Digite o nome da disciplina desejada:\n");
  scanf("%s", disciplina.nome_disciplina);
  puts("Digite o nome do professor da disciplina:\n");
  scanf("%s", disciplina.professor.nome_professor);
  puts("Digite o horário da disciplina:\n");
  scanf("%f", &disciplina.horario);

  puts("--------------");

  printf("A sua disciplina é: %s\n", disciplina.nome_disciplina);

  printf("O horário é %.2f:\n", disciplina.horario);

  printf("O nome do professor é: %s\n", disciplina.professor.nome_professor);
  return 0;
}