#include <stdio.h>
#include <stdlib.h>

float CalculateWeight(int sex, float height) {
  if (sex == 1) {
    return ((72.7 * height) - 58);
  } else if (sex == 2) {
    return ((62.1 * height) - 44.7);
  } else {
    return 0;
  }
}

int main()
{
  float height, weight;
  int opt = 1, sex;

  while (opt != 2) {
    if (opt == 1) {
      system("cls");

      while (sex != 1 && sex != 2) {
        system("cls");
        
        printf("1 - Male\n2 - Female\n\nEnter your gender: ");
        scanf("%d", &sex);
      }

      system("cls");

      printf("Enter your height: ");
      scanf("%f", &height);

      system("cls");

      weight = CalculateWeight(sex, height);

      printf("Your ideal weight is: %.2f. \n", weight);

      system("pause");
    }

    system("cls");

    printf("1 - Calculate ideal weight\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");
    scanf("%d", &opt);
  }

  return 0;
}