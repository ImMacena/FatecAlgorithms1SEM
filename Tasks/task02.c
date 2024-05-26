#include <stdio.h>
#include <stdlib.h>

#define MAX 20

/*
  Crie um programa dividido em funções:

  a) Armazena_AB: utilize esta função para armazenar os dados no
  vetor A e B.(valor:0.25)

  b) Armazena_AB: Construa vetores C e D de mesmo tipo e
  dimensão. O vetor C deve ser formado pelos elementos de índice
  ímpar dos vetores A e B, e o vetor D deve ser formado pelos
  elementos de índice par dos vetores A e B.(valor:0.25)

  c) Menor_Múltiplo5:verifique nesta função e exiba no interior da
  função main o menor múltiplo de 5 contido no vetor D. Caso não
  exista nenhum múltiplo de 5 no vetor D informe o usuário no interior
  da função main. (Valor:0.5) Esta questão só poderá ser
  considerada totalmente correta se o item b estiver correto.

  d) Média_Múltiplos11: calcule a média dos múltiplos de 11 contidos
  no vetor C. Caso não exista nenhum múltiplo de 11 no vetor C
  informe o usuário no interior da função main. (Valor:0.5) Esta
  questão só poderá ser considerada se o item b estiver correto.

  e) Main: exiba todos os vetores nesta função. (valor:0.5)
  Observações:

  1. As variáveis do tipo vetor A, B, C, D devem ser declaradas como
  variáveis globais e com tamanho máximo determinado pelo maior
  valor que pode ser armazenado na variável k.
  
  2. Essa variável k é uma variável definida localmente à função main.
  Esta variável deve ser declarada no interior da função main. O
  tamanho da variável k deve ser no mínimo 5 e no máximo 20.O
  usuário é quem define qual será o valor de k.
*/

int A[MAX], B[MAX], C[MAX], D[MAX];

void Armazena_AB(int maxLen)
{
  int inputValue;

  for(int i = 0; i < maxLen; i++)
  {
    system("cls");
    printf("Enter the %d value on vector A: ", i);
    scanf("%d", &inputValue);

    A[i] = inputValue;
  }

  for(int i = 0; i < maxLen; i++)
  {
    system("cls");
    printf("Enter the %d value on vector B: ", i);
    scanf("%d", &inputValue);

    B[i] = inputValue;
  }
}

void Armazena_CD(int A[], int B[])
{
  for(int i = 0; i <= MAX; i++)
  {
    if (i % 2 == 0) {
      D[i] = A[i];
      D[(i + 1)] = B[i];
    } else {
      C[(i - 1)] = A[i];
      C[i] = B[i];
    }
  }
}

void Menor_Multiplos5(int D[])
{
  int multiple = 0;

  for (int i = 0; i <= MAX; i++)
  {
    if (D[i] % 5 == 0)
    {
      if (multiple > D[i] || multiple == 0 ) multiple = D[i];
    }
  }

  if (multiple % 5 != 0 || multiple == 0)
  {
    printf("There are no multiples of 5 in vector D.");
  }
  else
  {
    printf("Smallest multiple of 5 in vector D: %d.", multiple);
  }
}

void Media_Multiplos11(int C[])
{
  int count = 0, total = 0;
  float average;

  for (int i = 0; i <= MAX; i++)
  {
    if (C[i] % 11 == 0 && C[i] != 0)
    {
      total += C[i];
      count++;
    }
  }

  if (total == 0)
  {
    printf("There are no multiples of 11 in vector C.");
  }
  else
  {
    average = (float)total / (float)count;

    printf("Multiples of 11 in vector C average: %.2f.", average);
  }
}

int main()
{
  int maxLen;

  do
  {
    printf("Enter the max length of vector: ");
    scanf("%d", &maxLen);
  } while (maxLen < 5 || maxLen > 20);

  Armazena_AB(maxLen);
  Armazena_CD(A, B);

  system("cls");

  Menor_Multiplos5(D);

  printf("\n");

  Media_Multiplos11(C);

  printf("\n");

  printf("A vector values: ");
  for (int i = 0; i < maxLen; i++)
  {
    printf(" %d", A[i]);
  }

  printf("\n");

  printf("B vector values: ");
  for (int i = 0; i < maxLen; i++)
  {
    printf(" %d", B[i]);
  }

  printf("\n");

  printf("C vector values: ");
  for (int i = 0; i < maxLen; i++)
  {
    printf(" %d", C[i]);
  }

  printf("\n");

  printf("D vector values: ");
  for (int i = 0; i < maxLen; i++)
  {
    printf(" %d", D[i]);
  }

  printf("\n");
  system("pause");

  return 0;
}

