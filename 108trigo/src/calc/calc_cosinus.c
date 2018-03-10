/*
** calc_cosinus.c for  in /home/BLENEA_T/Projects/Semestre_2/math/108trigo
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Tue Mar  7 18:52:15 2017 Thomas BLENEAU
** Last update Thu Mar 16 15:06:34 2017 Thomas BLENEAU
*/

#include "m_matrix.h"
#include "m_args.h"
#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		calc_cosinus(double **mat, int size)
{
  int		i;
  double	**res;
  double	**y;

  i = 2;
  if ((mat = calc_prod_mat(mat, mat, size)) == NULL)
    return (1);
  res = matrix_create_identitee(size);
  y = matrix_create_identitee(size);
  while (i < 100)
    {
      if ((y = calc_prod_mat(mat, y, size)) == NULL)
	return (1);
      y = calc_div_mat(&i, y, size);
      res = calc_add_mat(res, y, size);
      i = i + 2;
    }
  return (display_matrix(res, size));
}
