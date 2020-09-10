#include <stdio.h>
#include <string.h>

char *stringToCharArray(char *str, int strLen);
int strSize(char *str);
int compareStr(char *str1, char *str2, int size);
float porcentagemCertas(char *gabarito, char *respostas, int tGabarito);

int main()
{
  int nRespostas;

  scanf("%d", &nRespostas);
  char respostas[nRespostas];
  char *entrada;

  scanf(" ");

  // pegar o gabarito
  while (1)
  {
    char tmp[nRespostas * 2];
    gets(tmp);

    if (strSize(tmp) == nRespostas)
    {
      entrada = stringToCharArray(tmp, nRespostas);
      break;
    }

    printf("Gabarito de tamanho errado. Entre com o novo gabarito:\n");
  }

  fflush(stdin);
  scanf(" ");

  // pegar respostas
  while (1)
  {
    char tmp[nRespostas * 2];
    gets(tmp);

    if (strcmp(tmp, "sair") == 0)
    {
      return 0;
    }

    if (strSize(tmp) != nRespostas)
    {
      printf("Tamanho da resposta diferente do tamanho do gabarito.\n");
      continue;
    }

    float porcentagem = porcentagemCertas(respostas, tmp, nRespostas);
    printf(">> %f\n", porcentagem);

    printf("Porcentagem de acertos: %.1f\n", porcentagem);
  }

  return 0;
}

char *stringToCharArray(char *str, int strLen)
{
  char resultado[strLen];

  for (int i = 0; i < strlen(str); i++)
  {
    printf("%c", str[i]);
  }

  return resultado;
}

int strSize(char *str)
{

  int sz = 0;

  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] != ' ')
    {
      sz += 1;
    }
  }

  return sz;
}

int compareStr(char *str1, char *str2, int size)
{
  for (int i = 0; i < size; i++)
  {
    if (str1[i] != str2[i])
    {
      return 1;
    }
  }

  return 0;
}

float porcentagemCertas(char *gabarito, char *respostas, int tgabarito)
{
  int certas = 0;
  for (int i = 0; i < tgabarito; i++)
  {
    if (gabarito[i] == respostas[i])
    {
      certas += 1;
    }
  }

  return (double)certas / (double)tgabarito;
}