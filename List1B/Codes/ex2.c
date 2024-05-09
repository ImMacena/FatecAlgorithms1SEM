#include <stdio.h>
#include <stdlib.h>

int main()
{
  int opt = 1, n;

  while (opt != 2)
  {
    if (opt == 1) {
      system("cls");

      printf("Enter a number: ");
      scanf("%d", &n);

      system("cls");

      if (n > 0) {
        printf("The number %d is positive.\n", n);

        system("pause");
      } else if (n < 0) {
        printf("The number %d is negative.\n", n);

        system("pause");
      } else if (n == 0) {
        printf("The number %d is zero.\n", n);

        system("pause");
      } else {
        printf("\033[1;31m"); // change color to red
        printf("Error. Enter a valid number!");
        printf("\033[0m");

        system("pause");
      }
    }

    system("cls");

    printf("1 - Enter a new number\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");

    scanf("%d", &opt);
  }

  return 0;
}
