#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 3 - Escrever um algoritmo que leia três números quaisquer e informe qual é o maior
// e se eles forem todos igual informe ao usuário e solicite novos dados.

int main()
{
  float numbers[3], higherNumber;
  int opt = 0;

  while (opt != 2)
  {
    if (opt == 1)
    {
      system("cls");

      // Pedindo a entrada de dados referentes aos números a serem comparados.
      numberInput:
      printf("Enter the first number: ");
      scanf("%f", &numbers[0]);

      system("cls");

      printf("Enter the second number: ");
      scanf("%f", &numbers[1]);

      system("cls");

      printf("Enter the third number: ");
      scanf("%f", &numbers[2]);

      // Verificando se os números enviados são todos iguais.
      if (numbers[0] == numbers[1] && numbers[0] == numbers[2])
      {
        system("cls");

        printf("Error: all numbers are same, please enter new numbers.\n");

        goto numberInput;
      }

      // Iniciando a comparação dos números, definindo, inicialmente, o primeiro como o maior.
      higherNumber = numbers[0];

      for (int i = 0; i < (sizeof(numbers) / sizeof(numbers[0])); i++)
      {
        if (numbers[i] > higherNumber)
        {
          higherNumber = numbers[i];
        }
      }

      system("cls");

      // Imprimindo o resultando diferenciando a impressão caso o número seja inteiro ou não.
      if (higherNumber == floor(higherNumber))
      {
        printf("The higher number is: %f \n", higherNumber);
      }
      else
      {
        printf("The higher number is: %.2f \n", higherNumber);
      }

      system("pause");
    }

    system("cls");

    printf("1 - Compare numbers\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");

    scanf("%d", &opt);
  }

  return 0;
}
