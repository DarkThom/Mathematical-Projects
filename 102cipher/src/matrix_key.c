/*
** calc_key_matrix.c for  in /home/BLENEA_T/Projects/102cipher
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Nov 26 19:24:39 2016 Thomas BLENEAU
** Last update Sun Nov 27 13:40:30 2016 Thomas BLENEAU
*/

#include "../include/my.h"

int	*key_matrix(char *str, int *tab)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      str[i] = (int) str[i];
      tab[i] = str[i];
      i = i + 1;
    }
  return (tab);
}

int	*invkey_matrix(char *str, int *tab)
{
  int   i;

  i = 0;
  while (str[i] != '\0')
    {
      str[i] = (int) str[i];
      tab[i] = str[i];
      i = i + 1;
    }
  return (tab);
}
