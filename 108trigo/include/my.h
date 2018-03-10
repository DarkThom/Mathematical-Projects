/*
** my.h for  in /home/BLENEA_T/Projects/Semestre_2/math/108trigo
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Mar  6 17:21:39 2017 Thomas BLENEAU
** Last update Thu Mar 16 15:37:04 2017 Thomas BLENEAU
*/

#ifndef MY_H_
# define MY_H_

/*
** Prototypes de fonction
*/

double	**calc_prod_mat(double **, double **, int);
double	**calc_div_mat(int *, double **, int);
double	**calc_add_mat(double **, double **, int);
double	**calc_sub_mat(double **, double **, int);
double	**matrix_copy(double **, int);
double	**calc_exp_double(double **, int);
int	calc_sinus(double **, int);
int	calc_exp(double **, int);
int	calc_cosinus(double **, int);
int	display_matrix(double **, int);
int	hyperbolic_cosinus(double **, int);
int	hyperbolic_sinus(double **, int);
int	str_cmp(char *, char *);
int	help_command();

#endif /* !MY_H_ */
