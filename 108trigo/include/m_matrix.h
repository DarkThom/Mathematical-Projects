/*
** m_matrix.h for 108 in /home/THOMAZ_C/108trigo/include/
**
** Made by Corentin Thomazeau
** Login   <THOMAZ_C@epitech.net>
**
** Started on  Mon Mar  6 18:37:52 2017 Corentin Thomazeau
** Last update Thu Mar 16 15:29:35 2017 Corentin Thomazeau
*/

#ifndef M_MATRIX_H_
# define M_MATRIX_H_

double	**matrix_create_identitee(int size);
double	**matrix_create(char **, const int);
double	**matrix_create_line(double **, const int);
double	**matrix_create_fill(double **, char **, const int);

void	matrix_delete(double **, int);

int	display_matrix(double **, int);

double	**matrix_copy(double **, int);
void	matrix_copy_apply(double **, double **, int);

double	**matrix_negate(double **, int);
double	**matrix_initialize(double **, int);
double	**matrix_divide(double **, int, int);

#endif /* M_MATRIX_H_ */
