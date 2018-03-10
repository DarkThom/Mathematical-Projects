/*
** display_matrix.c for  in /home/BLENEA_T/Projects/Semestre_2/math/108trigo
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Thu Mar  9 15:05:48 2017 Thomas BLENEAU
** Last update Thu Mar 16 14:29:37 2017 Thomas BLENEAU
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

int	display_matrix(double **mat, int size)
{
  int	i;
  int	j;

  i = -1;
  while (++i < size)
    {
      j = -1;
      while (++j < size)
	{
	  printf("%.2f", mat[i][j]);
	  if (j == (size - 1))
	    printf("\n");
	  else
	    printf("\t");
	}
    }
  return (0);
}
