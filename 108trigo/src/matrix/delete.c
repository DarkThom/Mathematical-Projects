/*
** delete.c for 108 in /home/THOMAZ_C/108trigo/src/matrix/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar  6 18:49:01 2017 Corentin Thomazeau
** Last update Thu Mar 16 13:36:04 2017 Corentin Thomazeau
*/

#include <stdlib.h>

void	matrix_delete(double **mat, int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      free(mat[i]);
      i++;
    }
  free(mat);
}
