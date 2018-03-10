/*
** str_isnum.c for  in /home/BLENEA_T/Projects/Semestre_2/math/107transfer
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Fri Feb 17 13:01:38 2017 Thomas BLENEAU
** Last update Fri Feb 17 13:06:05 2017 Thomas BLENEAU
*/

#include "my.h"

int	str_isnum(char *str)
{
  int	i;

  i = -1;
  while (str && str[++i] != '\0')
    {
      if ((str[i] < '0' || str[i] > '9')
	  && str[i] != '-' && str[i] != '*')
	return (1);
    }
  return (0);
}
