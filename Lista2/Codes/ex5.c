#include <stdio.h>
#include <stdlib.h>

// 5. Faça um programa que receba o número de horas trabalhadas e o valor do salário mínimo.
// Calcule e mostre o salário a receber seguindo as regras abaixo:

// a) a hora trabalhada vale a metade do salário mínimo;
// b) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
// c) o imposto equivale a 3% do salário bruto;
// d) o salário a receber equivale ao salário bruto menos o imposto.

// Função que calcula e retorna o valor do salário líquido.
float CalculateSalary (float basicSalary, int workedHours)
{
  float  taxPercentage = 0.03, grossSalary;

  grossSalary = (basicSalary / 2) * workedHours; 

  return grossSalary - (grossSalary * taxPercentage);
}

int main()
{
  float basicSalary, netSalary;
  int opt = 1, workedHours;

  while (opt != 2)
  {
    if (opt == 1)
    {
      basicSalary = 0;
      workedHours = 0;

      system("cls");

      while (basicSalary <= 0)
      {
        printf("Enter the basic salary amount: ");
        scanf("%f", &basicSalary);
      }

      system("cls");

      while (workedHours <= 0)
      {
        printf("Enter the number of hours worked: ");
        scanf("%d", &workedHours);
      }

      system("cls");

      netSalary = CalculateSalary(basicSalary, workedHours);

      printf("The net salary to be recived is: $%.2f.\n", netSalary);
      
      system("pause");
    }

    system("cls");

    printf("1 - Calculate salary\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
