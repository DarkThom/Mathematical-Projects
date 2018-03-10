/*
** check_sign.c for  in /home/BLENEA_T/Projects/Semestre_2/math/107transfer
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb 20 19:11:47 2017 Thomas BLENEAU
** Last update Mon Feb 20 19:11:48 2017 Thomas BLENEAU
*/

#include "my.h"

int	nbr_sign(int nbr)
{
  if (nbr < 0)
    {
      write(1, "-", 1);
      nbr = nbr * -1;
    }
  return (nbr);
}

int	char_sign(char c)
{
  int	sign;

  sign = 0;
  if (c != '\0')
    {
      if (c == '-')
	sign = sign + 1;
      else if (c == '+')
	sign = sign - 1;
    }
  return (sign);
}
