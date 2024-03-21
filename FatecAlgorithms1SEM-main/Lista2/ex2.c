#include <stdio.h>
#include <stdlib.h>

// 2 - A FATEC RUBENS LARA faz o pagamento de seus professores por hora/aula.
// Faça um algoritmo que calcule e exiba o salário de um professor.
// Sabe-se que o valor da hora/aula segue a tabela abaixo:
// Professor Nível 1 R$55,00 por hora/aula
// Professor Nível 2 R$67,00 por hora/aula
// Professor Nível 3 R$78,00 por hora/aula.

int main()
{
  float classValue, total;
  int opt = 1, level = 0, classes;

  while (opt != 2)
  {
    if (opt == 1)
    {
      do
      {
        system("cls");

        printf("Enter your professional level (1, 2 or 3): ");
        scanf("%d", &level);

      } while (level < 1 || level > 3);

      // Verificando o nível do professor para atribuir o valor da hora/aula correspondente.
      if (level == 1)
      {
        classValue = 55.00;
      }
      else if (level == 2)
      {
        classValue = 67.00;
      }
      else if (level == 3)
      {
        classValue = 78.00;
      }
      else
      {
        classValue = 0;
      }

      do
      {
        system("cls");

        // Pedindo a entrada de dados referente a quantidade de horas/aulas ministradas.
        printf("Enter the number of hours taught classes: ");
        scanf("%d", &classes);

      } while (classes < 1);

      system("cls");

      // Achando o total do valor arrecadado, multiplicando as aulas dadas pelo valor da hora/aula.
      total = classValue * classes;

      // Imprimindo os resultados para o usuário.
      printf("- Salary sumary -\n");
      printf("\nYour teacher level: %d\n", level);
      printf("Class hour price: $%.2f\n", classValue);
      printf("Hours of classes taught: %d\n", classes);
      printf("\nTotal salary: $%.2f\n", total);

      system("pause");
    }

    system("cls");

    printf("1 - Calculate salary\n");
    printf("2 - Exit the program\n");
    printf("\nSelect an option: ");

    scanf("%d", &opt);
  }

  return 0;
}
