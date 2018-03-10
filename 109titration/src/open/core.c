/*
** core.c for 109 in /home/THOMAZ_C/109titration/src/open/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar 20 17:08:30 2017 Corentin Thomazeau
** Last update Thu Mar 30 14:44:28 2017 Corentin Thomazeau
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "m_open.h"
#include "m_use.h"

t_point	*open_link(t_point *last, t_point *new)
{
  t_point	*tmp;

  if (last == 0)
    {
      new->next = 0;
      new->prev = 0;
      return (new);
    }
  tmp = last;
  while (tmp->next != 0)
    tmp = tmp->next;
  tmp->next = new;
  new->prev = tmp;
  new->next = 0;
  return (last);
}

t_point	*open_parse(const int fd, int *compt)
{
  t_point	*list;
  t_point	*new;
  char		*str;

  list = 0;
  while ((str = get_next_line(fd)) != 0)
    {
      new = open_create(str);
      if (new == 0)
	return (0);
      list = open_link(list, new);
      free(str);
      *compt = *compt + 1;
    }
  return (list);
}

t_point	*open_core(const char *const path, int *compt)
{
  int		fd;
  t_point	*ret;

  if ((fd = open(path, O_RDONLY)) < 0)
    return (use_errp("File openning failed"));
  *compt = 0;
  if ((ret = open_parse(fd, compt)) == 0)
    return (0);
  open_sort_core(ret);
  close(fd);
  return (ret);
}
