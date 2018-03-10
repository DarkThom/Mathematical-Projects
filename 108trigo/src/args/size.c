/*
** size.c for 108 in /home/THOMAZ_C/108trigo/src/args/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar  6 17:42:42 2017 Corentin Thomazeau
** Last update Mon Mar  6 17:51:47 2017 Corentin Thomazeau
*/

#include "m_def.h"

int	args_size_mat(int ac)
{
  int	i;

  i = MAT_SIZE_MIN;
  while (i <= MAT_SIZE_MAX)
    {
      if (i * i == ac)
	return (i);
      i++;
    }
  return (0);
}
