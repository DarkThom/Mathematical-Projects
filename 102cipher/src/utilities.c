/*
** utilities.c for  in /home/BLENEA_T/Projects/102cipher
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Nov 21 18:24:07 2016 Thomas BLENEAU
** Last update Sat Nov 26 19:35:54 2016 Thomas BLENEAU
*/

#include "../include/my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i = i + 1;
  return (s1[i] - s2[i]);
}
