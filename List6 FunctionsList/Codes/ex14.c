#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 14. Crie a função Média que garanta o recebimento no seu interior de quatro números
// maiores ou iguais a zero e menores ou iguais a 10 que representam as médias de um aluno.

// Calcule a média aritmética e exiba o conceito do aluno baseado na tabela abaixo e o seu nome
// recebido no interior da função main. A quantidade de alunos é definida pelo usuário
// e é no mínimo 3 e no máximo 50 alunos.

// Nota Conceito
// de 0,0 a 4,9 = D
// de 5,0 a 6,9 = C
// de 7,0 a 8,9 = B
// de 9,0 a 10,0 = A

char CalculateAverage(float grade1, float grade2, float grade3, float grade4)
{
  if ((grade1 < 0) || (grade2 < 0) || (grade3 < 0) || (grade4 < 0)) return '0';
  if ((grade1 > 10) || (grade2 > 10) || (grade3 > 10) || (grade4 > 10)) return '0';

  float average = (grade1 + grade2 + grade3 + grade4) / 4;

  if (average <= 4.9) return 'D';
  if (average <= 6.9) return 'C';
  if (average <= 8.9) return 'B';
  if (average <= 10) return 'A';

  return '0';
}

int main()
{
  int opt = 1;

  while (opt != 2)
  {
    if (opt == 1)
    {
      int studentsQuantity = 0;

      system("cls");

      while (studentsQuantity < 3 || studentsQuantity > 50) 
      {
        printf("How many students do you want to calculate the average for?\n");
        printf("Enter: ");
        scanf("%d", &studentsQuantity);

        system("cls");

        if (studentsQuantity < 3 || studentsQuantity > 50)
        {
          printf("\033[1;31m"); // change color to red
          printf("Error: The minimum quantity is 3 and the maximum is 50!\n");
          printf("\033[0m");
        }
      }

      system("cls");

      char students[studentsQuantity][50];
      char concept[studentsQuantity];

      for (int i = 0; i < studentsQuantity; i++)
      {
        float grade1, grade2, grade3, grade4;

        printf("- Fill Students Informations - \n");

        printf("\nStudent name:  ");
        scanf(" %s", &students[i]);

        printf("1 Grade: ");
        scanf("%f", &grade1);

        printf("2 Grade: ");
        scanf("%f", &grade2);

        printf("3 Grade: ");
        scanf("%f", &grade3);

        printf("4 Grade: ");
        scanf("%f", &grade4);

        concept[i] = CalculateAverage(grade1, grade2, grade3, grade4);

        system("cls");
      }

      system("cls");

      printf("- Students Summary - \n");
      printf("\n");

      for (int i = 0; i < studentsQuantity; i++)
      {
        printf("Student: %s - Concept: %c\n", students[i], concept[i]);
      }

      printf("\n");
      system("pause");
    }

    system("cls");

    printf("\n1 - Calculate again\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");

    scanf("%d", &opt);
  }

  return 0;
}
