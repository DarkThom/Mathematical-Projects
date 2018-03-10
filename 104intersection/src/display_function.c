/*
** display_function.c for  in /home/BLENEA_T/Projects/math/104intersection
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Dec 19 17:22:42 2016 Thomas BLENEAU
** Last update Thu Jan  5 14:53:37 2017 Thomas BLENEAU
*/

#include "../include/my.h"

void	display_line(char **av)
{
  printf("straight line going through the ");
  printf("(%s,%s,%s)", av[2], av[3], av[4]);
  printf(" point and of direction vector ");
  printf("(%s,%s,%s)\n", av[5], av[6], av[7]);
}

void	display_cone(char **av)
{
  printf("cone of %s degree angle\n", av[8]);
}

void	display_sphere(char **av)
{
  printf("sphere of radius %s\n", av[8]);
}

void	display_cylinder(char **av)
{
  printf("cylinder of radius %s\n", av[8]);
}
