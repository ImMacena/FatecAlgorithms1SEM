#include <stdio.h>
#include <stdlib.h>

// 7. O IMC – Índice de Massa Corporal é um critério da Organização Mundial de Saúde para
// dar uma indicação sobre a condição de peso de uma pessoa adulta.

// A fórmula é IMC = peso / (altura)².

// Elabore um algoritmo que leia o peso e a altura de um adulto e mostre sua condição de acordo com as condições abaixo:

// -- Resultado -> Situação --
// Abaixo de 17 -> muito abaixo do peso.
// Entre 17 e 18,49 -> abaixo do peso.
// Entre 18,5 e 24,99 -> peso normal.
// Entre 25 e 29,99 -> acima do peso.
// Entre 30 e 34,99 -> obesidade I.
// Entre 35 e 39,99 -> obesidade II (severa).
// Acima de 40 -> obesidade III (mórbida).

float CalculateIMC(float weight, float height)
{
  return (weight / (height * height));
}

void PrintIMCStatus(float imc)
{
  printf("IMC: %.2f.\n", imc);
  printf("Status: ");

  if (imc < 17)
  {
    printf("very underweight.\n");
  }
  else if (imc < 18.49)
  {
    printf("underweight.\n");
  }
  else if (imc < 24.99)
  {
    printf("normal weight.\n");
  }
  else if (imc < 29.99)
  {
    printf("overweight.\n");
  }
  else if (imc < 34.99)
  {
    printf("obesity I.\n");
  }
  else if (imc < 39.99)
  {
    printf("obesity II (severe).\n");
  }
  else
  {
    printf("obesity III (morbid).\n");
  }
}

int main()
{
  float weight, height, imc;
  int opt = 1;

  while (opt != 2)
  {
    if (opt == 1)
    {
      system("cls");

      printf("Enter your weight: ");
      scanf("%f", &weight);

      system("cls");

      printf("Enter your height: ");
      scanf("%f", &height);

      system("cls");

      imc = CalculateIMC(weight, height);

      PrintIMCStatus(imc);

      system("pause");
    }

    system("cls");

    printf("1 - Calculate IMC\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}