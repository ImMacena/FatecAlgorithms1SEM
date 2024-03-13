#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  int n1, n2, opt = -1;

  while (opt != 2) {
    if (opt == 1) {
      bool multiple = false;

      system("cls");

      printf("Enter the first number: ");
      scanf("%d", &n1);

      printf("Enter the second number: ");
      scanf("%d", &n2);

      if (n1 > n2 && n1 % n2 == 0) {
        multiple = true;
      }

      if (multiple) {
        printf("\033[1;32m"); // change color to green
        printf("\nThe number %d is a multiple of %d.\n", n1, n2);
        printf("\033[0m");
      } else {
        printf("\033[1;31m"); // change color to red
        printf("\nThe number %d is not a multiple of %d.\n", n1, n2);
        printf("\033[0m");
      }

      system("pause");
    }

    system("cls");
    
    printf("1 - Check multiples\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
