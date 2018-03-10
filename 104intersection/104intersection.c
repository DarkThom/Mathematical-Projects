/*
** 104architect.c for  in /home/BLENEA_T/Projects/math/104intersection
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Dec 19 17:06:53 2016 Thomas BLENEAU
** Last update Mon Dec 19 18:42:29 2016 Thomas BLENEAU
*/

#include "./include/my.h"

int	main(int ac, char **av)
{
  if (check_error_params(ac, av))
    return (84);
  else if (my_strcmp(av[1], "1") == 0)
    {
      display_sphere(av);
      display_line(av);
      calc_sphere(av);
    }
   else if (my_strcmp(av[1], "2") == 0)
    {
      display_cylinder(av);
      display_line(av);
      calc_cylindre(av);
    }
   else if (my_strcmp(av[1], "3") == 0)
    {
      display_cone(av);
      display_line(av);
      calc_cone(av);
    }
  return (0);
}
