/*
** display_it.c for  in /home/THOMAZ_C/107transfer/calc/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Thu Feb 16 17:11:22 2017 Corentin Thomazeau
** Last update Tue Feb 28 22:12:50 2017 Thomas BLENEAU
*/

#include <unistd.h>
#include <stdio.h>

int	non_zero(char c)
{
  if (c >= '1' && c <= '9')
    return (1);
  return (0);
}

void	display_it(double nb, double result)
{
  char	buffer[6];

  sprintf(buffer, "%.3f", nb);
  if (buffer[2] == '0' && buffer[3] == '0' && buffer[4] == '0')
    printf("%.0f->%.5f\n", nb, result);
  else if (buffer[2] == '0' && (non_zero(buffer[3])) && buffer[4] == '0')
    printf("%.2f->%.5f\n", nb, result);
  else if ((non_zero(buffer[2])) && buffer[3] == '0' && buffer[4] == '0')
    printf("%.1f->%.5f\n", nb, result);
  else
    printf("%.3f->%.5f\n", nb, result);
}
