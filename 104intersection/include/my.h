/*
** my.h for  in /home/BLENEA_T/Projects/math/104intersection
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Dec 19 16:59:57 2016 Thomas BLENEAU
** Last update Thu Jan  5 19:16:31 2017 Thomas BLENEAU
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
** Déclaration de la Structure
*/

typedef struct		s_coord
{
  double		x1;
  double		y1;
  double		z1;
  double		x2;
  double		y2;
  double		z2;
}			t_coord;

/*
** Prototypes de fonctions
*/

int	check_error_params(int ac, char **av);
int	my_strcmp(char *s1, char *s2);
int	my_str_isnum(char *str);
int	calc_sphere(char **av);
int	calc_cone(char **av);
int	calc_cylindre(char **av);
void	display_line(char **av);
void	display_sphere(char **av);
void	display_cone(char **av);
void	display_cylinder(char **av);
void	calc_discrimant_sphere(char **av, double a, double b, double c);
void	calc_discrimant_cylindre(char **av, double a, double b, double c);
void	calc_discrimant_cone(char **av, double a, double b, double c);

#endif /* !MY_H_ */
