/*
** display_derivative.c for  in /home/BLENEA_T/Projects/Semestre_2/math/109titration
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Mar 20 18:30:38 2017 Thomas BLENEAU
** Last update Thu Mar 30 15:05:45 2017 Thomas BLENEAU
*/

#include <stdlib.h>
#include "struct.h"
#include "my.h"
#include <stdio.h>

int		display_derivative(double *deriv, t_point *param, double max)
{
  int		i = 0;
  t_point	*tmp;

  tmp = param->next;
  printf("Derivative:\n");
  while (tmp->next != NULL)
    {
      printf("volume: %g ml -> %.2f\n", tmp->vol, deriv[i]);
      i = i + 1;
      tmp = tmp->next;
    }
  printf("\nEquivalent point at %g ml\n\n", max);
  return (0);
}

int		display_sec_derivative(double *deriv, t_point *param)
{
  int		i = 0;
  t_point	*tmp;

  tmp = param->next->next;
  printf("Second derivative:\n");
  while (tmp->next->next != NULL)
    {
      printf("volume: %g ml -> %.2f\n", tmp->vol, deriv[i++]);
      tmp = tmp->next;
    }
  return (0);
}
