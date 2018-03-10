/*
** 109titration.c for  in /home/BLENEA_T/Projects/Semestre_2/math/109titration
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Mar 20 16:11:05 2017 Thomas BLENEAU
** Last update Thu Mar 30 14:45:08 2017 Thomas BLENEAU
*/

#include <stdlib.h>
#include <stdio.h>
#include "m_open.h"
#include "m_use.h"
#include "my.h"

int		main_help()
{
  printf("USAGE\n\t./109titration file\n\n");
  printf("DESCRIPTION\n\tfile\t");
  printf("a cvs file containing \"vol;ph\" lines\n");
  return (0);
}

int		main(const int ac, const char *const *const av)
{
  t_point	*point;
  double	*deriv;
  double	*sec_deriv;
  int		len;
  int		t_max = 0;

  if (ac != 2)
    return (use_errs("Invalid argument number"));
  if (use_strcmp(av[1], "-h") == 0)
    return (main_help());
  point = open_core(av[1], &len);
  if (point == 0)
    return (84);
  if ((deriv = calc_derivative(point, len, &t_max)) == NULL)
    return (84);
  if ((sec_deriv = second_derivative(point, len, deriv)) == NULL)
    return (84);
  if (estimated_derivative(point, sec_deriv, t_max))
    return (84);
  return (0);
}
