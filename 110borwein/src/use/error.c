/*
** error.c for 110 in /home/THOMAZ_C/110borwein/src/use/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Apr  3 17:26:01 2017 Corentin Thomazeau
** Last update Mon Apr  3 17:42:42 2017 Corentin Thomazeau
*/

#include <unistd.h>

int	errs(const char *const str)
{
  int	i;

  i = -1;
  while (str[++i]);
  write(2, "Error - ", 8);
  write(2, str, i);
  write(2, "\n", 1);
  return (84);
}
