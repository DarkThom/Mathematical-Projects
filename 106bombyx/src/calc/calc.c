/*
** calc.c for bomb in /home/THOMAZ_C/106bombyx/src/calc/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Feb  6 18:09:52 2017 Corentin Thomazeau
** Last update Thu Feb 16 17:39:05 2017 Thomas BLENEAU
*/

#include "my.h"

int	print_error(const char *const);

int		calc_base(int n, double k)
{
  int		i;
  double	x = (double) n;

  i = 0;
  if (n < 0 || k < 1 || k > 4)
    return (print_error("Invalid number(s)"));
  while (i < 100)
    {
      if (x < 0)
	x = 0.0;
      printf("%i %.2f\n", i + 1, x);
      x = k * x * (1000 - x) / 1000;
      i++;
    }
  return (0);
}

int		calc_complex(int n, double i1, double i2)
{
  double	k = 1;
  double	Xi = 0;
  double	inc;

  if (n < 0 || i1 < 0 || i2 < 0 || i2 < i1)
    return (print_error("Invalid number(s)"));
  while (k <= 4)
    {
      Xi = n;
      inc = 0;
      while (++inc <= i2)
	{
	  if (inc >= i1 && inc <= i2)
	    {
	      if (Xi < 0)
		Xi = 0.0;
	      printf("%.2f %.2f\n", k, Xi);
	    }
	  Xi = (k * Xi * (1000 - Xi)) / 1000;
	}
      k = k + 0.01;
    }
  return (0);
}
