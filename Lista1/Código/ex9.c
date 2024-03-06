#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float number1, number2, number3, number4, squareSum;
  int opt = -1;

  while(opt != 2) {
    if (opt == 1) {
      system("cls");

      number1:
      printf("Enter first number: ");
      scanf("%f", &number1);
      
      if (number1 < 10 || number1 > 25) {
        printf("\033[1;31m"); // change color to red
        printf("First number must be between 10 and 25!\n");
        printf("\033[0m");

        goto number1;
      }

      system("cls");

      number2:
      printf("Enter second number: ");
      scanf("%f", &number2);
      
      if (number2 < 0) {
        printf("\033[1;31m"); // change color to red
        printf("Second number must be greaten than 0!\n");
        printf("\033[0m");

        goto number2;
      }

      system("cls");

      number3:
      printf("Enter third number: ");
      scanf("%f", &number3);
      
      if (!(number3 == number1 + number2)) {
        printf("\033[1;31m"); // change color to red
        printf("Third number must be the sum of the first number and second number!\n");
        printf("\033[0m");

        goto number3;
      }

      system("cls");

      number4:
      printf("Enter fourth number: ");
      scanf("%f", &number4);
      
      if (!(number4 == (number1 * number2 * number3))) {
        printf("\033[1;31m"); // change color to red
        printf("Fourth number must be the product of the first number, second number and third number!\n");
        printf("\033[0m");

        goto number4;
      }

      squareSum = (pow(number1, 2) + pow(number2, 2) + pow(number3, 2) + pow(number4, 2));

      if (squareSum < 50000) {
        printf("\033[1;31m"); // change color to red
        printf("The data may not be representative, enter the numbers again.\n\n");
        printf("\033[0m");

        system("pause");
      }

      system("cls");

      printf("The sum of the squares of numbers is: %.2f\n\n", squareSum);
      
      system("pause");
    }

    system("cls");

    printf("1 - Calculate sum of the squares\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
