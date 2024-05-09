#include <stdio.h>
#include <stdlib.h>

float UpdateSalary(float currentSalary) {
  float percentage;

  if (currentSalary < 800) {
    percentage = 0.15;
  } else if (currentSalary >= 800 && currentSalary <= 1000) {
    percentage = 0.1;
  } else if (currentSalary > 1000) {
    percentage = 0.05;
  }

  return currentSalary + (currentSalary * percentage);
}

int main()
{
  float currentSalary, newSalary;
  int opt = -1;

  while(opt != 2) {
    if (opt == 1) {
      system("cls");

      printf("Enter the current price of the product: $");
      scanf("%f", &currentSalary);

      if (currentSalary > 0 ) {
        system("cls");

        newSalary = UpdateSalary(currentSalary);

        printf("- Salary sumary -\n");
        printf("Old salary: $%.2f.\n", currentSalary);
        printf("Readjusted salary: $%.2f.\n", newSalary);

        system("pause");
      }
    }

    system("cls");
    
    printf("1 - Calculate salary readjustment \n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
