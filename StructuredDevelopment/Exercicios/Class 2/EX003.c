/*
 * Uma escola deseja criar um sistema para cadastrar alunos e verificar se são maiores de idade. Cada aluno tem um nome
 * e uma idade. O nome pode ter no máximo 50 caracteres. Após cadastrar 4 alunos, o sistema deve exibir os nomes e
 *  idades dos alunos maiores de idade (18 anos ou mais).
 * */

/*
 * A school whises to create a system to register its students and verify who are in marjority age. Each student has a
 * name and an age. The name must have up to 50 characters. After registering 4 students, the system should show the
 * names of the students at or above marjority age, here we consider it as 18 years.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  const int MAX_STUDENTS = 4;
  const int MAX_STUDENT_NAME_LENGTH = 50;
  const int MARJORITY_AGE = 18;

  char students[MAX_STUDENTS][MAX_STUDENT_NAME_LENGTH];
  int studentsAge[MAX_STUDENTS];

  for (int i = 0; i < MAX_STUDENTS; i++) {
    printf("Please insert the student name:\n>> ");
    fgets(students[i], MAX_STUDENT_NAME_LENGTH, stdin);

    printf("Please insert the student age:\n>> ");
    scanf("%d", &studentsAge[i]);
    getchar();
  }

  printf("This is ours students that are at or above marjority age.\n");
  for (int i = 0; i < MAX_STUDENTS; i++) {
    if (studentsAge[i] >= MARJORITY_AGE) {
      printf("\t>> %s", students[i]);
    }
  }

  return 0;
}