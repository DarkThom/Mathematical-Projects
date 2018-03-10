/*
** display_key_matrix.c for  in /home/BLENEA_T/Projects/102cipher
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Nov 26 19:27:25 2016 Thomas BLENEAU
** Last update Wed Nov 30 12:51:08 2016 Thomas BLENEAU
*/

#include "../include/my.h"

void	display_key_matrix(int size, int *tab)
{
  if (size == 1)
    printf("%d\n", tab[0]);
  else if (size >= 2 && size <= 4)
    printf("%d\t%d\n%d\t%d\n", tab[0], tab[1], tab[2], tab[3]);
  else if (size >= 5 && size <= 9)
    printf("%d\t%d\t%d\n%d\t%d\t%d\n%d\t%d\t%d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8]);
  else if (size >= 10 && size <= 16)
    {
      printf("%d\t%d\t%d\t%d\n", tab[0], tab[1], tab[2], tab[3]);
      printf("%d\t%d\t%d\t%d\n", tab[4], tab[5], tab[6], tab[7]);
      printf("%d\t%d\t%d\t%d\n", tab[8], tab[9], tab[10], tab[11]);
      printf("%d\t%d\t%d\t%d\n", tab[12], tab[13], tab[14], tab[15]);
    }
}
