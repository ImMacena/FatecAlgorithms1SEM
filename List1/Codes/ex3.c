#include <stdio.h>
#include <stdlib.h>

float ApplyAdjustment(float percentage, float expenses) {
  return expenses + (expenses * percentage);
}

int main()
{
  float expenses, adjustmentPercentage = 0.1; // 10% de reajuste
  int opt = -1;

  while(opt != 2) {
    if (opt == 1) {
      system("cls");

      printf("Enter your monthly expenses total: $");
      scanf("%f", &expenses);
      printf("Readjusted price: $%.2f\n", ApplyAdjustment(adjustmentPercentage, expenses));

      system("pause");
    }

    system("cls");
    
    printf("1 - Calculate adjusted expenses\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
