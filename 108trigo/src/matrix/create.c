/*
** create.c for 108 in /home/THOMAZ_C/108trigo/src/matrix/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar  6 18:38:33 2017 Corentin Thomazeau
** Last update Thu Mar 16 15:15:52 2017 Corentin Thomazeau
*/

#include <string.h>
#include <stdlib.h>
#include "m_matrix.h"
#include "my.h"

double		**matrix_create_fill(double **ret, char **av, const int size)
{
  int		i[2];

  i[0] = 0;
  while (i[0] < size)
    {
      i[1] = 0;
      while (i[1] < size)
	{
	  ret[i[0]][i[1]] = atof(av[size * i[0] + i[1] + 2]);
	  i[1] = i[1] + 1;
	}
      i[0] = i[0] + 1;
    }
  return (ret);
}

double		**matrix_create_line(double **ret, const int size)
{
  int		i;

  i = 0;
  while (i < size)
    {
      ret[i] = malloc(sizeof(double *) * size);
      if (ret[i] == 0)
	return (0);
      i++;
    }
  return (ret);
}

double		**matrix_create(char **av, const int size)
{
  double	**ret;

  ret = malloc(sizeof(double *) * size);
  if (ret == 0)
    return (0);
  ret = matrix_create_line(ret, size);
  if (ret == 0)
    return (0);
  ret = matrix_create_fill(ret, av, size);
  return (ret);
}

double		**matrix_create_identitee(int size)
{
  double	**ret;
  int		i;

  i = 0;
  if ((ret = malloc(sizeof(double *) * size)) == 0)
    return (0);
  while (i < size)
    {
      if ((ret[i] = malloc(sizeof(double) * size)) == 0)
	return (0);
      i++;
    }
  matrix_initialize(ret, size);
  i = -1;
  while (++i < size)
    ret[i][i] = 1;
  return (ret);
}
