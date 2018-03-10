/*
** operate.c for 108 in /home/THOMAZ_C/108trigo/src/matrix/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Thu Mar 16 14:44:46 2017 Corentin Thomazeau
** Last update Thu Mar 16 15:49:08 2017 Corentin Thomazeau
*/

double		**matrix_initialize(double **mat, int size)
{
  int		i;
  int		j;

  i = 0;
  while (i < size)
    {
      j = 0;
      while (j < size)
	{
	  mat[i][j] = 0;
	  j++;
	}
      i++;
    }
  return (mat);
}

double		**matrix_negate(double **mat, int size)
{
  int		i;
  int		j;

  i = 0;
  while (i < size)
    {
      j = 0;
      while (j < size)
	{
	  if (mat[i][j] != 0)
	    mat[i][j] = mat[i][j] * -1;
	  j++;
	}
      i++;
    }
  return (mat);
}

double		**matrix_divide(double **mat, int size, int div)
{
  int		i;
  int		j;

  i = 0;
  while (i < size)
    {
      j = 0;
      while (j < size)
	{
	  mat[i][j] = mat[i][j] / (float) div;
	  j++;
	}
      i++;
    }
  return (mat);
}
