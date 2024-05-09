#include <stdio.h>
#include <stdlib.h>

float UpdatePrice(float productPrice) {
  float percentage;

  if (productPrice < 100) {
    percentage = 0.1;
  } else if (productPrice >= 100) {
    percentage = 0.2;
  }

  return productPrice + (productPrice * percentage);
}

int main()
{
  float productPrice;
  int opt = -1;

  while(opt != 2) {
    if (opt == 1) {
      system("cls");

      printf("Enter the current price of the product: $");
      scanf("%f", &productPrice);

      if (productPrice > 0 ) {
        printf("Readjusted price: $%.2f\n", UpdatePrice(productPrice));
        system("pause");
      }
    }

    system("cls");
    
    printf("1 - Calculate price increase \n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
