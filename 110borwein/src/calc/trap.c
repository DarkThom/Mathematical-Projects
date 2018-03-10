/*
** trap.c for  in /home/THOMAZ_C/110borwein/src/calc/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Apr  3 17:45:51 2017 Corentin Thomazeau
** Last update Thu Apr 13 13:41:52 2017 Thomas BLENEAU
*/

#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include "my.h"

int		calc_trap(int value)
{
  int		i;
  double	result;

  i = 0;
  result = 0.25 * (1.0 + calc_base_func(5000, value));
  while (++i <= 9999)
    result = result + (0.5 * (calc_base_func((double) i / 2, value)));
  printf("\nTrapezoids:\nI%d = ", value);
  printf("%.10f\ndiff = ", result);
  result = result - (M_PI / 2);
  if (result > -0.0000000001 && result < 0.0)
    result = 0.0;
  printf("%.10f\n", result);
  return (0);
}
