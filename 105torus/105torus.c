/*
** 105torus.c for  in /home/BLENEA_T/Projects/math/105torus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Jan  9 11:17:52 2017 Thomas BLENEAU
** Last update Fri Jan 20 19:51:56 2017 Thomas BLENEAU
*/

#include "my.h"

int	main(int ac, char **av)
{
  if (check_error_params(ac, av))
    return (84);
  else if (my_strcmp(av[1], "1") == 0)
    calc_bisection(av);
  else if (my_strcmp(av[1], "2") == 0)
    calc_newton(av);
  else if (my_strcmp(av[1], "3") == 0)
    calc_secant(av);
  return (0);
}
