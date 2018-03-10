/*
** copy.c for 108 in /home/THOMAZ_C/108trigo/src/matrix/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Thu Mar 16 14:23:13 2017 Corentin Thomazeau
** Last update Thu Mar 16 14:27:15 2017 Corentin Thomazeau
*/

#include <stdlib.h>

void		matrix_copy_apply(double *target, double *origin, int size)
{
  int		i;

  i = 0;
  while (i < size)
    {
      target[i] = origin[i];
      i++;
    }
}

double		**matrix_copy(double **origin, int size)
{
  double	**ret;
  int		i;

  if ((ret = malloc(sizeof(double *) * size)) == 0)
    return (0);
  i = 0;
  while (i < size)
    {
      if ((ret[i] = malloc(sizeof(double) * size)) == 0)
	return (0);
      matrix_copy_apply(ret[i], origin[i], size);
      i++;
    }
  return (ret);
}
