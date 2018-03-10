/*
** nbr_flags.c for  in /home/BLENEA_T/Projects/math/103architect
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Dec 17 10:05:50 2016 Thomas BLENEAU
** Last update Sat Dec 17 10:15:19 2016 Thomas BLENEAU
*/

#include "../include/my.h"

int	my_nbr_flags(int ac, char **av)
{
  int	i;
  int	flag;

  i = 2;
  flag = 0;
  if (ac >= 5)
    {
      while (++i < ac)
	{
	  if (my_strcmp(av[i], "-t") == 0)
	    flag = flag + 1;
	  else if (my_strcmp(av[i], "-h") == 0)
	    flag = flag + 1;
	  else if (my_strcmp(av[i], "-r") == 0)
	    flag = flag + 1;
	  else if (my_strcmp(av[i], "-s") == 0)
	    flag = flag + 1;
	}
    }
  return (flag);
}
