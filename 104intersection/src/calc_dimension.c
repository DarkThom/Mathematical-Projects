/*
** calc_dimension.c for  in /home/BLENEA_T/Projects/math/104intersection
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Dec 19 17:48:56 2016 Thomas BLENEAU
** Last update Thu Jan  5 19:09:36 2017 Thomas BLENEAU
*/

#include "../include/my.h"

int		calc_sphere(char **av)
{
  double	a;
  double	b;
  double	c;

  a = (pow(atof(av[5]), 2) + pow(atof(av[6]), 2) + pow(atof(av[7]), 2));
  b = (2 * atof(av[2]) * atof(av[5])) + (2 * atof(av[3]) * atof(av[6])) + (2 * atof(av[4]) * atof(av[7]));
  c = (pow(atof(av[2]), 2) + pow(atof(av[3]), 2) + pow(atof(av[4]), 2) - pow(atof(av[8]), 2));
  if (a != 0)
    calc_discrimant_sphere(av, a, b, c);
  else
    exit(84);
  return (0);
}

int		calc_cylindre(char **av)
{
  double	a;
  double	b;
  double	c;

  a = pow(atof(av[5]), 2) + pow(atof(av[6]), 2);
  b = (2 * (atof(av[2]) * atof(av[5]))) + (2 * (atof(av[3]) * atof(av[6])));
  c = (pow(atof(av[2]), 2) + pow(atof(av[3]), 2) - pow(atof(av[8]), 2));
  calc_discrimant_cylindre(av, a, b, c);
  return (0);
}

int		calc_cone(char **av)
{
  double	a;
  double	b;
  double	c;
  double	angle;

  angle = (atof(av[8]) * M_PI) / 180;
  a = pow(atof(av[5]), 2) + pow(atof(av[6]), 2) - pow(atof(av[7]) * tan(angle), 2);
  b = (2 * atof(av[2]) * atof(av[5])) + (2 * atof(av[3]) * atof(av[6])) - (2 * atof(av[4]) * atof(av[7]) * pow(tan(angle), 2));
  c = pow(atof(av[2]), 2) + pow(atof(av[3]), 2) - (pow(atof(av[4]), 2) * pow(tan(angle), 2));
  calc_discrimant_cone(av, a, b, c);
  return (0);
}
