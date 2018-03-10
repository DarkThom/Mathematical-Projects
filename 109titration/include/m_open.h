/*
** m_open.h for 109 in /home/THOMAZ_C/109titration/include/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar 20 17:57:09 2017 Corentin Thomazeau
** Last update Thu Mar 30 14:41:10 2017 Corentin Thomazeau
*/

#ifndef M_OPEN_H_
# define M_OPEN_H_

# include "struct.h"

t_point	*open_parse(const int, int *);
t_point	*open_core(const char *const, int *);

t_point	*open_create(const char *const);
int		open_test_line(const char *const);
t_point	*open_create_fill(t_point *, const char *const, const int,
			  const int);

void		open_sort_core(t_point *);

#endif /* !M_OPEN_H_ */
