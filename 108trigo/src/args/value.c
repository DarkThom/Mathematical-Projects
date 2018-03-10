/*
** value.c for 108 in /home/THOMAZ_C/108trigo/src/args/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar  6 17:58:21 2017 Corentin Thomazeau
** Last update Mon Mar  6 18:33:15 2017 Corentin Thomazeau
*/

#include <string.h>

int	args_value_first(const char *str)
{
  char	*tab[5];
  int	i;

  tab[0] = "EXP";
  tab[1] = "COS";
  tab[2] = "SIN";
  tab[3] = "COSH";
  tab[4] = "SINH";
  i = -1;
  while (++i < 5 && strcmp(str, tab[i]) != 0);
  if (i == 5)
    return (84);
  return (i);
}

int	args_value_number_test(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '-')
    i = 1;
  while (str[i])
    {
      if (str[i] < 48 || str[i] > 57)
	return (1);
      i++;
    }
  return (0);
}

int	args_value_number(int ac, char **av)
{
  int	i;

  i = 2;
  while (i < ac)
    {
      if (args_value_number_test(av[i]))
	return (1);
      i++;
    }
  return (0);
}
