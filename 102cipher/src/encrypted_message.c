/*
** encrypted_mess.c for  in /home/BLENEA_T/Projects/102cipher
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sun Nov 27 10:47:05 2016 Thomas BLENEAU
** Last update Thu Dec  1 16:19:21 2016 Thomas BLENEAU
*/

#include "../include/my.h"

int     *encrypted_message_matrix(char *str)
{
  int   i;
  int   *tab;

  i = 0;
  tab = malloc(sizeof(*tab));
  while (str[i] != '\0')
    {
      tab[i] = (int) str[i];
      i = i + 1;
    }
  return (tab);
}

void	encrypted_mess_to_1(char *str, int *tab_mess, int *tab_key)
{
  int	nb_crypt = 0;
  int	count = 0;

  while (count < my_strlen(str))
    {
      nb_crypt = tab_mess[count] * tab_key[0];
      printf("%d", nb_crypt);
      count = count + 1;
      if (count < my_strlen(str))
	printf(" ");
    }
}

void	encrypted_mess_to_4(char *str, int *tab_mess, int *tab_key)
{
  int   nb_crypt = 0;
  int   nb_crypt_two = 0;
  int   count = 0;
  int   count_two = 1;

  while (count_two < my_strlen(str))
    {
      nb_crypt = (tab_mess[count] * tab_key[0]) + (tab_mess[count_two] * tab_key[2]);
      nb_crypt_two = (tab_mess[count] * tab_key[1]) + (tab_mess[count_two] * tab_key[3]);
      printf("%d %d", nb_crypt, nb_crypt_two);
      count = count + 2;
      count_two = count_two + 2;
      if (count_two < my_strlen(str))
	printf(" ");
    }
  if (count < my_strlen(str))
    {
      nb_crypt = (tab_mess[count] * tab_key[0]) + (0 * tab_key[2]);
      nb_crypt_two = (tab_mess[count] * tab_key[1]) + (0 * tab_key[3]);
      printf(" %d %d", nb_crypt, nb_crypt_two);
    }
}

void	encrypted_mess_to_9(char *str, int *tab_mess, int *tab_key)
{
  int   nb_crypt = 0;
  int   nb_crypt_two = 0;
  int	nb_crypt_three = 0;
  int   count = 0;
  int   count_two = 1;
  int	count_three = 2;

  while (count_three < my_strlen(str))
    {
      nb_crypt = (tab_mess[count] * tab_key[0]) + (tab_mess[count_two] * tab_key[3]) + (tab_mess[count_three] * tab_key[6]);
      nb_crypt_two = (tab_mess[count] * tab_key[1]) + (tab_mess[count_two] * tab_key[4]) + (tab_mess[count_three] * tab_key[7]);
      nb_crypt_three = tab_mess[count] * tab_key[2] + (tab_mess[count_two] * tab_key[5]) + (tab_mess[count_three] * tab_key[8]);
      printf("%d %d %d", nb_crypt, nb_crypt_two, nb_crypt_three);
      count = count + 3;
      count_two = count_two + 3;
      count_three = count_three + 3;
      if (count_three < my_strlen(str))
	printf(" ");
    }
  if (count < my_strlen(str))
    {
      nb_crypt = (tab_mess[count] * tab_key[0]) + (0 * tab_key[3]) + (0 * tab_key[6]);
      nb_crypt_two = (tab_mess[count] * tab_key[1]) + (0 * tab_key[4]) + (0 * tab_key[7]);
      nb_crypt_three = (tab_mess[count] * tab_key[2]) + (0 * tab_key[5]) + (0 * tab_key[8]);
      printf(" %d %d %d", nb_crypt, nb_crypt_two, nb_crypt_three);
    }
  if (count_two > count && count_two < my_strlen(str))
    {
      nb_crypt = (tab_mess[count] * tab_key[0]) + (tab_mess[count_two] * tab_key[3]) + (0 * tab_key[6]);
      nb_crypt_two = (tab_mess[count] * tab_key[1]) + (tab_mess[count_two] * tab_key[4]) + (0 * tab_key[7]);
      nb_crypt_three = (tab_mess[count] * tab_key[2]) + (tab_mess[count_two] * tab_key[5]) + (0 * tab_key[8]);
      printf(" %d %d %d", nb_crypt, nb_crypt_two, nb_crypt_three);
    }
}


void	encrypted_mess_to_16(char *str, int *tab_mess, int *tab_key)
{
  int   nb_crypt = 0;
  int   nb_crypt_two = 0;
  int	nb_crypt_three = 0;
  int	nb_crypt_four = 0;
  int   count = 0;
  int   count_two = 1;
  int	count_three = 2;
  int	count_four = 3;

  while (count_three < my_strlen(str))
    {
      nb_crypt = (tab_mess[count] * tab_key[0]) + (tab_mess[count_two] * tab_key[4]) + (tab_mess[count_three] * tab_key[8]) + (tab_mess[count_four] * tab_key[12]);
      nb_crypt_two = (tab_mess[count] * tab_key[1]) + (tab_mess[count_two] * tab_key[5]) + (tab_mess[count_three] * tab_key[9]) + (tab_mess[count_four] * tab_key[13]);
      nb_crypt_three = (tab_mess[count] * tab_key[2]) + (tab_mess[count_two] * tab_key[6]) + (tab_mess[count_three] * tab_key[10]) + (tab_mess[count_four] * tab_key[14]);
      nb_crypt_four = (tab_mess[count] * tab_key[3]) + (tab_mess[count_two] * tab_key[7]) + (tab_mess[count_three] * tab_key[11]) + (tab_mess[count_four] * tab_key[15]);
      printf("%d %d %d %d", nb_crypt, nb_crypt_two, nb_crypt_three, nb_crypt_four);
      count = count + 4;
      count_two = count_two + 4;
      count_three = count_three + 4;
      count_four = count_four + 4;
      if (count_three < my_strlen(str))
	printf(" ");
    }
  if (count < my_strlen(str))
    {
      nb_crypt = (tab_mess[count] * tab_key[0]) + (0 * tab_key[4]) + (0 * tab_key[8]) + (0 * tab_key[12]);
      nb_crypt_two = (tab_mess[count] * tab_key[1]) + (0 * tab_key[5]) + (0 * tab_key[9]) + (0 * tab_key[13]);
      nb_crypt_three = (tab_mess[count] * tab_key[2]) + (0 * tab_key[6]) + (0 * tab_key[10]) + (0 * tab_key[14]);
      nb_crypt_four = (tab_mess[count] * tab_key[3]) + (0 * tab_key[7]) + (0 * tab_key[11]) +  (0 * tab_key[15]);
    }
  if (count_two > count && count_two < my_strlen(str))
    {
      nb_crypt = (tab_mess[count] * tab_key[0]) + (tab_mess[count_two] * tab_key[4]) + (0 * tab_key[8]) + (0 * tab_key[12]);
      nb_crypt_two = (tab_mess[count] * tab_key[1]) + (tab_mess[count_two] * tab_key[5]) + (0 * tab_key[9]) + (0 * tab_key[13]);
      nb_crypt_three = (tab_mess[count] * tab_key[2]) + (tab_mess[count_two] * tab_key[6]) + (0 * tab_key[10]) + (0 * tab_key[14]);
      nb_crypt_four = (tab_mess[count] * tab_key[3]) + (tab_mess[count_two] * tab_key[7]) + (0 * tab_key[11]) + (0 * tab_key[15]);
      printf(" %d %d %d %d", nb_crypt, nb_crypt_two, nb_crypt_three, nb_crypt_four);
    }
  if (count_three > count_two && count_three < my_strlen(str))
    {
      nb_crypt = (tab_mess[count] * tab_key[0]) + (tab_mess[count_two] * tab_key[4]) + (tab_mess[count_three] * tab_key[8]) + (0 * tab_key[12]);
      nb_crypt_two = (tab_mess[count] * tab_key[1]) + (tab_mess[count_two] * tab_key[5]) + (tab_mess[count_three] * tab_key[9]) + (0 * tab_key[13]);
      nb_crypt_three = (tab_mess[count] * tab_key[2]) + (tab_mess[count_two] * tab_key[6]) + (tab_mess[count_three] * tab_key[10]) + (0 * tab_key[14]);
      nb_crypt_four = (tab_mess[count] * tab_key[3]) + (tab_mess[count_two] * tab_key[7]) + (tab_mess[count_three] * tab_key[11]) + (0 * tab_key[15]);
      printf(" %d %d %d %d", nb_crypt, nb_crypt_two, nb_crypt_three, nb_crypt_four);
    }
}
