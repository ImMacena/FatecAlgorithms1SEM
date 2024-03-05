#include <stdio.h>
#include <stdlib.h>

int AddStockQuantity(int currentValue) {
  int quantity = -1;

  while(quantity < 0) {
    printf("Enter the quantity you want to add: ");
    scanf("%d", &quantity);
  }

  return (currentValue + quantity);
}

int RemoveStockQuantity(int currentValue) {
  int quantity = -1;

  while(quantity < 0 || quantity > currentValue) {
    printf("Enter the quantity you want to remove: ");
    scanf("%d", &quantity);
  }

  return (currentValue - quantity);
}

int main()
{
  int currentValue, opt = 0;

  printf("Enter the current stock quantity: ");
  scanf("%d", &currentValue);

  while(opt != 3) {
    switch (opt)
    {
    case 1:
      currentValue = AddStockQuantity(currentValue);
      break;
    case 2:
      currentValue = RemoveStockQuantity(currentValue);
      break;
    }

    system("cls");

    printf("\n- Current stock quantity: %d -\n", currentValue);
    printf("1 - Add value to stock\n");
    printf("2 - Remove value to stock\n");
    printf("3 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
