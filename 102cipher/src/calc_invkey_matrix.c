/*
** cal_invkey_matrix.c for  in /home/BLENEA_T/Projects/102cipher
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Nov 26 19:43:06 2016 Thomas BLENEAU
** Last update Sat Dec  3 10:43:31 2016 Thomas BLENEAU
*/

#include "../include/my.h"

float	*calc_invkey_matrix(int *tab_key, float *tab_inv, char *str)
{
  float det;
  int	i;

  i = 0;
  if (my_strlen(str) == 1)
    {
      printf("Key matrix :\n");
      tab_inv[0] = (1.0 / tab_key[0]);
      if (tab_inv[0] == 0)
	tab_inv[0] = fabs(tab_inv[0]);
      printf("%.3f\n", tab_inv[0]);
      printf("\nDecrypted message :\n");
    }
  else if (my_strlen(str) >= 2 && my_strlen(str) <= 4)
    {
      det = (tab_key[0] * tab_key[3]) - (tab_key[2] * tab_key[1]);
      if (det != 0)
	{
	  printf("Key matrix :\n");
	  tab_inv[0] = tab_key[3] / det;
	  tab_inv[1] = (-tab_key[1]) / det;
	  tab_inv[2] = (-tab_key[2]) / det;
	  tab_inv[3] = tab_key[0] / det;
	  while (i <= 4)
	    {
	      if (tab_inv[i] == 0)
		tab_inv[i] = fabs(tab_inv[i]);
	      i = i + 1;
	    }
	  printf("%.3f\t%.3f\n%.3f\t%.3f\n", tab_inv[0], tab_inv[1], tab_inv[2], tab_inv[3]);
	  printf("\nDecrypted message :\n");
	}
      else
	{
	  printf("Determinant is equal 0\n");
	  printf("Usage : determinant different from 0\n");
	  exit (84);
	}
    }
  else if (my_strlen(str) >= 5 && my_strlen(str) <= 9)
    {
      det = tab_key[0] * (tab_key[4]* tab_key[8] - tab_key[5] * tab_key[7])
	- tab_key[3] * (tab_key[1] * tab_key[8] - tab_key[2]* tab_key[7])
	+ tab_key[6] * (tab_key[1]* tab_key[5] - tab_key[2]* tab_key[4]);
      if (det != 0)
	{
	  printf("Key matrix :\n");
	  tab_inv[0] = (tab_key[4] * tab_key[8] - tab_key[5] * tab_key[7]) / det;
	  tab_inv[1] = -(tab_key[1] * tab_key[8] - tab_key[2] * tab_key[7]) / det;
	  tab_inv[2] = (tab_key[1] * tab_key[5] - tab_key[2] * tab_key[4]) / det;
	  tab_inv[3] = -(tab_key[3] * tab_key[8] - tab_key[5] * tab_key[6]) / det;
	  tab_inv[4] = (tab_key[0] * tab_key[8] - tab_key[2] * tab_key[6]) / det;
	  tab_inv[5] = -(tab_key[0] * tab_key[5] - tab_key[2] * tab_key[3]) / det;
	  tab_inv[6] = (tab_key[3] * tab_key[7] - tab_key[4] * tab_key[6]) / det;
	  tab_inv[7] = -(tab_key[0] * tab_key[7] - tab_key[1]* tab_key[6]) / det;
	  tab_inv[8] = (tab_key[0] * tab_key[4] - tab_key[1] * tab_key[3]) / det;
	  while (i <= 9)
	    {
	      if (tab_inv[i] == 0)
		tab_inv[i] = fabs(tab_inv[i]);
	      i = i + 1;
	    }
	  printf("%.3f\t%.3f\t%.3f\n", tab_inv[0], tab_inv[1], tab_inv[2]);
	  printf("%.3f\t%.3f\t%.3f\n", tab_inv[3], tab_inv[4], tab_inv[5]);
	  printf("%.3f\t%.3f\t%.3f\n", tab_inv[6], tab_inv[7], tab_inv[8]);
	  printf("\nDecrypted message :\n");
	}
      else
	{
	  printf("Determinant is equal 0\n");
	  printf("Usage : determinant different from 0\n");
	  exit (84);
	}
    }
  else if (my_strlen(str) >= 10 && my_strlen(str) <= 16)
    {
      det = ((tab_key[0] * tab_key[5] * tab_key[10] * tab_key[15]) + (tab_key[0] * tab_key[6] * tab_key[11] * tab_key[13]) + (tab_key[0] * tab_key[7] * tab_key[9] * tab_key[14]) + (tab_key[1] * tab_key[4] * tab_key[11] * tab_key[14]) + (tab_key[1] * tab_key[6] * tab_key[8] * tab_key[15]) + (tab_key[1] * tab_key[7] * tab_key[10] * tab_key[12]) + (tab_key[2] * tab_key[4] * tab_key[9] * tab_key[15]) + (tab_key[2] * tab_key[5] * tab_key[11] * tab_key[12]) + (tab_key[2] * tab_key[7] * tab_key[8] * tab_key[13]) + (tab_key[3] * tab_key[4] * tab_key[10] * tab_key[13]) + (tab_key[3] * tab_key[5] * tab_key[8] * tab_key[14]) + (tab_key[3] * tab_key[6] * tab_key[9] * tab_key[12]) - (tab_key[0] * tab_key[5] * tab_key[11] * tab_key[14]) - (tab_key[0] * tab_key[6] * tab_key[9] * tab_key[15]) - (tab_key[0] * tab_key[7] * tab_key[10] * tab_key[13]) - (tab_key[1] * tab_key[4] * tab_key[10] * tab_key[15]) - (tab_key[1] * tab_key[6] * tab_key[11] * tab_key[12]) - (tab_key[1] * tab_key[7] * tab_key[8] * tab_key[14]) - (tab_key[2] * tab_key[4] * tab_key[11] * tab_key[13]) - (tab_key[2] * tab_key[5] * tab_key[8] * tab_key[15]) - (tab_key[2] * tab_key[7] * tab_key[9] * tab_key[12]) - (tab_key[3] * tab_key[4] * tab_key[9] * tab_key[14]) - (tab_key[3] * tab_key[5] * tab_key[10] * tab_key[12]) - (tab_key[3] * tab_key[6] * tab_key[8] * tab_key[13]));
      if (det != 0)
	{
	  printf("Key matrix :\n");
	  tab_inv[0] = ((tab_key[15] * tab_key[10] * tab_key[15]) + (tab_key[6] * tab_key[11] * tab_key[13]) + (tab_key[7] * tab_key[9] * tab_key[14]) - (tab_key[5] * tab_key[11] * tab_key[15]) - (tab_key[6] * tab_key[9] * tab_key[15]) - (tab_key[7] * tab_key[10] * tab_key[13])) / det;
	  tab_inv[1] = ((tab_key[1] * tab_key[11] * tab_key[14]) + (tab_key[2] * tab_key[9] * tab_key[15]) + (tab_key[3] * tab_key[10] * tab_key[13]) - (tab_key[1] * tab_key[10] * tab_key[15]) - (tab_key[2] * tab_key[10] * tab_key[13]) - (tab_key[3] * tab_key[9] * tab_key[14])) / det;
	  tab_inv[2] = ((tab_key[1] * tab_key[6] * tab_key[15]) + (tab_key[2] * tab_key[6] * tab_key[13]) + (tab_key[3] * tab_key[5] * tab_key[14]) - (tab_key[1] * tab_key[7] * tab_key[14]) - (tab_key[2] * tab_key[5] * tab_key[15]) - (tab_key[3] * tab_key[6] * tab_key[13])) / det;
	  tab_inv[3] = ((tab_key[1] * tab_key[7] * tab_key[10]) + (tab_key[2] * tab_key[5] * tab_key[11]) + (tab_key[3] * tab_key[6] * tab_key[9]) - (tab_key[1] * tab_key[6] * tab_key[11]) - (tab_key[2] * tab_key[6] * tab_key[9]) - (tab_key[3] * tab_key[5] * tab_key[10])) / det;
	  tab_inv[4] = ((tab_key[4] * tab_key[11] * tab_key[14]) + (tab_key[6] * tab_key[8] * tab_key[15]) + (tab_key[7] * tab_key[10] * tab_key[12]) - (tab_key[4] * tab_key[10] * tab_key[15]) - (tab_key[6] * tab_key[11] * tab_key[12]) - (tab_key[7] * tab_key[8] * tab_key[14])) / det;
	  tab_inv[5] = ((tab_key[0] * tab_key[6] * tab_key[15]) + (tab_key[2] * tab_key[11] * tab_key[12]) + (tab_key[3] * tab_key[8] * tab_key[14]) - (tab_key[0] * tab_key[11] * tab_key[14]) - (tab_key[2] * tab_key[8] * tab_key[15]) - (tab_key[3] * tab_key[10] * tab_key[12])) / det;
	  tab_inv[6] = ((tab_key[0] * tab_key[7] * tab_key[14]) + (tab_key[2] * tab_key[11] * tab_key[12]) + (tab_key[3] * tab_key[8] * tab_key[14]) - (tab_key[0] * tab_key[10] * tab_key[14]) - (tab_key[2] * tab_key[8] * tab_key[15]) - (tab_key[3] * tab_key[10] * tab_key[12])) / det;
	  tab_inv[7] = ((tab_key[0] * tab_key[7] * tab_key[14]) + (tab_key[2] * tab_key[4] * tab_key[15]) + (tab_key[3] * tab_key[6] * tab_key[12]) - (tab_key[0] * tab_key[6] * tab_key[15]) - (tab_key[2] * tab_key[7] * tab_key[12]) - (tab_key[3] * tab_key[4] * tab_key[14])) / det;
	  tab_inv[8] = ((tab_key[0] * tab_key[6] * tab_key[11]) + (tab_key[2] * tab_key[7] * tab_key[8]) + (tab_key[3] * tab_key[4] * tab_key[10]) - (tab_key[0] * tab_key[7] * tab_key[10]) - (tab_key[2] * tab_key[4] * tab_key[11]) - (tab_key[3] * tab_key[6] * tab_key[8])) / det;
	  tab_inv[9] = ((tab_key[4] * tab_key[9] * tab_key[15]) + (tab_key[5] * tab_key[11] * tab_key[12]) + (tab_key[7] * tab_key[8] * tab_key[13]) - (tab_key[4] * tab_key[11] * tab_key[13]) - (tab_key[5] * tab_key[8] * tab_key[15]) -(tab_key[7] * tab_key[9] * tab_key[12])) / det;
	  tab_inv[10] = ((tab_key[0] * tab_key[11] * tab_key[13]) + (tab_key[1] * tab_key[8] * tab_key[15]) + (tab_key[3] * tab_key[9] * tab_key[12]) - (tab_key[0] * tab_key[9] * tab_key[15]) - (tab_key[1] * tab_key[11] * tab_key[12]) - (tab_key[7] * tab_key[9] * tab_key[12])) / det;
	  tab_inv[11] = ((tab_key[0] * tab_key[5] * tab_key[15]) + (tab_key[1] * tab_key[4] * tab_key[11]) + (tab_key[3] * tab_key[5] * tab_key[8]) - (tab_key[0] * tab_key[5] * tab_key[11]) - (tab_key[1] * tab_key[7] * tab_key[8]) - (tab_key[3] * tab_key[4] * tab_key[9])) /det;
	  tab_inv[12] = ((tab_key[4] * tab_key[10] * tab_key[13]) + (tab_key[5] * tab_key[8] * tab_key[14]) + (tab_key[6] * tab_key[9] * tab_key[12]) - (tab_key[4] * tab_key[9] * tab_key[14]) - (tab_key[5] * tab_key[10] * tab_key[12]) - (tab_key[6] * tab_key[8] * tab_key[13])) / det;
	  tab_inv[13] = ((tab_key[0] * tab_key[9] * tab_key[14]) + (tab_key[1] * tab_key[10] * tab_key[12]) + (tab_key[2] * tab_key[8] * tab_key[13]) - (tab_key[0] * tab_key[10] * tab_key[13]) - (tab_key[1] * tab_key[8] * tab_key[14]) - (tab_key[2] * tab_key[9] * tab_key[12])) / det;
	  tab_inv[14] = ((tab_key[0] * tab_key[6] * tab_key[13]) + (tab_key[1] * tab_key[4] * tab_key[14]) + (tab_key[2] * tab_key[5] * tab_key[12]) - (tab_key[0] * tab_key[5] * tab_key[14]) - (tab_key[1] * tab_key[6] * tab_key[12]) - (tab_key[2] * tab_key[4] * tab_key[13])) / det;
	  tab_inv[15] = ((tab_key[0] * tab_key[5] * tab_key[10]) * (tab_key[1] * tab_key[6] * tab_key[8]) + (tab_key[2] * tab_key[4] * tab_key[9]) - (tab_key[0] * tab_key[6] * tab_key[9]) - (tab_key[1] * tab_key[4] * tab_key[10]) - (tab_key[2] * tab_key[5] * tab_key[8])) / det;
	}
      else
	{
	  printf("Determinant is equal 0\n");
	  printf("Usage : determinant different from 0\n");
	  exit (84);
	}
      while (i <= 16)
	{
	  if (tab_inv[i] == 0)
	    tab_inv[i] = fabs(tab_inv[i]);
	  i = i + 1;
	}
      printf("%.3f\t%.3f\t%.3f\t%.3f\n", tab_inv[0], tab_inv[4], tab_inv[8], tab_inv[12]);
      printf("%.3f\t%.3f\t%.3f\t%.3f\n", tab_inv[1], tab_inv[5], tab_inv[9], tab_inv[13]);
      printf("%.3f\t%.3f\t%.3f\t%.3f\n", tab_inv[2], tab_inv[6], tab_inv[10], tab_inv[14]);
      printf("%.3f\t%.3f\t%.3f\t%.3f\n", tab_inv[3], tab_inv[7], tab_inv[11], tab_inv[15]);
      printf("\nDecrypted message :\n");
    }
  return (tab_inv);
}
