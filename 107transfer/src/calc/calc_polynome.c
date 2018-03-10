/*
** calc_polynome.c for  in /home/BLENEA_T/Projects/Semestre_2/math/107transfer
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Fri Feb 17 13:11:06 2017 Thomas BLENEAU
** Last update Thu Mar  2 14:34:51 2017 Corentin Thomazeau
*/

#include "my.h"

double		calc_polynome(int *tab, double x)
{
  int		i = tab[0];
  double	result = 0;

  while (i > 0)
    {
      result = tab[i] + result * x;
      i = i - 1;
    }
  return (result);
}

int		calc_resultat(t_fonc *fonc)
{
  double	x = 0;
  double	p_first;
  double	p_second;
  double	result;
  t_fonc	*tmp;

  while (x <= 1.0001)
    {
      result = 1;
      tmp = fonc;
      while (tmp != NULL)
	{
	  p_first = calc_polynome(tmp->first, x);
	  if ((p_second = calc_polynome(tmp->second, x)) == 0.0)
	    return (1);
	  else
	    result = result * (p_first / p_second);
	  tmp = tmp->next;
	}
      printf("%g -> %.5f\n", x, result);
      x = x + 0.001;
    }
  return (0);
}
