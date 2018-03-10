/*
** args.c for 108 in /home/THOMAZ_C/108trigo/src/error/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar  6 17:51:32 2017 Corentin Thomazeau
** Last update Mon Mar  6 17:55:02 2017 Corentin Thomazeau
*/

#include <unistd.h>

int	error_display(const char *str)
{
  int	i;

  i = 0;
  write(2, "Error - ", 8);
  while (str[i++]);
  write(2, str, i);
  write(2, "\n", 1);
  return (84);
}
