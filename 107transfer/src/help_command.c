/*
** help_command.c for  in /home/BLENEA_T/Projects/Semestre_2/math/107transfer
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Thu Feb 16 16:20:37 2017 Thomas BLENEAU
** Last update Thu Feb 16 16:30:07 2017 Thomas BLENEAU
*/

#include "my.h"

int	help_command()
{
  write(1, "USAGE:\n", 7);
  write(1, "\t\t./107transfer [num den]*\n", 27);
  write(1, "DESCRIPTION:\n", 14);
  write(1, "\t\tnum\tpolynomial numerator defined by its coeficients\n", 55);
  write(1, "\t\tden\tpolynomial denominator defined by its coeficients\n", 56);
  return (0);
}
