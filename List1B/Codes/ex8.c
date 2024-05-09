#include <stdio.h>
#include <stdlib.h>

float ApplyDiscount (float productPrice)
{
	return (productPrice - (productPrice * 0.09));
}

float ApplyReadjustment (float productPrice)
{
	return (productPrice + (productPrice * 0.1));
}

int main()
{
  float productPrice;
  int opt = 1;

  while (opt != 2) {
    if (opt == 1) {
      system("cls");

      printf("Enter the price of the product: $");
      scanf("%f", &productPrice);

			system("cls");

			printf("Original price of the product: %.2f\n", productPrice);
			printf("Discounted price: %.2f\n", ApplyDiscount(productPrice));
			printf("Readjusted price: %.2f\n", ApplyReadjustment(productPrice));

			system("pause");
    }

    system("cls");

    printf("1 - Try again\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
