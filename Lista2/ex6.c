#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 6.Cada degrau de uma escada tem X de altura.
// Faça um programa que receba essa altura e a altura que o usuário deseja subindo a escada.
// Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo,
// sem se preocupar com a altura do usuário.

int main()
{
  float totalHeight, stepHeight;
  int opt = 1, stepQuantity;

  while (opt != 2)
  {
    if (opt == 1)
    {
      totalHeight = 0;
      stepHeight = 0;

      system("cls");

      while (totalHeight <= 0)
      {
        printf("Enter the total height you want to climb in meters: ");
        scanf("%f", &totalHeight);
      }

      system("cls");

      while (stepHeight <= 0)
      {
        printf("Enter the step height in meters: ");
        scanf("%f", &stepHeight);
      }

      system("cls");
      
      stepQuantity = totalHeight / stepHeight;

      if (fmod(totalHeight, stepHeight) > 0) stepQuantity++;

      printf("You will have to climb %d steps.\n", stepQuantity);
      system("pause");
    }
    
    system("cls");

    printf("1 - Calculate steps to climb\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}