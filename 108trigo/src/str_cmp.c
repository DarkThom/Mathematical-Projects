/*
** str_cmp.c for  in /home/BLENEA_T/Projects/Semestre_2/math/108trigo
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Mar  6 17:56:00 2017 Thomas BLENEAU
** Last update Mon Mar  6 17:57:05 2017 Thomas BLENEAU
*/

#include "my.h"

int	str_cmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1 && s2 && s1[i] && s2[i] && s1[i] == s2[i])
    i = i + 1;
  return (s1[i] - s2[i]);
}
