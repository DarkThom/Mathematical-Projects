/*
** calc_secant.c for  in /home/BLENEA_T/Projects/math/105torus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Jan  9 20:03:28 2017 Thomas BLENEAU
** Last update Fri Jan 20 19:52:46 2017 Thomas BLENEAU
*/

#include "my.h"

int	check_convergence(char **av, long double x1, long double x2, long double Fx1,
			  long double Fx2, long double Xn, long double FXn, long double n)
{
  int	i;

  i = -1;
  while (fabs(FXn) > n && ++i <= 250)
    {
      Fx1 = atof(av[6]) * pow(x1, 4) + atof(av[5]) * pow(x1, 3) + atof(av[4]) * pow(x1, 2) + atof(av[3]) * x1 + atof(av[2]);
      Fx2 = atof(av[6]) * pow(x2, 4) + atof(av[5]) * pow(x2, 3) + atof(av[4]) * pow(x2, 2) + atof(av[3]) * x2 + atof(av[2]);
      if (Fx2 - Fx1 == 0)
	exit (84);
      Xn = x2 - (Fx2 * (x2 - x1) / (Fx2 - Fx1));
      FXn = atof(av[6]) * pow(Xn, 4) + atof(av[5]) * pow(Xn, 3) + atof(av[4]) * pow(Xn, 2) + atof(av[3]) * Xn + atof(av[2]);
      x1 = x2;
      x2 = Xn;
    }
  return (i);
}

void	calc_secant(char **av)
{
  long double	x1 = 0;
  long double	x2 = 1;
  long double	Fx1 = atof(av[6]) * pow(x1, 4) + atof(av[5]) * pow(x1, 3) + atof(av[4]) * pow(x1, 2) + atof(av[3]) * x1 + atof(av[2]);
  long double	Fx2 = atof(av[6]) * pow(x2, 4) + atof(av[5]) * pow(x2, 3) + atof(av[4]) * pow(x2, 2) + atof(av[3]) * x2 + atof(av[2]);
  long double	Xn = x2 - (Fx2 * (x2 - x1) / (Fx2 - Fx1));
  long double	FXn = atof(av[6]) * pow(Xn, 4) + atof(av[5]) * pow(Xn, 3) + atof(av[4]) * pow(Xn, 2) + atof(av[3]) * Xn + atof(av[2]);
  long double	n = pow(10, -atof(av[7]));
  int		i;

  i = check_convergence(av, x1, x2, Fx1, Fx2, Xn, FXn, n);
  if (fabs(FXn) < n)
    display_result(Xn, atof(av[7]));
  else if (i >= 250)
    exit(84);
  while (fabs(FXn) > n)
    {
      Fx1 = atof(av[6]) * pow(x1, 4) + atof(av[5]) * pow(x1, 3) + atof(av[4]) * pow(x1, 2) + atof(av[3]) * x1 + atof(av[2]);
      Fx2 = atof(av[6]) * pow(x2, 4) + atof(av[5]) * pow(x2, 3) + atof(av[4]) * pow(x2, 2) + atof(av[3]) * x2 + atof(av[2]);
      if (Fx2 - Fx1 == 0)
	exit (84);
      Xn = x2 - (Fx2 * (x2 - x1) / (Fx2 - Fx1));
      FXn = atof(av[6]) * pow(Xn, 4) + atof(av[5]) * pow(Xn, 3) + atof(av[4]) * pow(Xn, 2) + atof(av[3]) * Xn + atof(av[2]);
      x1 = x2;
      x2 = Xn;
      display_result(Xn, atof(av[7]));
    }
}
