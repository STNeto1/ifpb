#include <stdio.h>
#include <conio.h>

#define MAX 50

typedef struct
{
  int passagem;
  char data[50];
  char de[50];
  char para[50];
  char horario[50];
  int poltrona;
  int idade;
  char nome[50];
} RPassageiro;

int main()
{
  RPassageiro passageiros[MAX];
  int i;

  for (i = 0;; i++)
  {

    RPassageiro rp;

    int pass;

    // printf("Passagem ......: ");
    scanf(" %d", &pass);
    if (pass < 0)
    {
      break;
    }
    scanf(" ");

    rp.passagem = pass;
    // printf("Data ......: ");
    gets(rp.data);

    // printf("De ......: ");
    gets(rp.de);

    // printf("Para ......: ");
    gets(rp.para);

    // printf("Horario ......: ");
    gets(rp.horario);

    // printf("Poltrona ......: ");
    scanf(" %d", &rp.poltrona);

    // printf("Idade ......: ");
    scanf(" %d", &rp.idade);

    // printf("Nome ......: ");
    scanf(" %[^\n]s", rp.nome);

    passageiros[i] = rp;
  }

  int sum = 0;
  float media = 0;

  for (int j = 0; j < i; j++)
  {
    sum += passageiros[j].idade;
  }
  media = sum / i;

  for (int j = 0; j < i; j++)
  {
    if (passageiros[j].idade > media && passageiros[j].poltrona % 2 == 0)
    {
      printf("%s\n", passageiros[j].nome);
    }
  }

  return 0;
}