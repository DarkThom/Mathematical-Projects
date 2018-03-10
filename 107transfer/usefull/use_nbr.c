/*
** use_nbr.c for transfer in /home/THOMAZ_C/107transfer/plop/usefull/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Feb 27 17:16:17 2017 Corentin Thomazeau
** Last update Thu Mar  2 13:50:56 2017 Corentin Thomazeau
*/

int	my_tst_nbr(const char *const str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    {
      if ((str[i] != '*' && str[i] < 48) || str[i] > 57)
	{
	  if (!(str[i] == '-' && (i == 0 || str[i - 1] == '*')))
	    return (1);
	}
      i++;
    }
  return (0);
}

int	my_get_nbr(const char *const str)
{
  int	i;
  int	ret;

  ret = 0;
  i = 0;
  while (str[i] != 0)
    {
      ret = ret * 10;
      ret += str[i] - 48;
      i++;
    }
  return (ret);
}
