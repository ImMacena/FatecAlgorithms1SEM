#include <stdio.h>
#include <stdlib.h>

int main() 
{
  float hourlyRate, grossSalary, discount, inssDiscount, netSalary;
  int opt = -1, numClasses;

  while (opt != 2) {
    if (opt == 1) {
      system("cls");

      printf("Enter the hourly rate: $");
      scanf("%f", &hourlyRate);

      printf("Enter the number of classes taught: ");
      scanf("%d", &numClasses);

      printf("Enter the INSS discount in percentage: ");
      scanf("%f", &inssDiscount);

      grossSalary = hourlyRate * numClasses;

      discount = (inssDiscount / 100) * grossSalary;

      netSalary = grossSalary - discount;

      system("cls");

      printf("- Monthly income summary -\n");
      printf("\nGross Salary: $%.2f", grossSalary);
      printf("\nINSS Discount: $%.2f", discount);
      printf("\nNet Salary: $%.2f\n\n", netSalary);

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
