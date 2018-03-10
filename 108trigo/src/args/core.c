/*
** core.c for 108 in /home/THOMAZ_C/108trigo/src/args/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar  6 17:41:25 2017 Corentin Thomazeau
** Last update Mon Mar  6 18:29:52 2017 Corentin Thomazeau
*/

#include "m_error.h"
#include "m_args.h"

int	args_core(int ac, char **av)
{
  int	type;

  type = 0;
  if ((type = args_value_first(av[1])) == 84)
    return (error_display("Unknow calcul type"));
  if (args_value_number(ac, av))
    return (error_display("Invalid numbers"));
  return (type);
}
