/*
** calc_newton.c for  in /home/BLENEA_T/Projects/math/105torus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Jan  9 20:02:42 2017 Thomas BLENEAU
** Last update Fri Jan 20 19:52:34 2017 Thomas BLENEAU
*/

#include "my.h"

void		calc_newton(char **av)
{
  long double	Xn = 0.5;
  long double	FXn = (atof(av[6]) * pow(Xn, 4)) + (atof(av[5]) * pow(Xn, 3)) + (atof(av[4]) * pow(Xn, 2)) + (atof(av[3]) * Xn) + atof(av[2]);
  long double	n = pow(10, -(atoi(av[7])));
  long double	FdXn = FdXn = (4 * atof(av[6]) * pow(Xn, 3)) + (3 * atof(av[5]) * pow(Xn, 2)) + (2 * atof(av[4]) * Xn) + (atof(av[3]) * Xn);
  long double	XN = Xn - (FXn / FdXn);
  long double	FXN = FXN = (atof(av[6]) * pow(XN, 4)) + (atof(av[5]) * pow(XN, 3)) + (atof(av[4]) * pow(XN, 2)) + (atof(av[3]) * XN) + atof(av[2]);
  int		i = -1;

  if (fabs(FXn) < n)
    display_result(Xn, atof(av[7]));
  while (fabs(FXN) > n && ++i <= 250)
    {
      FXn = (atof(av[6]) * pow(Xn, 4)) + (atof(av[5]) * pow(Xn, 3)) + (atof(av[4]) * pow(Xn, 2)) + (atof(av[3]) * Xn) + atof(av[2]);
      FdXn = (4 * atof(av[6]) * pow(Xn, 3)) + (3 * atof(av[5]) * pow(Xn, 2)) + (2 * atof(av[4]) * Xn) + (atof(av[3]) * Xn);
      FXN = (atof(av[6]) * pow(XN, 4)) + (atof(av[5]) * pow(XN, 3)) + (atof(av[4]) * pow(XN, 2)) + (atof(av[3]) * XN) + atof(av[2]);
      if (FdXn == 0)
	exit (84);
      display_result(Xn, atof(av[7]));
      XN = Xn - (FXn / FdXn);
      Xn = XN;
    }
}
