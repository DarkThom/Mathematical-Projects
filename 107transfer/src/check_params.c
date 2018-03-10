/*
** check_params.c for  in /home/BLENEA_T/Projects/Semestre_2/math/107transfer
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Thu Feb 16 16:24:53 2017 Thomas BLENEAU
** Last update Fri Feb 17 13:05:22 2017 Thomas BLENEAU
*/

#include "my.h"

int	dis_err(const char *const str)
{
  int	i;

  i = 0;
  write(2, "Error - ", 8);
  while (str[i++] != 0);
  write(2, str, i);
  write(2, "\n", 1);
  return (1);
}

int	check_params(int ac, char **av)
{
  int	i;

  i = 1;
  if (ac % 2 == 0)
    return (dis_err("Bad number of argument"));
  while (i < (ac - 1))
    {
      if (str_isnum(av[i]))
	return (1);
      i = i + 1;
    }
  return (0);
}
