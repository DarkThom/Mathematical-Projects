/*
** str.c for 109 in /home/THOMAZ_C/109titration/src/usefull/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar 20 17:43:38 2017 Corentin Thomazeau
** Last update Mon Mar 20 19:05:40 2017 Corentin Thomazeau
*/

#include <stdlib.h>

char	*use_getpart(const char *const str, const int start, const int end)
{
  char	*ret;
  int	i;

  i = 0;
  if ((ret = malloc(sizeof(char) * (end - start + 1))) == 0)
    return (0);
  while (start + i < end)
    {
      ret[i] = str[start + i];
      i++;
    }
  ret[i] = 0;
  return (ret);
}

int	use_strlen(const char *const str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      i++;
    }
  return (i);
}

int	use_testfloat(const char *const str)
{
  int	point;
  int	i;

  i = 0;
  point = 0;
  while (str[i])
    {
      if (str[i] == '.')
	{
	  if (point != 0)
	    return (1);
	  point = 1;
	}
      else if (str[i] < 48 || str[i] > 57)
	return (1);
      i++;
    }
  return (0);
}

int	use_strcmp(const char *const first, const char *const second)
{
  int	i;

  i = 0;
  while (first[i] != 0 || second[i] != 0)
    {
      if (first[i] != second[i])
	return (first[i] - second[i]);
      i++;
    }
  return (first[i] - second[i]);
}
