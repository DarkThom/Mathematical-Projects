/*
** sort.c for 109 in /home/THOMAZ_C/109titration/src/open/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Thu Mar 30 14:30:55 2017 Corentin Thomazeau
** Last update Thu Mar 30 14:39:40 2017 Corentin Thomazeau
*/

#include "struct.h"

void		open_sort_swap(t_point *first, t_point *second)
{
  double	save[2];

  save[0] = first->vol;
  save[1] = first->ph;
  first->vol = second->vol;
  first->ph = second->ph;
  second->vol = save[0];
  second->ph = save[1];
}

void		open_sort_core(t_point *point)
{
  t_point	*tmp;

  tmp = point;
  while (tmp->next)
    {
      if (tmp->vol > tmp->next->vol)
	{
	  open_sort_swap(tmp, tmp->next);
	  tmp = point;
	}
      else
	tmp = tmp->next;
    }
}
