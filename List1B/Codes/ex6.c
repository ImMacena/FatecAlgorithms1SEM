#include <stdio.h>
#include <stdlib.h>

int main()
{
  float n1, n2;
  int opt = 1;

  while (opt != 2) {
    if (opt == 1) {
      system("cls");

      printf("Enter the fisrt number: ");
      scanf("%f", &n1);

      printf("Enter the second number: ");
      scanf("%f", &n2);

      system("cls");

      if (n1 > n2) {
        printf("The number %.2f is greater than %.2f.\n", n1, n2);
      } else if (n2 > n1) {
        printf("The number %.2f is less than %.2f.\n", n1, n2);
      } else if (n1 == n2) {
        printf("The number %.2f is equal to %.2f.\n", n1, n2);
      } else {
        printf("\033[1;31m"); // change color to red
        printf("Error. Enter a valid number!");
        printf("\033[0m");
      }

      system("pause");
    }

    system("cls");

    printf("1 - Try again\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}