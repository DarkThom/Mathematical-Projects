/*
** main.c for transfer in /home/THOMAZ_C/107transfer/plop/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Feb 27 16:38:26 2017 Corentin Thomazeau
** Last update Tue Feb 28 17:38:19 2017 Thomas BLENEAU
*/

#include <unistd.h>
#include "m_start.h"
#include "m_use.h"
#include "my.h"

int	disp_err(const char *const str)
{
  int	i;

  i = 0;
  while (str[i++] != 0);
  write(2, "Error - ", 8);
  write(2, str, i);
  write(2, "\n", 1);
  return (84);
}

int	main(const int ac, const char *const *const av)
{
  if (ac == 1)
    return (disp_err("Program needs arguments"));
  if (ac == 2 && !my_str_cmp(av[1], "-h"))
    return (help_command());
  if (ac % 2 == 0)
    return (disp_err("Program needs couple of equations"));
  return (start_equa(ac, av));
}
