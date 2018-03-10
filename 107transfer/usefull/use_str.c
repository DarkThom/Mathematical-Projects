/*
** use_str.c for transfer in /home/THOMAZ_C/107transfer/plop/usefull/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Feb 27 17:07:28 2017 Corentin Thomazeau
** Last update Mon Feb 27 17:12:19 2017 Corentin Thomazeau
*/

#include <unistd.h>

void	my_put_str(const char *const str)
{
  int	i;

  i = 0;
  while (str[i++] != 0);
  write(1, str, i);
}

int	my_str_cmp(const char *const f, const char *const s)
{
  int	i;

  i = 0;
  while (f[i] != 0 || s[i] != 0)
    {
      if (f[i] - s[i] != 0)
	return (f[i] - s[i]);
      i++;
    }
  return (0);
}
