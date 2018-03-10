/*
** base.c for 110 in /home/THOMAZ_C/110borwein/src/calc/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Apr  3 17:30:44 2017 Corentin Thomazeau
** Last update Mon Apr  3 18:41:51 2017 Thomas BLENEAU
*/

#include <stdlib.h>
#include <math.h>
#include "my.h"
#include "m_use.h"

double		calc_base_func(double x, int n)
{
  double	stock;
  double	ret;
  int		k;

  k = -1;
  ret = 1;
  if (x == 0.0)
    return (1);
  while (++k <= n)
    {
      stock = sin(x / (2 * k + 1));
      stock /= (x / (2 * k + 1));
      ret *= stock;
    }
  return (ret);
}

int	calc_base(char *str)
{
  int	value;

  value = atoi(str);
  if (value < 0)
    return (errs("The number must be positive"));
  if (calc_rect(value) ||
      calc_trap(value) ||
      calc_simp(value))
    return (errs("Calculs Failed !"));
  return (0);
}
