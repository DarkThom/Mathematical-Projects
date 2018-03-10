/*
** equa.c for transfer in /home/THOMAZ_C/107transfer/plop/start/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Feb 27 17:26:08 2017 Corentin Thomazeau
** Last update Thu Mar  2 14:40:16 2017 Corentin Thomazeau
*/

#include <stdlib.h>
#include "my.h"
#include "m_use.h"

int	start_test_equa(const char *const str)
{
  int	i;
  int	compt;

  i = 0;
  compt = 1;
  while (str[i] != 0)
    {
      if (str[i] == '*')
	{
	  compt += 1;
	  if (str[i + 1] == '*')
	    return (1);
	}
      i++;
    }
  if (compt > 6)
    return (1);
  return (0);
}

int		start_equa(const int ac, const char *const *const av)
{
  int		i;
  t_fonc	*link;

  i = 1;
  while (i < ac)
    {
      if (my_tst_nbr(av[i]))
	return (disp_err("Invalid argument(s)"));
      i++;
    }
  link = start_setup(ac, av);
  i = calc_resultat(link);
  if (i)
    return (disp_err("Division by zero"));
  return (0);
}
