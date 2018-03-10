/*
** calc_final_point.c for  in /home/BLENEA_T/Projects/math/103architect
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Tue Dec  6 14:04:43 2016 Thomas BLENEAU
** Last update Fri Dec 16 21:52:38 2016 Thomas BLENEAU
*/

#include "../include/my.h"

double		*new_point()
{
  double	*point;

  point = malloc(sizeof(double) * 2);
  point[0] = 0.0;
  point[1] = 0.0;
  return (point);
}

double		*final_point(char **av, double *matrice_final)
{
  double	X[2] = {atof(av[1]), atof(av[2])};
  double	*point;

  point = new_point();
  point[0] = (matrice_final[0] * X[0]) + (matrice_final[1] * X[1]) + (matrice_final[2]);
  point[1] = (matrice_final[3] * X[0]) + (matrice_final[4] * X[1]) + (matrice_final[5]);
  return (point);
}
