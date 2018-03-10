/*
** calc_matrix.c for  in /home/BLENEA_T/Projects/math/103architect
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Dec  5 17:19:25 2016 Thomas BLENEAU
** Last update Sat Dec 17 09:49:40 2016 Thomas BLENEAU
*/

#include "../include/my.h"

double		*new_matrix()
{
  double	*matrix;
  int		i;

  i = -1;
  matrix = malloc(sizeof(double) * 9);
  while (++i < 9)
    {
      if (i == 0 || i == 4 || i == 8)
	matrix[i] = 1.0;
      else
	matrix[i] = 0.0;
    }
  return (matrix);
}

double		*matrix_homotheties(int x, int y)
{
  double	*matrix;

  matrix = new_matrix();
  matrix[0] = x;
  matrix[4] = y;
  return (matrix);
}

double		*matrix_translation(int x, int y)
{
  double	*matrix;

  matrix = new_matrix();
  matrix[2] = x;
  matrix[5] = y;
  return (matrix);
}


double		*matrix_rotation(int angle)
{
  double	*matrix;
  double	angle_v2;

  matrix = new_matrix();
  angle_v2 = angle;
  angle_v2 = (angle_v2 * M_PI) / 180;
  matrix[0] = cos(angle_v2);
  matrix[1] = -sin(angle_v2);
  matrix[3] = sin(angle_v2);
  matrix[4] = cos(angle_v2);
  return (matrix);
}

double		*matrix_symetric(int angle)
{
  double	angle_v2;
  double	*matrix;

  matrix = new_matrix();
  angle_v2 = 2 * angle;
  angle_v2 = (angle_v2 * M_PI) / 180;
  matrix[0] = cos(angle_v2);
  matrix[1] = sin(angle_v2);
  matrix[3] = sin(angle_v2);
  matrix[4] = -cos(angle_v2);
  return (matrix);
}

double		*matrix_3x3(double *matrix_1, double *matrix_2)
{
  double	matrix_3[9] = {matrix_1[0], matrix_1[1], matrix_1[2], matrix_1[3], matrix_1[4], matrix_1[5], matrix_1[6], matrix_1[7], matrix_1[8]};

  matrix_1[0] = matrix_3[0] * matrix_2[0] + matrix_3[1] * matrix_2[3] + matrix_3[2] * matrix_2[6];
  matrix_1[1] = matrix_3[0] * matrix_2[1] + matrix_3[1] * matrix_2[4] + matrix_3[2] * matrix_2[7];
  matrix_1[2] = matrix_3[0] * matrix_2[2] + matrix_3[1] * matrix_2[5] + matrix_3[2] * matrix_2[8];
  matrix_1[3] = matrix_3[3] * matrix_2[0] + matrix_3[4] * matrix_2[3] + matrix_3[5] * matrix_2[6];
  matrix_1[4] = matrix_3[3] * matrix_2[1] + matrix_3[4] * matrix_2[4] + matrix_3[5] * matrix_2[7];
  matrix_1[5] = matrix_3[3] * matrix_2[2] + matrix_3[4] * matrix_2[5] + matrix_3[5] * matrix_2[8];
  matrix_1[6] = matrix_3[6] * matrix_2[0] + matrix_3[7] * matrix_2[3] + matrix_3[8] * matrix_2[6];
  matrix_1[7] = matrix_3[6] * matrix_2[1] + matrix_3[7] * matrix_2[4] + matrix_3[8] * matrix_2[7];
  matrix_1[8] = matrix_3[6] * matrix_2[2] + matrix_3[7] * matrix_2[5] + matrix_3[8] * matrix_2[8];
  return (matrix_1);
}
