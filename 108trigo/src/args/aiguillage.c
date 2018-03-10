/*
** aiguillage.c for 108 in /home/THOMAZ_C/108trigo/src/args/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar  6 18:56:25 2017 Corentin Thomazeau
** Last update Thu Mar 16 15:38:00 2017 Thomas BLENEAU
*/

#include "m_args.h"
#include "my.h"

void		args_aiguillage_fill(fcntl *func)
{
  func[0] = &calc_exp;
  func[1] = &calc_cosinus;
  func[2] = &calc_sinus;
  func[3] = &hyperbolic_cosinus;
  func[4] = &hyperbolic_sinus;
}

int		args_aiguillage(const int type, double **mat, const int size)
{
  fcntl		func[5];
  int		get;

  args_aiguillage_fill(func);
  get = func[type](mat, size);
  return (get);
}
