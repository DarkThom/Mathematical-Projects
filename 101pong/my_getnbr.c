/*
** my_getnbr.c for  in /home/BLENEA_T/Piscine/CPool_workshoplib
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Fri Oct 21 19:07:11 2016 Thomas BLENEAU
** Last update Thu Nov 17 16:06:54 2016 Thomas BLENEAU
*/

int	my_getnbr(char *str)
{
  int	i;
  int	nb;
  int	sign;

  i = 0;
  nb = 0;
  sign = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '.')
	return (84);
      i = i + 1;
    }
  i = 0;
  while (str[i] == '+' || str[i] == '-')
    {
      if (str[i] == '-')
	sign = sign + 1;
      i = i + 1;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      if (nb * 10 + str[i] - 48 < 0 || nb * 10 + str[i] - 48 >= 2147483647)
	return (0);
      nb = nb * 10 + str[i] - 48;
      i = i + 1;
    }
  if (sign % 2 == 0)
    return (nb);
  return (nb * -1);
}
