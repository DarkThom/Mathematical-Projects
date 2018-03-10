/*
** isnum.c for  in /home/BLENEA_T/Projects/101pong
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Nov  7 18:02:59 2016 Thomas BLENEAU
** Last update Thu Nov 17 15:21:37 2016 Thomas BLENEAU
*/

#include "include/my.h"

int	isnum(char *str)
{
  int   i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '.' && str[i] != '+')
	return (84);
      else if (str[i] == '.')
	count = count + 1;
      i = i + 1;
    }
  if (count > 1)
    return (84);
  return (1);
}
