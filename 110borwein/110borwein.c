/*
** 110borwein.c for  in /home/BLENEA_T/Projects/Semestre_2/math/110borwein
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Apr  3 11:39:31 2017 Thomas BLENEAU
** Last update Mon Apr  3 17:50:23 2017 Thomas BLENEAU
*/

#include <unistd.h>
#include "my.h"
#include "m_use.h"

int	help_command()
{
  if ((write(1, "USAGE\n\t\t./110borwein n\n"
	     "DESCRIPTION\n\t\tn\tconstant defining"
	     "the integral to be computed\n", 84)) < 0)
    return (84);
  return (0);
}

int	main(int ac, char **av)
{
  if (ac != 2)
    return (errs("Bad number of arguments"));
  if (str_isnum(av[1]))
    return (errs("Use only integers"));
  if (str_cmp(av[1], "-h") == 0)
    return (help_command());
  return (calc_base(av[1]));
}
