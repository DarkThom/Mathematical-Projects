/*
** calc_derivative.c for  in /home/BLENEA_T/Projects/Semestre_2/math/109titration
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Mar 20 17:10:17 2017 Thomas BLENEAU
** Last update Thu Mar 30 15:59:06 2017 Thomas BLENEAU
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "my.h"
#include "struct.h"

double		*calc_derivative(t_point *param, int len, int *t_max)
{
  int		t = 0;
  int		k = 0;
  double	max = 0;
  double	*deriv;
  t_point	*tmp;

  if (param == NULL || param->next == NULL)
    return (NULL);
  tmp = param->next;
  if ((deriv = malloc(sizeof(double) * (len + 1))) == NULL)
    return (NULL);
  while (++t <= (len - 1) && tmp->next != NULL)
    {
      if ((tmp->next->vol - tmp->prev->vol) == 0)
	deriv[k] = 0.0;
      else
	deriv[k] = (tmp->next->ph - tmp->prev->ph) / (tmp->next->vol - tmp->prev->vol);
      if (deriv[k] > max)
	{
	  max = deriv[k];
	  *t_max = t;
	}
      tmp = tmp->next;
      k = k + 1;
    }
  display_derivative(deriv, param, (*t_max + 1));
  return (deriv);
}

double		*second_derivative(t_point *param, int len, double *deriv)
{
  int		j = 0;
  int		t = 1;
  double	*sec_deriv;
  t_point	*tmp;

  if (param == NULL || param->next == NULL || param->next->next == NULL)
    return (NULL);
  tmp = param->next->next;
  if ((sec_deriv = malloc(sizeof(double) * (len + 1))) == NULL)
    return (NULL);
  while (t < (len - 2) && tmp->next->next != NULL)
    {
      if ((tmp->next->vol - tmp->prev->vol) == 0)
	sec_deriv[j] = 0.0;
      else
	sec_deriv[j] = ((deriv[t + 1] - deriv[t - 1]) / (tmp->next->vol - tmp->prev->vol));
      tmp = tmp->next;
      t = t + 1;
      j = j + 1;
    }
  display_sec_derivative(sec_deriv, param);
  return (sec_deriv);
}

int		estimated_derivative(t_point *param, double *sec_deriv, int t_max)
{
  int		k = 0;
  int		j = 0;
  double	p = 0;
  double	p_2 = 0;
  double	nb = 0;
  double	nb_2 = 0;
  double	*est_deriv;
  t_point	*tmp;

  if (param == NULL)
    return (1);
  tmp = param;
  while (tmp != NULL && j != t_max)
    {
      tmp = tmp->next;
      j++;
    }
  if (tmp->prev == NULL || tmp->next == NULL)
    return (0);
  nb = ((tmp->vol) - (tmp->prev->vol)) / 0.1;
  nb_2 = ((tmp->next->vol) - (tmp->vol)) / 0.1;
  p = (((sec_deriv[t_max - 2] - sec_deriv[t_max - 3])) / ((tmp->vol) - (tmp->prev->vol))) * 0.1;
  if ((est_deriv = malloc(sizeof(double) * (nb + nb_2 + 1))) == NULL)
    return (1);
  printf("\nSecond derivative estimated:\n");
  while (k <= nb)
    {
      est_deriv[k] = sec_deriv[t_max - 3] + (p * k);
      printf("volume: %g ml -> %.2f\n", ((tmp->prev->vol) + (0.1 * k)), est_deriv[k]);
      k = k + 1;
    }
  j = 1;
  p_2 = (((sec_deriv[t_max - 1] - sec_deriv[t_max - 2])) / ((tmp->next->vol) - (tmp->vol))) * 0.1;
  while (k <= nb + nb_2)
    {
      est_deriv[k] = sec_deriv[t_max - 2] + (p_2 * j);
      printf("volume: %g ml -> %.2f\n", ((tmp->vol) + (0.1 * j)), est_deriv[k]);
      k = k + 1;
      j = j + 1;
    }
  j = -1;
  k = 0;
  while (++j <= nb + nb_2)
    {
      if ((est_deriv[k] * est_deriv[k + 1]) <= 0)
	break ;
      k = k + 1;
    }
  printf("\nEquivalent point at %0.1f ml\n", (tmp->prev->vol + (0.1 * k)));
  return (0);
}
