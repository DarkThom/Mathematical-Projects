/*
** my_putnbr_double.c for  in /home/BLENEA_T/Projects/math/105torus/src
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Thu Nov 17 09:58:33 2016 Thomas BLENEAU
** Last update Fri Jan 20 19:51:30 2017 Thomas BLENEAU
*/

#include "my.h"

double  check_sign_float(double nb)
{
  if (nb < 0)
    {
      write(1, "-", 1);
      nb = nb * -1;
    }
  return (nb);
}

int	my_diviseur(int nb)
{
  int   div;

  div = 1;
  while (nb > 9)
    {
      nb = nb / 10;
      div = div * 10;
    }
  return (div);
}

void	my_put_nbr(int nb)
{
  int   div;
  char	c;

  div = my_diviseur(nb);
  while (div != 0)
    {
      c = (nb / div + 48);
      write(1, &c, 1);
      nb = nb % div;
      div = div / 10;
    }
}

long double		nbr_arrondi(long double nb, long double p)
{
  long double	nb_arr;
  long double	nb_copy;
  long		result;

  nb_copy = nb * pow(10, p);
  result = (long) nb_copy;
  nb_arr = 0.5 *  pow(0.1, p);
  if (nb_copy - (long double) result > 0)
    nb = nb + nb_arr;
  return (nb);
}

void	my_putnbr_double(long double nb, long double p)
{
  int	i;

  i = -1;
  nb = nb * pow(10, p);
  if ((nb - floor(nb)) > 0.5)
    nb = nb + 0.5;
  nb = nb / pow(10, p);
  printf("%.0f", floor(nb));
  nb = nb - floor(nb);
  printf(".");
  while (++i < p && nb != 0)
    {
      nb = nb * 10.0;
      printf("%.0f", floor(nb));
      nb = nb - floor(nb);
    }
}
