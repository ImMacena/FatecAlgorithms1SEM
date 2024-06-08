#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_STUDENTS 50

char names[MAX_STUDENTS][50];
int ages[MAX_STUDENTS];
double media[MAX_STUDENTS];

void Armazena(int index)
{
  bool hasName = false, hasAge = false;

initArmazena:

  system("cls");

  printf("=== Student %d ===\n", index + 1);

  if (!hasName)
  {
    printf("\nEnter the student's name: ");
    scanf("%49s", names[index]);

    hasName = true;

    goto initArmazena;
  }
  else
  {
    printf("\nStudent's name: %s.\n", names[index]);
  }

  if (!hasAge)
  {
    printf("Enter the student's age: ");
    scanf("%d", &ages[index]);

    hasAge = true;

    goto initArmazena;
  }
  else
  {
    printf("Student's age: %d.\n", ages[index]);

    printf("\n");
    system("pause");
  }
}

void Media(int index)
{
  double grades[4] = {0, 0, 0, 0};
  int opt = 0;

initMedia:
  for (int i = 0; i <= 4; i++)
  {
    opt = 0;

    system("cls");

    printf(" === Student Informations ===\n");

    printf("\nName: %s.\n", names[index]);
    printf("Age: %d.\n", ages[index]);
    printf("Grades: [ %.2f ] [ %.2f ] [ %.2f ] [ %.2f ]\n", grades[0], grades[1], grades[2], grades[3]);

    if (i < 4)
    {
      double gradeInput = -1;

      printf("\nEnter the %do grade: ", i + 1);

      while (gradeInput < 0 || gradeInput > 10)
      {
        scanf("%lf", &gradeInput);
      }

      grades[i] = gradeInput;
    }
  }

  printf("\n1 - Edit \n2 - Continue \nOption: ");

  while (!(opt == 1 || opt == 2))
  {
    scanf("%d", &opt);
    if (opt == 1)
    {
      goto initMedia;
    }
  }

  media[index] = ((grades[0] + grades[1] + grades[2] + grades[3]) / 4);
}

void ExibaAlunosMaiorMedia(int studentsQnt, double highestAvg)
{
  if (highestAvg == 0)
  {
    printf("All averages are 0.\n");
  }
  else
  {
    int index = 0;

    printf("Student(s) with the highest average (%.2f):\n", highestAvg);

    for (int i = 0; i < studentsQnt; i++)
    {
      if (media[index] == highestAvg)
      {
        printf("- %s\n", names[index]);
      }

      index++;
    }
  }
}

void MaiorMedia(int index)
{
  double highestAvg = 0;

  for (int i = 0; i < index; i++)
  {
    if (media[i] > highestAvg)
    {
      highestAvg = media[i];
    }
  }

  ExibaAlunosMaiorMedia(index, highestAvg);
}

int main()
{
  int K = 0;

  while (K < 5 || K > 50)
  {
    system("cls");
    printf("Enter the studens quantity (5 < ? < 50): ");
    scanf("%d", &K);
  }

  for (int i = 0; i < K; i++)
  {
    Armazena(i);
  }

  system("cls");

  for (int i = 0; i < K; i++)
  {
    Media(i);
  }

  system("cls");

  MaiorMedia(K);

  printf("\n=== Students Summary ===\n");

  for (int i = 0; i < K; i++)
  {
    char concept;

    if (media[i] < 4.9)
      concept = 'D';
    else if (media[i] < 6.9)
      concept = 'C';
    else if (media[i] < 8.9)
      concept = 'B';
    else
      concept = 'A';

    printf("\n| Name: %s.\n| Age: %d.\n| Average: %.2f - Concept: %c\n", names[i], ages[i], media[i], concept);
  }
}