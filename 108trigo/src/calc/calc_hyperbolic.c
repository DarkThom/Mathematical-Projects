/*
** calc_hyperbolic.c for  in /home/BLENEA_T/Projects/Semestre_2/math/108trigo
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Thu Mar 16 15:25:20 2017 Thomas BLENEAU
** Last update Thu Mar 16 16:04:15 2017 Thomas BLENEAU
*/

#include "my.h"
#include "m_matrix.h"

int	hyperbolic_cosinus(double **mat, int size)
{
  double	**A;
  double	**B;
  double	**C;

  A = calc_exp_double(mat, size);
  B = calc_exp_double(matrix_negate(mat, size), size);
  C = calc_add_mat(A, B, size);
  C = matrix_divide(C, size, 2);
  return (display_matrix(C, size));
}

int	hyperbolic_sinus(double **mat, int size)
{
  double	**A;
  double	**B;
  double	**C;

  A = calc_exp_double(mat, size);
  B = calc_exp_double(matrix_negate(mat, size), size);
  C = calc_sub_mat(A, B, size);
  C = matrix_divide(C, size, 2);
  return (display_matrix(C, size));
}
