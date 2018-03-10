/*
** str_isnum.c for  in /home/BLENEA_T/Projects/Semestre_2/math/110borwein
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Apr  3 17:44:59 2017 Thomas BLENEAU
** Last update Mon Apr  3 17:46:16 2017 Thomas BLENEAU
*/

#include "my.h"

int	str_isnum(char *str)
{
  int	i;

  i = -1;
  while (str && str[++i] != '\0')
    {
      if ((str[i] < '0' || str[i] > '9') && str[i] != '-'
	  && str[i] != '+')
	return (1);
    }
  return (0);
}
