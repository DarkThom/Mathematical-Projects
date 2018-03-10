/*
** 103architect.c for  in /home/BLENEA_T/Projects/math/103architect
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Dec  5 13:27:50 2016 Thomas BLENEAU
** Last update Fri Dec 16 23:06:34 2016 Thomas BLENEAU
*/

#include "./include/my.h"

int		main(int ac, char **av)
{
  if (check_error_params(ac, av))
    return (84);
  check_my_flags(ac, av);
  check_all_params(ac, av);
  display_coordonee(av[1], av[2]);
  display_point(final_point(av, check_final_point(ac, av)));
  return (0);
}
