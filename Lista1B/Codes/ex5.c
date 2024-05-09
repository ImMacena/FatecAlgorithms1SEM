#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  int n1, n2, opt = 1;

  while (opt != 2) {
    if (opt == 1) {
      bool oddN1 = false;
      bool oddN2 = false;

      system("cls");

      printf("Enter the first number: ");
      scanf("%d", &n1);

      printf("Enter the second number: ");
      scanf("%d", &n2);

      if (n1 % 2 != 0) {
        oddN1 = true;
      }

       if (n2 % 2 != 0) {
        oddN2 = true;
      }

      system("cls");

      printf("The number %d is ", n1);
      if (oddN1) {
        printf("odd.\n");
      } else {
        printf("even.\n");
      }

      if (n1 != n2) {
        printf("The number %d is ", n2);
        if (oddN2) {
          printf("odd.\n");
        } else {
          printf("even.\n");
        }
      }

      system("pause");
    }

    system("cls");
    
    printf("1 - Check if is even or odd\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
