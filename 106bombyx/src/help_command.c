/*
** help_command.c for  in /home/BLENEA_T/Projects/Semestre_2/math/106bombyx
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Feb  6 17:56:21 2017 Thomas BLENEAU
** Last update Thu Feb 16 13:52:34 2017 Thomas BLENEAU
*/

#include "my.h"

void	help_command()
{
  printf("USAGE\n");
  printf("\t\t./106bombyx n [k | i0 i1]\n");
  printf("DESCRIPTION\n");
  printf("\t\tn\tnumber of first generation individuals\n");
  printf("\t\tk\tgrowth rate from 1 to 4\n");
  printf("\t\ti0\tinitial generation (included)\n");
  printf("\t\ti1\tfinal generation (included)\n");
}
