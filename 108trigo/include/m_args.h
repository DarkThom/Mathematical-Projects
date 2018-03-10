/*
** m_args.h for 108 in /home/THOMAZ_C/108trigo/include/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar  6 18:14:54 2017 Corentin Thomazeau
** Last update Thu Mar 16 13:39:00 2017 Corentin Thomazeau
*/

#ifndef M_ARGS_H_
# define M_ARGS_H_

typedef int (*fcntl)(double **, int);

void	args_aiguillage_fill(fcntl *);
int	args_aiguillage(const int, double **, const int);

int	args_size_mat(int);

int	args_core(int, char **);

int	args_value_first(const char *);
int	args_value_number_test(char *);
int	args_value_number(int, char **);

#endif /* !M_ARGS_H_ */
