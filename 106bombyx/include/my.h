/*
** my.h for $ in /home/BLENEA_T/Projects/Semestre_2/math/106bombyx
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb  6 17:51:24 2017 Thomas BLENEAU
** Last update Mon Feb  6 21:03:03 2017 Thomas BLENEAU
*/

#ifndef MY_H_
# define MY_H_

/*
** Include de la libC
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
** Prototypes de fonctions
*/

int	calc_base(int, double);
int	calc_complex(int, double, double);
int	error_check_nbr_int(char *);
int	error_check_nbr_double(char *);
int	print_error(const char *const);
int	my_strcmp(char *, char *);
void	help_command();

#endif /* !MY_H_ */
