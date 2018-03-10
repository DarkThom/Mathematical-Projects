/*
** parsing_file.c for  in /home/BLENEA_T/Projects/Semestre_2/math/107transfer
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sun Feb 19 22:02:34 2017 Thomas BLENEAU
** Last update Mon Feb 27 21:16:59 2017 Corentin Thomazeau
*/

#include "my.h"

void	swap_int(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}

void	swap_tab(int *tab, int size)
{
  int	i;

  i = -1;
  while (++i <= (size / 2))
    swap_int(&tab[size - i - 1], &tab[i]);
}

int	char_nbr(char c)
{
  int	nbr;
  int	sign;

  nbr = 0;
  sign = char_sign(c);
  if (c != '\0' && (c >= '0' && c <= '9'))
    nbr = nbr * 10 + c - 48;
  if ((sign % 2) == 1)
    return (nbr * -1);
  return (nbr);
}

int	count_nbr(char *str)
{
  int	i;
  int	nb;

  i = -1;
  nb = 0;
  while (str && str[++i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	nb = nb + 1;
    }
  return (nb);
}

int	*parsing_file(char *str)
{
  int	i;
  int	j;
  int	*tab;
  int	cpt;

  i = 1;
  j = -1;
  cpt = count_nbr(str);
  if ((tab = malloc(sizeof(int) * (cpt + 1))) == NULL)
    return (0);
  tab[0] = cpt;
  while (str && str[++j])
    {
      if (str[j] >= '0' && str[j] <= '9')
	tab[i] = char_nbr(str[j]);
      else
	i = i + 1;
    }
  swap_tab(tab, count_nbr(str));
  return (tab);
}
