/*
** m_use.h for 109 in /home/THOMAZ_C/109titration/include/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar 20 17:16:37 2017 Corentin Thomazeau
** Last update Mon Mar 20 19:06:32 2017 Corentin Thomazeau
*/

#ifndef M_USE_H_
# define M_USE_H_

# include "struct.h"

int		use_strlen(const char *const);
int		use_testfloat(const char *const);
char		*use_getpart(const char *const, const int, const int);
int		use_strcmp(const char *const, const char *const);

int		use_errs(const char *const);
t_point	*use_errp(const char *const);

#endif /* !M_USE_H_ */
