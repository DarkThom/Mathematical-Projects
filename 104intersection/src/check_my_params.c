/*
** check_my_params.c for  in /home/BLENEA_T/Projects/math/104intersection
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Dec 19 17:08:39 2016 Thomas BLENEAU
** Last update Thu Jan  5 15:14:59 2017 Thomas BLENEAU
*/

#include "../include/my.h"

int	check_error_params(int ac, char **av)
{
  int	i;

  i = 0;
  if (ac != 9)
    return (1);
  else if ((my_strcmp(av[1], "1") != 0) && (my_strcmp(av[1], "2") != 0) && (my_strcmp(av[1], "3") != 0))
    return (1);
  else if (atof(av[8]) <= 0)
    return (1);
  else if (my_strcmp(av[1], "3") == 0)
    {
      if (atof(av[8]) >= 90)
	return (1);
    }
  while (++i < ac)
    {
      if (my_str_isnum(av[i]) != 0)
	return (1);
    }
  return (0);
}
