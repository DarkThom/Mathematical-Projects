/*
** calc_method.c for  in /home/BLENEA_T/Projects/Semestre_2/math/108trigo
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Thu Mar  9 19:50:49 2017 Thomas BLENEAU
** Last update Thu Mar 16 15:31:01 2017 Thomas BLENEAU
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

double		**calc_prod_mat(double **mat_1, double **mat_2, int size)
{
  int		i;
  int		j;
  int		k;
  double	**mat_res;

  i = -1;
  if ((mat_res = malloc(sizeof(double *) * (size + 1))) == NULL)
    return (NULL);
  memset(mat_res, 0, (sizeof(double *) * size));
  while (++i < size)
    {
      j = -1;
      if ((mat_res[i] = malloc(sizeof(double) * size)) == NULL)
	return (NULL);
      while (++j < size)
	{
	  k = -1;
	  mat_res[i][j] = 0;
	  while (++k < size)
	    mat_res[i][j] += mat_1[i][k] * mat_2[k][j];
	}
    }
  return (mat_res);
}

double		**calc_add_mat(double **mat_1, double **mat_2, int size)
{
  int		i;
  int		j;

  i = -1;
  while (++i < size)
    {
      j = -1;
      while (++j < size)
	mat_1[i][j] = mat_1[i][j] + mat_2[i][j];
    }
  return (mat_1);
}

double		**calc_sub_mat(double **mat_1, double **mat_2, int size)
{
  int		i;
  int		j;

  i = -1;
  while (++i < size)
    {
      j = -1;
      while (++j < size)
	mat_1[i][j] = mat_1[i][j] - mat_2[i][j];
    }
  return (mat_1);
}
