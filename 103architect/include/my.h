/*
** my.h for  in /home/BLENEA_T/Projects/math/103architect
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Dec  5 13:16:18 2016 Thomas BLENEAU
** Last update Sat Dec 17 10:14:34 2016 Thomas BLENEAU
*/

#ifndef MY_H_
# define MY_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

/*
** Prototypes de fonctions
*/

typedef struct		s_my_matrix
{
  int			x;
  int			y;
  int			angle;
  double		*matrix;
  struct s_my_matrix	*next;
}			t_my_matrix;

int	my_strcmp(char *s1, char *s2);
int	isnum(char *str);
int	check_error_params(int ac, char **av);
int	my_nbr_flags(int ac, char **av);
double	*matrix_translation(int x, int y);
double	*matrix_homotheties(int x, int y);
double	*matrix_rotation(int angle);
double	*matrix_symetric(int angle);
double	*matrix_3x3(double *matrix_1, double *matrix_2);
double	*final_point(char **av, double *matrice_final);
double	*new_matrix();
double	*check_final_point(int ac, char **av);
void	check_my_flags(int ac, char **av);
void	check_all_params(int ac, char **av);
void	display_translation(char *s1, char *s2);
void	display_homotheties(char *s1, char *s2);
void	display_rotation(char *s1);
void	display_symetric(char *s1);
void	display_matrix(double *matrix);
void	display_point(double *point);
void	display_coordonee(char *s1, char *s2);
void	display_opts(char **av);

#endif /* !MY_H_ */
