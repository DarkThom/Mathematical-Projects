/*
** rect.c for 110 in /home/THOMAZ_C/110borwein/src/calc/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Apr  3 17:45:43 2017 Corentin Thomazeau
** Last update Mon Apr  3 19:18:32 2017 Thomas BLENEAU
*/

#include <stdio.h>
#include <math.h>
#include "my.h"

int		calc_rect(int value)
{
  double	res;
  int		i;

  i = 0;
  res = 0.5;
  while (++i <= 9999)
    res += 0.5 * calc_base_func(((double) (i)) / 2, value);
  printf("Rectangles:\nI%d = %.10f\n", value, res);
  res -= M_PI / 2;
  printf("diff = %.10f\n", res);
  return (0);
}
