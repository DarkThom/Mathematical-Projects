/*
** simp.c for  in /home/THOMAZ_C/110borwein/src/calc/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Apr  3 17:45:47 2017 Corentin Thomazeau
** Last update Mon Apr  3 19:18:54 2017 Thomas BLENEAU
*/

#include <stdio.h>
#include <math.h>
#include "my.h"

int		calc_simp(int value)
{
  double	res;
  double	a;
  double	b;
  int		i;

  i = 0;
  res = 0.5 / 6 * (1.0 + calc_base_func(5000, value) + 4 * calc_base_func(0.25, value));
  while (++i <= 9999)
    {
      a = calc_base_func(((double) (i)) / 2, value);
      b = calc_base_func(((double) (i)) / 2 + 0.25, value);
      res += (2 * a + 4 * b) * 0.5 / 6;
    }
  printf("\nSimpson:\nI%d = %.10f\n", value, res);
  res -= M_PI / 2;
  printf("diff = %.10f\n", res);
  return (0);
}
