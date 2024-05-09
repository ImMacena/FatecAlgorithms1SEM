#include <stdio.h>
#include <stdlib.h>

int main()
{
  int opt = 1, n;

  while (opt != 2) {
    if (opt == 1) {
      system("cls");

      printf("Enter a number: ");
      scanf("%d", &n);

      system("cls");

      printf("The sucessor of number %d is %d\n", n, (n + 1));
      system("pause");
    }

    system("cls");

    printf("1 - Enter a new number\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");

    scanf("%d", &opt);
  }

  return 0;
}
