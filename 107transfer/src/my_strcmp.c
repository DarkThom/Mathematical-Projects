/*
** my_strcmp.c for  in /home/BLENEA_T/Projects/Semestre_2/math/107transfer
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Thu Feb 16 16:30:32 2017 Thomas BLENEAU
** Last update Thu Feb 16 16:32:42 2017 Thomas BLENEAU
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1 && s2 && s1[i] && s2[i] && s1[i] == s2[i])
    i = i + 1;
  return (s1[i] - s2[i]);
}
