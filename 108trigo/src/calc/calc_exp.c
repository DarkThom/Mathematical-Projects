/*
** calc_exp.c for 108 in /home/THOMAZ_C/108trigo/src/calc/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Thu Mar 16 14:21:01 2017 Corentin Thomazeau
** Last update Thu Mar 16 15:39:21 2017 Thomas BLENEAU
*/

#include <math.h>
#include "m_matrix.h"
#include "my.h"

double		**calc_exp_double(double **mat, int size)
{
  double	**res;
  double	**y;
  int		i;

  i = 1;
  res = matrix_create_identitee(size);
  y = matrix_create_identitee(size);
  while (i < 100)
    {
      y = calc_prod_mat(mat, y, size);
      y = matrix_divide(y, size, i);
      res = calc_add_mat(res, y, size);
      i++;
    }
  return (res);
}

int	calc_exp(double **mat, int size)
{
  mat = calc_exp_double(mat, size);
  if (mat == 0)
    return (84);
  display_matrix(mat, size);
  return (0);
}
