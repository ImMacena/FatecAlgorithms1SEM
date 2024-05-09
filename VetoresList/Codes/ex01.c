#include <stdio.h>
#include <stdlib.h>

#define MAX 6

// 1. Leia um vetor de 6 posições. 
// Exiba a quantidade de valores pares que estão armazenados no vetor. 
// Exiba também a posição e o respectivo par. 
// Informe ao usuário caso não tenha sido digitado nenhum número par no vetor.

int CountEven(int *numbers) // Função para contar a quantidade de números pares
{
  int count = 0;

  for(int i = 0; i < MAX; i++)
  {
    if (numbers[i] % 2 == 0) count += 1;
  }

  return count;
}

void FindEven(int *numbers) // Função encontrar os números pares e suas posições
{
  int compare;

  for(int i = 0; i < MAX; i++)
  {
    compare = numbers[i];

    if (compare % 2 == 0)
    {
      printf("Position: %d - Value: %d\n", i, compare);
    }
  }
}

int main()
{
  int opt = 1, evenQuantity;
  int numbers[MAX];

  while(opt != 2) 
  {
    if (opt == 1)
    {
      for(int i = 0; i < MAX; i++)
      {
        system("cls");
        
        printf("Enter the %d number: ", i+1);
        scanf("%d", &numbers[i]);
      }

      system("cls");

      evenQuantity = CountEven(numbers);

      printf("--- Results --- \n\n");

      if (evenQuantity == 0) {
        printf("No number entered is even!\n");

        printf("\n");
        system("pause");
      }

      if (evenQuantity != 0) {
        printf("Number of even values: %d.\n\n", evenQuantity);

        FindEven(numbers);

        printf("\n");
        system("pause");
      }
    }

    system("cls");

    printf("1 - Try again\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");

    scanf("%d", &opt);
  }

  return 0;
}
