/*
** utilities.c for  in /home/BLENEA_T/Projects/math/103architect
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Dec  5 13:20:19 2016 Thomas BLENEAU
** Last update Mon Dec  5 20:40:57 2016 Thomas BLENEAU
*/

#include "../include/my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i = i + 1;
  return (s1[i] - s2[i]);
}

int	isnum(char *str)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '+')
	exit(84);
      i = i + 1;
    }
  return (1);
}
