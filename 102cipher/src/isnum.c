/*
** isnum.c for  in /home/BLENEA_T/Projects/101pong
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Nov  7 18:02:59 2016 Thomas BLENEAU
** Last update Mon Nov 28 18:39:47 2016 Thomas BLENEAU
*/

#include "../include/my.h"

int	isnum(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < '0' || str[i] > '9') && str[i] != 32)
	return (84);
      i = i + 1;
    }
  return (1);
}
