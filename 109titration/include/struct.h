/*
** struct.h for 109 in /home/THOMAZ_C/109titration/include/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar 20 17:09:42 2017 Corentin Thomazeau
** Last update Mon Mar 20 18:27:52 2017 Corentin Thomazeau
*/

#ifndef STRUCT_H_
# define STRUCT_H_

typedef struct	s_point
{
  double		vol;
  double		ph;
  struct s_point	*prev;
  struct s_point	*next;
}			t_point;

#endif /* STRUCT_H_ */
