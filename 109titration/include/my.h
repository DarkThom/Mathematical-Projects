/*
** my.h for  in /home/BLENEA_T/Projects/Semestre_2/math/109titration
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Mar 20 16:12:07 2017 Thomas BLENEAU
** Last update Thu Mar 30 14:24:33 2017 Thomas BLENEAU
*/

#ifndef MY_H_
# define MY_H_

# include "struct.h"

/*
** Prototypes de fonctions
*/

double	*calc_derivative(t_point *, int, int *);
double	*second_derivative(t_point *, int, double *);
int	estimated_derivative(t_point *, double *, int);
int	display_derivative(double *, t_point *, double);
int	display_sec_derivative(double *, t_point *);

#endif /* !MY_H_ */
