/*
** 108trigo.c for  in /home/BLENEA_T/Projects/Semestre_2/math/108trigo
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Mar  6 17:23:56 2017 Thomas BLENEAU
** Last update Thu Mar 16 14:54:16 2017 Corentin Thomazeau
*/

#include "m_matrix.h"
#include "m_error.h"
#include "m_args.h"
#include "my.h"

int		main(int ac, char **av)
{
  int		type;
  int		size;
  double	**mat;

  if (ac < 2)
    return (error_display("Invalid argument number"));
  if (ac == 2 && (str_cmp(av[1], "-h")) == 0)
    return (help_command());
  if ((type = args_core(ac, av)) == 84)
    return (84);
  if ((size = args_size_mat(ac - 2)) == 0)
    return (error_display("Unvalid matrix size"));
  if ((mat = matrix_create(av, size)) == 0)
    return (error_display("Memory allocation failed"));
  type = args_aiguillage(type, mat, size);
  matrix_delete(mat, size);
  if (type != 0)
    return (84);
  return (0);
}
