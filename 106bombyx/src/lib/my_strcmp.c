/*
** my_strcmp.c for  in /home/BLENEA_T/Projects/Semestre_2/math/106bombyx
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb  6 17:54:46 2017 Thomas BLENEAU
** Last update Mon Feb  6 18:26:56 2017 Thomas BLENEAU
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i = i + 1;
  return (s1[i] - s2[i]);
}
