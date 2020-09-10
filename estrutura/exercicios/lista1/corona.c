// Melhor c�digo? N�o
// Mas faz o trabalho

#include <stdio.h>

int main(void)
{

  int energy = 0;
  int initialEnergy = 0;
  int limit = 0;
  char weapon;
  int dmg, cost;

  int enemies[3];

  scanf("%d %d %d %d\n", &enemies[0], &enemies[1], &enemies[2], &energy);
  scanf("%c", &weapon);

  initialEnergy = energy;

  if (weapon == 'C')
  {
    dmg = 40;
    cost = 15;
  }
  else
  {
    dmg = 50;
    cost = 20;
  }

  for (int i = 0; i < 3; i++)
  {
    while (enemies[i] > 0)
    {
      enemies[i] -= dmg;
      energy -= cost;

      if (limit != 1 && initialEnergy / 3 >= energy)
      {
        cost *= 2;
        limit = 1;
      }
    }
  }

  if (energy <= 0)
  {
    printf("Que pena... Era um jovem tao promissor");
    return 0;
  }

  printf("Eba! Pedro sobreviveu");

  return 0;
}