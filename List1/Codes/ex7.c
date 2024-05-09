#include <stdio.h>
#include <stdlib.h>

int main()
{
  float factoryPrice, distributorTaxes, distributorAdd, generalTaxes, generalAdd, finalPrice;
  int opt = -1;

  while (opt != 2) {
    if (opt == 1) {
      system("cls");

      printf("Enter the factory price of the vehicle: $");
      scanf("%f", &factoryPrice);

      printf("Enter the distributor taxes in percentage: ");
      scanf("%f", &distributorTaxes);

      printf("Enter the additional taxes in percentage: ");
      scanf("%f", &generalTaxes);

      distributorAdd = (factoryPrice / 100) * distributorTaxes;
      
      generalAdd = (factoryPrice / 100) * generalTaxes;
      
      finalPrice = factoryPrice + distributorAdd + generalAdd;

      system("cls");

      printf("- Purchase sumary -\n");
      printf("\nFactory price of the vehicle: $%.2f", factoryPrice);
      printf("\nDistributor taxes: %%%.2f ($%.2f)", distributorTaxes, distributorAdd);
      printf("\nAdditional taxes: %%%.2f ($%.2f)\n", generalTaxes, generalAdd);
      printf("\nFinal price to client: $%.2f\n\n", finalPrice);

      system("pause");
    }

    system("cls");

    printf("1 - Calculate the vehicle price\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
