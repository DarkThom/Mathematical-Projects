/*
** display_function.c for  in /home/BLENEA_T/Projects/math/103architect
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Dec  5 17:55:00 2016 Thomas BLENEAU
** Last update Sat Dec 17 09:52:54 2016 Thomas BLENEAU
*/

#include "../include/my.h"

void	display_opts(char **av)
{
  printf("Translation by the vector (%s, %s)\n", av[4], av[5]);
  printf("Homothety by the ratios %s and %s\n", av[7], av[8]);
  printf("Rotation at a %s degree angle\n", av[10]);
  printf("Symmetry about an axis inclined with an angle of %s degrees\n", av[12]);
}

void	display_matrix(double *matrix)
{
  int	i;

  i = -1;
  while (++i < 9)
    if (matrix[i] <= -0.0000000000000000612323399573676603586882 && matrix[i] >= -0.0023399573676603586882)
      matrix[i] = 0.0;
  printf("%.2lf\t%.2lf\t%.2lf\n", matrix[0], matrix[1], matrix[2]);
  printf("%.2lf\t%.2lf\t%.2lf\n", matrix[3], matrix[4], matrix[5]);
  printf("%.2lf\t%.2lf\t%.2lf\n", matrix[6], matrix[7], matrix[8]);
}

void	display_translation(char *s1, char *s2)
{
  printf("Translation by the vector (%s, %s)\n", s1, s2);
}

void	display_homotheties(char *s1, char *s2)
{
  printf("Homothety by the ratios %s and %s\n", s1, s2);
}

void	display_rotation(char *s1)
{
  printf("Rotation at a %s degree angle\n", s1);
}

void	display_symetric(char *s1)
{
  printf("Symmetry about an axis inclined with an angle of %s degrees\n", s1);
}

void	display_coordonee(char *s1, char *s2)
{
  printf("(%s,%s) => ", s1, s2);
}

void	display_point(double *point)
{
  printf("(%.2lf,%.2lf)\n", point[0], point[1]);
}
