/*
** check_nbr.c for bomb in /home/THOMAZ_C/106bombyx/src/error/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Feb  6 17:56:05 2017 Corentin Thomazeau
** Last update Mon Feb  6 20:56:17 2017 Thomas BLENEAU
*/

#include "my.h"

int	error_check_nbr_int(char *nbr)
{
  int	i;

  i = 0;
  while (nbr[i] != 0)
    {
      if (nbr[i] < 48 || nbr[i] > 57)
	return (0);
      i++;
    }
  return (1);
}

int	error_check_nbr_double(char *nbr)
{
  int	i;
  int	plop;

  i = 0;
  plop = 0;
  while (nbr[i] != 0)
    {
      if (nbr[i] == '.')
	{
	  if (plop == 1)
	    return (0);
	  plop = 1;
	}
      else if (nbr[i] < 48 || nbr[i] > 57)
	return (0);
      i++;
    }
  return (1);
}
