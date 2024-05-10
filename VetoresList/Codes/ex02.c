#include <stdio.h>
#include <stdlib.h>

// 2. Ler um conjunto de 6 números reais, armazenando-o no vetor A.
// Calcular o quadrado das componentes deste vetor, armazenando o resultado no vetor B. Exiba os dois vetores.
// Exemplo: Suponha que você tenha digitado 2 na posição zero do vetor A
// no vetor B na mesma posição será o valor de A[0] ao quadrado. A[0]=2 e B[0]= 4  e assim sucessivamente.

int main()
{
  int opt = 1, A[6], B[6];

  while (opt != 2)
  {
    if (opt == 1)
    {
      int max = (sizeof(A) / sizeof(A[0]));

      for (int i = 0; i < max; i++)
      {
        system("cls");

        printf("Enter the %d number: ", i + 1);
        scanf("%d", &A[i]);

        B[i] = (A[i] * A[i]);
      }

      system("cls");

      printf("- Summary -\n");

      for (int i = 0; i < max; i++)
      {
        printf("A[%d] = %d, B[%d] = %d \n", i, A[i], i, B[i]);
      }

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
