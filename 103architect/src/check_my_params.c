/*
1;2802;0c** check_my_params.c for  in /home/BLENEA_T/Projects/math/103architect
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Thu Dec 15 15:07:25 2016 Thomas BLENEAU
** Last update Thu Jan 12 13:47:24 2017 Thomas BLENEAU
*/

#include "../include/my.h"

int     check_error_params(int ac, char **av)
{
  int   i;

  i = 2;
  if (ac < 5)
    return (1);
  else if (isnum(av[1]) != 1 && isnum(av[2]) != 1)
    return (1);
  else
    {
      while (++i < ac)
	{
	  if ((my_strcmp(av[i], "-t") == 0) || (my_strcmp(av[i], "-h") == 0))
	    {
	      if (isnum(av[i + 1]) != 1 && isnum(av[i + 2]) != 1)
		return (1);
	    }
	  else if ((my_strcmp(av[i], "-r") == 0) || (my_strcmp(av[i], "-s") == 0))
	    {
	      if (isnum(av[i + 1]) != 1)
		return (1);
	    }
	}
    }
  return (0);
}

void	check_my_flags(int ac, char **av)
{
  int	i;

  i = 2;
  while (++i < ac)
    {
      if (my_strcmp(av[i], "-t") == 0)
	display_translation(av[i + 1], av[i + 2]);
      else if (my_strcmp(av[i], "-h") == 0)
	display_homotheties(av[i + 1], av[i + 2]);
      else if (my_strcmp(av[i], "-r") == 0)
	display_rotation(av[i + 1]);
      else if (my_strcmp(av[i], "-s") == 0)
	display_symetric(av[i + 1]);
    }
}

void		check_all_params(int ac, char **av)
{
  int		i;
  double	*matrix;

  i = ac;
  matrix = new_matrix();
  while (i != 3)
    {
      if (my_strcmp(av[i - 2], "-r") == 0)
	matrix = matrix_3x3(matrix, matrix_rotation(atoi(av[i - 1])));
      else if (my_strcmp(av[i - 2], "-s") == 0)
	matrix = matrix_3x3(matrix, matrix_symetric(atoi(av[i - 1])));
      else if (my_strcmp(av[i - 3], "-t") == 0)
	matrix = matrix_3x3(matrix, matrix_translation(atoi(av[i - 2]), atoi(av[i - 1])));
      else if (my_strcmp(av[i - 3], "-h") == 0)
	matrix = matrix_3x3(matrix, matrix_homotheties(atoi(av[i - 2]), atoi(av[i - 1])));
      i = i - 1;
    }
  display_matrix(matrix);
}

double		*check_final_point(int ac, char **av)
{
  int		i;
  double	*matrix_final;

  i = ac;
  matrix_final = new_matrix();
  while (i != 3)
    {
      if (my_strcmp(av[i - 2], "-r") == 0)
	matrix_final = matrix_3x3(matrix_final, matrix_rotation(atoi(av[i - 1])));
      else if (my_strcmp(av[i - 2], "-s") == 0)
	matrix_final = matrix_3x3(matrix_final, matrix_symetric(atoi(av[i - 1])));
      else if (my_strcmp(av[i - 3], "-t") == 0)
	matrix_final = matrix_3x3(matrix_final, matrix_translation(atoi(av[i - 2]), atoi(av[i - 1])));
      else if (my_strcmp(av[i - 3], "-h") == 0)
	matrix_final = matrix_3x3(matrix_final, matrix_homotheties(atoi(av[i - 2]), atoi(av[i - 1])));
      i = i - 1;
    }
  return (matrix_final);
}
