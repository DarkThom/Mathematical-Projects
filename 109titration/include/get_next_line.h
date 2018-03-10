/*
** get_next_line.h for  in /home/BLENEA_T/Projects/CPE/CPE_2016_getnextline/
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Jan 09 16:33:07 2017 Thomas BLENEAU
** Last update Sun Feb 19 16:27:23 2017 Thomas BLENEAU
*/

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef READ_SIZE
#  define READ_SIZE (1)
# endif /* !READ_SIZE */

/*
** Déclaration de la Strucutre GetNextLine
*/

typedef struct	s_get_line
{
  char		*str;
  int		boolean;
  int		j;
}		t_get_line;

/*
** Prototype de fonction
*/

char		*get_next_line(const int);

#endif /* !GET_NEXT_LINE_H */
