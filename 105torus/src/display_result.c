/*
** display_result.c for  in /home/BLENEA_T/Projects/math/105torus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Tue Jan 17 19:34:15 2017 Thomas BLENEAU
** Last update Fri Jan 20 19:53:12 2017 Thomas BLENEAU
*/

#include "my.h"

void	display_result(long double nb, long double p)
{
  printf("x = ");
  my_putnbr_double(nb, p);
  printf("\n");
}
