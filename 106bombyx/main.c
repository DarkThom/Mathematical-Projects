/*
** main.c for  in /home/BLENEA_T/Projects/Semestre_2/math/106bombyx
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb  6 17:50:52 2017 Thomas BLENEAU
** Last update Tue Feb  7 09:56:28 2017 Corentin Thomazeau
*/

#include "my.h"

int	print_error(const char *const str)
{
  int	i;

  i = 0;
  write(2, "Error - ", 8);
  while (str[i++] != 0);
  write(2, str, i);
  write(2, "\n", 1);
  return (84);
}

int	main(int ac, char **av)
{
  if (ac < 2 || ac > 4)
    return (print_error("Wrong number of argument"));
  switch (ac)
    {
    case 2:
      if (my_strcmp(av[1], "-h") == 0)
	help_command();
      else
	return (print_error("Unknow flag"));
      break;
    case 3:
      if ((!(error_check_nbr_int(av[1])))
	  || (!(error_check_nbr_double(av[2]))))
	return (print_error("Invalid number(s)"));
      else
	return (calc_base(atoi(av[1]), atof(av[2])));
      break;
    case 4:
      if ((!(error_check_nbr_int(av[1]))) || (!(error_check_nbr_int(av[2])))
	  || (!(error_check_nbr_int(av[3]))))
	return (print_error("Invalid number(s)"));
      else
	return (calc_complex(atoi(av[1]), atof(av[2]), atof(av[3])));
      break;
    }
  return (0);
}
