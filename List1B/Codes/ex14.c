#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main()
{
  // Um vendedor necessita de um algoritmo que calcula o preço total devido por um cliente.
  // o algoritmo deve receber o código do produto e a quantidade comprada.
  // Após, calcular o preço total.

  // Código 1001 PU: 5.32
  // Código 1324 PU: 6.45
  // Código 6548 PU: 2.37
  // Código 0987 PU: 5.32
  // Código 7623 PU: 6.45

  float totalAmount = 0;
  int quantity, productQuantity = 0, opt = 1;
  char code[6];
  char codes[5][5] = {"1001", "1324", "6548", "0987", "7623"};
  char prices[5][5] = {"5.32", "6.45", "2.37", "5.32", "6.45"};

  while (opt != 2)
  {
    if (opt == 1)
    {
      bool hasCode = false;
      int priceIndex;

      system("cls");

    codeInput:
      printf("Enter the product code: ");
      scanf(" %s", &code);

      for (int i = 0; i < sizeof(codes) / sizeof(codes[0]); i++)
      {
        if (strcmp(codes[i], code) == 0)
        {
          priceIndex = i;

          hasCode = true;

          break;
        }
      }

      if (!hasCode)
      {
        system("cls");

        printf("Error: this code is not available! Try again.\n");

        goto codeInput;
      }

      system("cls");

    quantityInput:
      printf("Enter the quantity: ");
      scanf("%d", &quantity);

      if (quantity == 0)
      {
        goto quantityInput;
      }

      totalAmount += (atof(prices[priceIndex]) * quantity);
      productQuantity += quantity;
    }

    system("cls");

    printf(" - Purchase sumary -\n");

    printf("\nProducts quantity: %d", productQuantity);
    printf("\nTotal amount: $%.2f \n", totalAmount);

    printf("\n1 - Add product\n");
    printf("2 - Exit the program\n");

    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
