/*
** str_cmp.c for  in /home/BLENEA_T/Projects/Semestre_2/math/110borwein
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Apr  3 11:37:46 2017 Thomas BLENEAU
** Last update Mon Apr  3 11:38:52 2017 Thomas BLENEAU
*/

#include <stdlib.h>
#include "my.h"

int	str_cmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1 && s2 && s1[i] && s2[i] && s1[i] == s2[i])
    i = i + 1;
  return (s1[i] - s2[i]);
}
