/*
** create.c for 109 in /home/THOMAZ_C/109titration/src/open/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar 20 17:24:37 2017 Corentin Thomazeau
** Last update Mon Mar 20 18:33:05 2017 Corentin Thomazeau
*/

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "m_open.h"
#include "m_use.h"

int		open_test_line(const char *const str)
{
  int		i;
  int		sepa;

  i = 0;
  sepa = -1;
  while (str[i])
    {
      if (str[i] == ';')
	{
	  if (sepa != -1)
	    return (-1);
	  sepa = i;
	}
      i++;
    }
  return (sepa);
}

t_point	*open_create_fill(t_point *ret, const char *const str,
			  const int sepa, const int len)
{
  char		*get;

  if ((get = use_getpart(str, 0, sepa)) == 0)
    return (use_errp("Memory allocation failed 1"));
  if (use_testfloat(get))
    return (use_errp("Invalid line : Invalid Volume"));
  ret->vol = atof(get);
  free(get);
  if ((get = use_getpart(str, sepa + 1, len)) == 0)
    return (use_errp("Memory allocation failed 2"));
  if (use_testfloat(get))
    return (use_errp("Invalid line : Invalid Ph"));
  ret->ph = atof(get);
  free(get);
  return (ret);
}

t_point	*open_create(const char *const str)
{
  t_point	*ret;
  int		sepa;
  int		len;

  if ((sepa = open_test_line(str)) == -1)
    return (use_errp("Invalid line : Too much / Not enought separator ';'"));
  len = use_strlen(str);
  if (sepa == 0)
    return (use_errp("Invalid line : Null Volume"));
  if (sepa == len)
    return (use_errp("Invalid line : Null Ph"));
  if ((ret = malloc(sizeof(t_point))) == 0)
    return (use_errp("Memory allocation failed 0"));
  return (open_create_fill(ret, str, sepa, len));
}
