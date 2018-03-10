/*
** my.h for  in /home/BLENEA_T/Projects/Semestre_2/math/107transfer
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Thu Feb 16 16:26:33 2017 Thomas BLENEAU
** Last update Thu Mar  2 14:11:29 2017 Corentin Thomazeau
*/

#ifndef MY_H_
# define MY_H_

/*
** Include de la libC
*/

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

/*
** Structure
*/

typedef struct	s_fonc
{
  int			*first;
  int			*second;
  struct s_fonc	*next;
}			t_fonc;

/*
** Prototypes de fonctions
*/

double		calc_polynome(int *, double);
int		char_sign(char);
int		check_params(int, char **);
int		count_nbr(char *);
int		help_command();
int		my_strcmp(char *, char *);
int		str_isnum(char *);
int		*parsing_file(char *);
int		calc_resultat(t_fonc *);
void		display_it(double, double);
t_fonc		*start_setup(const int, const char *const *const);

#endif /* !MY_H_ */
