#include <stdio.h>
#include <stdlib.h>

int main()
{
  float unityPrice;
  int opt = 1, productCode, quantity;

  while(opt != 2) {
    if (opt == 1) {
      system("cls");

      printf("Enter the product code: ");
      scanf("%d", &productCode);

      system("cls");

      printf("Enter the quantity purchased: ");
      scanf("%d", &quantity);

      switch (productCode)
      {
      case 1001:
        unityPrice = 5.32;
        break;
      case 1324:
        unityPrice = 6.45;
        break;
      case 6548:
        unityPrice = 2.37;
        break;
      case 987:
        unityPrice = 5.32;
        break;
      case 7623:
        unityPrice = 6.45;
        break;
      default:
        unityPrice = 0;
        break;
      }

      system("cls");

      printf("Total amount: %.2f\n", (unityPrice * quantity));

      system("pause");
    }

    system("cls");
    
    printf("1 - Calculate again\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}
