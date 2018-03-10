/*
** calc_sinus.c for  in /home/BLENEA_T/Projects/Semestre_2/math/108trigo
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Thu Mar  9 14:41:57 2017 Thomas BLENEAU
** Last update Thu Mar 16 14:44:54 2017 Thomas BLENEAU
*/

#include "my.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double		**calc_div_mat(int *i, double **y, int size)
{
  int		inc;
  int		inc_2;

  inc = -1;
  while (++inc < size)
    {
      inc_2 = -1;
      while (++inc_2 < size)
	y[inc][inc_2] = (y[inc][inc_2] / *i) / ((*i - 1) * -1);
    }
  return (y);
}

int		calc_sinus(double **mat, int size)
{
  int		i;
  double	**y;
  double	**res;
  double	**mat_carre;

  i = 3;
  res = matrix_copy(mat, size);
  y = matrix_copy(mat, size);
  if ((mat_carre = calc_prod_mat(mat, mat, size)) == NULL)
    return (1);
  while (i < 100)
    {
      if ((y = calc_prod_mat(mat_carre, y, size)) == NULL)
	return (1);
      y = calc_div_mat(&i, y, size);
      res = calc_add_mat(res, y, size);
      i = i + 2;
    }
  return (display_matrix(res, size));
}
