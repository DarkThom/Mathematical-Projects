/*
** isnum_v2.c for  in /home/BLENEA_T/Projects/101pong
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Nov  7 23:07:36 2016 Thomas BLENEAU
** Last update Thu Nov 17 16:13:34 2016 Thomas BLENEAU
*/

#include "include/my.h"

int     isnum_v2(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] <= '0' || str[i] > '9') && str[i] != '+')
	return (84);
      i = i + 1;
    }
  return (1);
}
