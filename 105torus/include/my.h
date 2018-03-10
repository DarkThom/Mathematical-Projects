/*
** my.h for  in /home/BLENEA_T/Projects/math/105torus
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Jan  9 11:13:20 2017 Thomas BLENEAU
** Last update Fri Jan 20 19:41:40 2017 Thomas BLENEAU
*/

#ifndef MY_H_
# define MY_H_

/*
** Include de la LibC
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
** Prototypes de fonctions
*/

int	check_error_params(int ac, char **av);
int	my_strcmp(char *s1, char *s2);
int	my_str_isnum(char *str);
int	my_other_isnum(char *str);
void	calc_bisection(char **av);
void	calc_newton(char **av);
void	calc_secant(char **av);
void	my_putnbr_double(long double nb, long double p);
void	display_result(long double nb, long double p);

#endif /* !MY_H_ */
