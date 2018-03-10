/*
** help_command.c for  in /home/BLENEA_T/Projects/Semestre_2/math/108trigo
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Mar  6 17:47:19 2017 Thomas BLENEAU
** Last update Mon Mar  6 17:53:48 2017 Thomas BLENEAU
*/

#include "my.h"
#include <unistd.h>

int	help_command()
{
  write(1, "USAGE:\n"
	"		./108trigo fun a0 a1 a2...\n"
	"DESCRIPTION:\n"
	"		fun	function to be applied, among at least 'EXP'. 'COS'.'SIN'.'COSH' and 'SINH'\n"
	"		ai	coeficients of the matrix\n", 162);
  return (0);
}
