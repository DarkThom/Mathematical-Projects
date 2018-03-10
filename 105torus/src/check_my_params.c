/*
1;2802;0c** check_my_params.c for  in /home/BLENEA_T/Projects/math/104intersection
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Dec 19 17:08:39 2016 Thomas BLENEAU
** Last update Fri Jan 20 19:52:59 2017 Thomas BLENEAU
*/

#include "my.h"

int	check_error_params(int ac, char **av)
{
  int	i;

  i = 0;
  if (ac != 8)
    return (1);
  else if ((my_strcmp(av[1], "1") != 0) && (my_strcmp(av[1], "2") != 0) && (my_strcmp(av[1], "3") != 0))
    return (1);
  else if (my_other_isnum(av[7]) != 0)
    return (1);
  else if (atoi(av[7]) < 0)
     return (1);
 while (++i < ac - 1)
    {
      if (my_str_isnum(av[i]) != 0)
	return (1);
    }
  return (0);
}
