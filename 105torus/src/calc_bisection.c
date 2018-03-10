/*
** calc_bisection.c for  in /home/BLENEA_T/Projects/math/105torus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Jan  9 17:41:05 2017 Thomas BLENEAU
** Last update Fri Jan 20 19:52:22 2017 Thomas BLENEAU
*/

#include "my.h"

void		calc_bisection(char **av)
{
  long double	x1 = 0;
  long double	x2 = 1;
  long double	Xn = (x1 + x2) / 2;
  long double	Fx1 = (atof(av[6]) * pow(x1, 4)) + (atof(av[5]) * pow(x1, 3)) + (atof(av[4]) * pow(x1, 2)) + (atof(av[3]) * x1) + atof(av[2]);
  long double	Fx2 = (atof(av[6]) * pow(x2, 4)) + (atof(av[5]) * pow(x2, 3)) + (atof(av[4]) * pow(x2, 2)) + (atof(av[3]) * x2) + atof(av[2]);
  long double	FXn = (atof(av[6]) * pow(Xn, 4)) + (atof(av[5]) * pow(Xn, 3)) + (atof(av[4]) * pow(Xn, 2)) + (atof(av[3]) * Xn) + atof(av[2]);
  long double	n = pow(10, -(atof(av[7])));
  int		i = -1;

  if (fabs(FXn) < n)
    display_result(Xn, atof(av[7]));
  while (fabs(FXn) > n && ++i < 50)
    {
      Xn = (x1 + x2) / 2;
      Fx1 = (atof(av[6]) * pow(x1, 4)) + (atof(av[5]) * pow(x1, 3)) + (atof(av[4]) * pow(x1, 2)) + (atof(av[3]) * x1) + atof(av[2]);
      Fx2 = (atof(av[6]) * pow(x2, 4)) + (atof(av[5]) * pow(x2, 3)) + (atof(av[4]) * pow(x2, 2)) + (atof(av[3]) * x2) + atof(av[2]);
      FXn = (atof(av[6]) * pow(Xn, 4)) + (atof(av[5]) * pow(Xn, 3)) + (atof(av[4]) * pow(Xn, 2)) + (atof(av[3]) * Xn) + atof(av[2]);
      if ((Fx1 * FXn) < 0)
	x2 = Xn;
      else
	x1 = Xn;
      display_result(Xn, atof(av[7]));
    }
}
