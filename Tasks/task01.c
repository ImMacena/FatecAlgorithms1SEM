#include <stdio.h>
#include <stdlib.h>
 
// Crie um programa dividido em funções:
// Função Cadastro :armazene no vetor A  no mínimo 5 e no máximo 10 números quaisquer.O usuário é quem determinará a quantidade.
// A variável K repesenta essa quantidade deve ser declarada localmente à função main.
// A função MédiaPares: calcule a média dos números pares contidos no vetorA.Essa média deverá ser exibida no interior da função main.
// Caso não tenha sido digitado nenhum número par no vetor, informe ao usuário no interior da função main.
// Função Menor:verifique o menor número armazenado no vetor A e exiba o menor número encontrado na função main().
// Exiba MenorNum:exiba em que posições o menor apareceu no vetor A.
// Função VetorMenor Num:armazene no vetor VetorMenorNum apenas os números menore que o menor numero.Este vetor deverá
// ser declarado como uma vaiável local à esta função.
 
int * Register(int K)
{
  int *vector;
  vector = (int *)malloc(K * sizeof(int));
 
  for(int i = 0; i < K; i++)
  {
    printf("Insert the %d number: ", i + 1);
    scanf("%d", &vector[i]);
  }
 
  return vector;
}
 
void AverageOdd(int *vector)
{
  int len = sizeof(*vector);
  float average, total = 0, count = 0;
 
  for(int i = 0; i < len; i++)
  {
    if((vector[i] % 2) == 0)
    {
      count++;
 
      total += vector[i];
    }
  }
 
  if(count == 0)
  {
    printf("There are no even numbers in the vector.");
    return;
  }
  else
  {
    average = (total / count);
    printf("Average of even numbers: %.2f.\n", average);
  }
}
 
void Smaller(int *vector)
{
  int len = sizeof(*vector);
  int smaller;
 
  smaller = vector[0];
  for(int i = 0; i < len; i++)
  {
    if(smaller > vector[i])
    {
      smaller = vector[i];
    }
  }
 
  printf("Smaller number of vector: %d.\n", smaller);
}
 
void SmallerIndexes(int *vector)
{
  int len = sizeof(*vector);
  int smaller, index;
 
  smaller = vector[0];
 
  for(int i = 0; i < len; i++)
  {
    if(smaller > vector[i])
    {
      smaller = vector[i];
      index = i;
    }
  }
 
  for(int i = 0; i <= len; i++)
  {
    if(vector[i] == vector[index])
    {
      printf("Smaller number index of vector: %d.\n", i);
    }
  }
}
 
int main()
{
  int K;
 
  while(K < 5 || K > 10)
  {
    system("cls");
 
    printf("Insert the number of numbers within the vector (minimum 5 and maximum 10): ");
    scanf("%d", &K);
  }
 
  system("cls");
 
  int *A;
  A = Register(K);
 
  system("cls");
 
  AverageOdd(A);
  Smaller(A);
  SmallerIndexes(A);
 
  free(A);
 
  printf("\n");
  system("pause");
 
  return 0;
}
