#include <stdio.h>
#include <stdlib.h>

float ApplyDiscount(float percentage, float originalPrice){
  return originalPrice - (originalPrice * percentage);
}

int main()
{
  float originalPrice, discountPercentage = 0.09; // 9% de desconto
  int opt = -1;

  while(opt != 2) {
    if (opt == 1) {
      system("cls");

      printf("Enter the original price: $");
      scanf("%f", &originalPrice);
      printf("Discounted price: $%.2f\n", ApplyDiscount(discountPercentage, originalPrice));

      system("pause");
    }

    system("cls");
    
    printf("1 - Calculate discount\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
