#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// 4. Receba três números que representam os lados de um triângulo e garantam a existência de um triângulo.
// Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.

// Observações:
// a. Garantir que cada lado é menor que a soma dos outros dois lados.
// b. O triângulo é equilátero quando todos os lados são iguais.
// c. O triângulo é isóscele quando apenas dois lados são iguais.
// d. O triângulo é escaleno quando todos os lados são diferentes.

int main()
{
  float sides[3];
  char triangleType[13];
  bool isTriangle = true;
  int opt = 0;

  while (opt != 2)
  {
    if (opt == 1)
    {
      system("cls");

      // Pedindo a entrada de dados referentes aos lados do triângulo.
      printf("Enter the fisrt side of triangle: ");
      scanf("%f", &sides[0]);

      system("cls");

      printf("Enter the second side of triangle: ");
      scanf("%f", &sides[1]);

      system("cls");

      printf("Enter the third side of triangle: ");
      scanf("%f", &sides[2]);

      system("cls");

      // Verificando se as medidas fornecidas podem ou não formar um triângulo.
      if (sides[0] > sides[1] + sides[2])
      {
        isTriangle = false;
        printf("Error: the fisrt side must be less than the sum of the other sides!\n");
      }

      if (sides[1] > sides[0] + sides[2])
      {
        isTriangle = false;
        printf("Error: the second side must be less than the sum of the other sides!\n");
      }

      if (sides[2] > sides[0] + sides[1])
      {
        isTriangle = false;
        printf("Error: the third side must be less than the sum of the other sides!\n");
      }

      // Verificando e imprimindo a classificação do triangulo.
      if (isTriangle)
      {
        if (sides[0] == sides[1] && sides[0] == sides[2])
        {
          strcpy(triangleType, "equilateral");
        } else if (sides[0] == sides[1] || sides[0] == sides[2])
        {
          strcpy(triangleType, "isosceles");
        } else if (sides[0] != sides[1] && sides[0] != sides[2]) {
          strcpy(triangleType, "scalene");
        } else {
          strcpy(triangleType, "[not found!]");
        }

        printf("This is a %s triangle.\n", triangleType);
      }

      system("pause");
    }

    system("cls");

    printf("1 - Analyze triangles\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");

    scanf("%d", &opt);
  }

  return 0;
}
