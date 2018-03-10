/*
** utilities.c for  in /home/BLENEA_T/Projects/math/105torus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Jan  9 11:24:39 2017 Thomas BLENEAU
** Last update Fri Jan 20 19:53:30 2017 Thomas BLENEAU
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i = i + 1;
  return (s1[i] - s2[i]);
}

int     my_str_isnum(char *str)
{
  int   i;
  int   count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '.' && str[i] != '+')
	return (1);
      else if (str[i] == '.')
	count = count + 1;
      i = i + 1;
    }
  if (count > 1)
    return (1);
  return (0);
}

int     my_other_isnum(char *str)
{
  int   i;

  i = -1;
  while (str[++i] != '\0')
    {
      if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '+')
	return (1);
    }
  return (0);
}
