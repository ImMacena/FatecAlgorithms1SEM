#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool VerifyGrade(float grade) {
  if (grade < 0 || grade > 10) {
    printf("\033[1;31m"); // change color to red
    printf("The grades must be between 0 and 10!\n");
    printf("\033[0m");

    return false;
  }

  return true;
}

int main ()
{
  float grade1, grade2, grade3, grade4, gradeAverage;
  int opt = -1;

  while (opt !=2) {
    if (opt == 1) {
      system("cls");

      grade1:
      printf("Enter the first grade: ");
      scanf("%f", &grade1);

      if (!VerifyGrade(grade1)) {
        goto grade1;
      }

      system("cls");

      grade2:
      printf("Enter the second grade: ");
      scanf("%f", &grade2);

      if (!VerifyGrade(grade2)) {
        goto grade2;
      }

      system("cls");

      grade3:
      printf("Enter the third grade: ");
      scanf("%f", &grade3);

      if (!VerifyGrade(grade3)) {
        goto grade3;
      }

      system("cls");

      grade4:
      printf("Enter the fourth grade: ");
      scanf("%f", &grade4);

      if (!VerifyGrade(grade4)) {
        goto grade4;
      }

      system("cls");

      gradeAverage = (grade1 + grade2 + grade3 + grade4) / 4;

      printf("- Grades sumary -\n");
      printf("\nFirst Grade: %.2f", grade1);
      printf("\nSecond Grade: %.2f", grade2);
      printf("\nThird Grade: %.2f", grade3);
      printf("\nFourth Grade: %.2f\n", grade4);

      if (gradeAverage < 6) {
        printf("\nAverage: %.2f\nStatus: ", gradeAverage);

        printf("\033[1;31m"); // change color to red
        printf("reproved!\n\n");
        printf("\033[0m");

        system("pause");
      } else if (gradeAverage >= 6) {
        printf("\nAverage: %.2f\nStatus: ", gradeAverage);

        printf("\033[1;32m"); // change color to green
        printf("aproved!\n\n");
        printf("\033[0m");

        system("pause");
      }
    }

    system("cls");

    printf("1 - Calculate approvals\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
