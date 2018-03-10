/*
** error.c for 109 in /home/THOMAZ_C/109titration/src/usefull/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar 20 17:14:35 2017 Corentin Thomazeau
** Last update Mon Mar 20 18:12:03 2017 Corentin Thomazeau
*/

#include <unistd.h>
#include "m_use.h"

int		use_errs(const char *const str)
{
  int		i;

  i = 0;
  write(2, "Error - ", 8);
  while (str[i] != 0)
    i++;
  write(2, str, i);
  write(2, "\n", 1);
  return (84);
}

t_point	*use_errp(const char *const str)
{
  int		i;

  i = 0;
  write(2, "Error - ", 8);
  while (str[i] != 0)
    i++;
  write(2, str, i);
  write(2, "\n", 1);
  return (0);
}
