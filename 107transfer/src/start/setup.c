/*
** setup.c for transfer in /home/THOMAZ_C/107transfer/src/start/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Tue Feb 28 17:43:31 2017 Corentin Thomazeau
** Last update Thu Mar  2 14:28:34 2017 Corentin Thomazeau
*/

#include <stdlib.h>
#include "my.h"

int		start_get_nbr(const char *const str, int *it)
{
  int		ret;
  int		fact;

  ret = 0;
  fact = 1;
  if (str[*it] == '-')
    {
      fact = -1;
      *it = *it + 1;
    }
  while (str[*it] != '*' && str[*it] != 0)
    {
      ret = ret * 10;
      ret = ret + str[*it] - 48;
      *it = *it + 1;
    }
  return (ret * fact);
}

void		start_fonc_fill(int *tab, const char *const str)
{
  int		i;
  int		j;

  i = 1;
  j = 0;
  while (i <= tab[0])
    {
      tab[i] = start_get_nbr(str, &j);
      j = j + 1;
      i++;
    }
}

int		start_getsize(const char *const str)
{
  int		ret;
  int		i;

  i = 0;
  ret = 1;
  while (str[i] != 0)
    {
      if (str[i] == '*')
	ret++;
      i++;
    }
  return (ret);
}

t_fonc		*start_alloc(const char *const first, const char *const second)
{
  t_fonc	*ret;
  int		size[2];

  if ((ret = malloc(sizeof(t_fonc))) == 0)
    return (0);
  size[0] = start_getsize(first);
  size[1] = start_getsize(second);
  if ((ret->first = malloc(sizeof(int) * (size[0] + 1))) == 0)
    return (0);
  if ((ret->second = malloc(sizeof(int) * (size[1] + 1))) == 0)
    return (0);
  ret->first[0] = size[0];
  ret->second[0] = size[1];
  start_fonc_fill(ret->first, first);
  start_fonc_fill(ret->second, second);
  return (ret);
}

t_fonc		*start_setup(const int ac, const char *const *const av)
{
  t_fonc	*last;
  t_fonc	*this;
  int		i;

  i = 1;
  last = 0;
  while (i < ac)
    {
      this = start_alloc(av[i], av[i + 1]);
      this->next = last;
      last = this;
      i += 2;
    }
  return (last);
}
