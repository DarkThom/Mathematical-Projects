/*
** decrypted_message.c for  in /home/BLENEA_T/Projects/102cipher
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Nov 26 19:35:37 2016 Thomas BLENEAU
** Last update Sat Dec  3 10:44:30 2016 Thomas BLENEAU
*/

#include "../include/my.h"

void	decrypted_mess_to_1(char **av, float *tab_inv)
{
  int	count = 0;
  int	tmp = 0;
  int	nb_crypt = 0;
  float	letter_1;

  while (count < my_strlen(av[1]))
    {
      while (av[1][count] && av[1][count] != ' ')
	{
	  tmp = av[1][count] - 48;
	  nb_crypt = (nb_crypt * 10) + tmp;
	  count = count + 1;
	}
      count = count + 1;
      letter_1 = round(nb_crypt * tab_inv[0]);
      printf("%c", (int) letter_1);
      nb_crypt = 0;
      letter_1 = 0;
    }
}

void	decrypted_mess_to_4(char **av, float *tab_inv)
{
  int	count = 0;
  int	nb_crypt = 0;
  int	nb_crypt_two = 0;
  float	letter_1;
  float	letter_2;
  int	tmp = 0;

  while (count < my_strlen(av[1]))
    {
      while (av[1][count] && av[1][count] != ' ')
	{
	  tmp = av[1][count] - 48;
	  nb_crypt = (nb_crypt * 10) + tmp;
	  count = count + 1;
	}
      count = count + 1;
      while (av[1][count] && av[1][count] != ' ')
	{
	  tmp = av[1][count] - 48;
	  nb_crypt_two = (nb_crypt_two * 10) + tmp;
	  count = count + 1;
	}
      count = count + 1;
      letter_1 = round(nb_crypt * tab_inv[0] + nb_crypt_two * tab_inv[2]);
      letter_2 = round(nb_crypt * tab_inv[1] + nb_crypt_two * tab_inv[3]);
      printf("%c", (int) letter_1);
      if (count < my_strlen(av[1]))
	printf("%c", (int) letter_2);
      nb_crypt = 0;
      nb_crypt_two = 0;
      letter_1 = 0;
      letter_2 = 0;
    }
}

void	decrypted_mess_to_9(char **av, float *tab_inv)
{
  int	count = 0;
  int	nb_crypt = 0;
  int	nb_crypt_two = 0;
  int	nb_crypt_three = 0;
  float	letter_1;
  float	letter_2;
  float	letter_3;
  int	tmp;

  while (count < my_strlen(av[1]))
    {
      while (av[1][count] != ' ' && count < my_strlen(av[1]))
	{
	  tmp = av[1][count] - 48;
	  nb_crypt = nb_crypt * 10 + tmp;
	  count = count + 1;
	}
      count = count + 1;
      while (av[1][count] != ' ' && count < my_strlen(av[1]))
	{
	  tmp = av[1][count] - 48;
	  nb_crypt_two = nb_crypt_two * 10 + tmp;
	  count = count + 1;
	}
      count = count + 1;
      while (av[1][count] != ' ' && count < my_strlen(av[1]))
	{
	  tmp = av[1][count] - 48;
	  nb_crypt_three = nb_crypt_three * 10 + tmp;
	  count = count + 1;
	}
      count = count + 1;
      letter_1 = round(nb_crypt * tab_inv[0] + nb_crypt_two * tab_inv[3] + nb_crypt_three * tab_inv[6]);
      letter_2 = round(nb_crypt * tab_inv[1] + nb_crypt_two * tab_inv[4] + nb_crypt_three * tab_inv[7]);
      letter_3 = round(nb_crypt * tab_inv[2] + nb_crypt_two * tab_inv[5] + nb_crypt_three * tab_inv[8]);
      printf("%c", (int) letter_1);
      if (count < my_strlen(av[1]))
	printf("%c", (int) letter_2);
      if (count < my_strlen(av[1]))
	printf("%c", (int) letter_3);
      nb_crypt = 0;
      nb_crypt_two = 0;
      nb_crypt_three = 0;
      letter_1 = 0;
      letter_2 = 0;
      letter_3 = 0;
    }
}

void	decrypted_mess_to_16(char **av, float *tab_inv)
{
  int	count = 0;
  int	nb_crypt = 0;
  int	nb_crypt_two = 0;
  int	nb_crypt_three = 0;
  int	nb_crypt_four = 0;
  float	letter_1;
  float	letter_2;
  float	letter_3;
  float letter_4;
  int	tmp;

  while (count < my_strlen(av[1]))
    {
      while (av[1][count] != ' ' && count < my_strlen(av[1]))
	{
	  tmp = av[1][count] - 48;
	  nb_crypt = nb_crypt * 10 + tmp;
	  count = count + 1;
	}
      count = count + 1;
      while (av[1][count] != ' ' && count < my_strlen(av[1]))
	{
	  tmp = av[1][count] - 48;
	  nb_crypt_two = nb_crypt_two * 10 + tmp;
	  count = count + 1;
	}
      count = count + 1;
      while (av[1][count] != ' ' && count < my_strlen(av[1]))
	{
	  tmp = av[1][count] - 48;
	  nb_crypt_three = nb_crypt_three * 10 + tmp;
	  count = count + 1;
	}
      count = count + 1;
      while (av[1][count] != ' ' && count < my_strlen(av[1]))
	{
	  tmp = av[1][count] - 48;
	  nb_crypt_four = nb_crypt_four * 10 + tmp;
	  count = count + 1;
	}
      count = count + 1;
      letter_1 = round(nb_crypt * tab_inv[0] + nb_crypt_two * tab_inv[4] + nb_crypt_three * tab_inv[8] + nb_crypt_four * tab_inv[12]);
      letter_2 = round(nb_crypt * tab_inv[1] + nb_crypt_two * tab_inv[5] + nb_crypt_three * tab_inv[9] + nb_crypt_four * tab_inv[13]);
      letter_3 = round(nb_crypt * tab_inv[2] + nb_crypt_two * tab_inv[6] + nb_crypt_three * tab_inv[10] + nb_crypt_four * tab_inv[14]);
      letter_4 = round(nb_crypt * tab_inv[3] + nb_crypt_two * tab_inv[7] + nb_crypt_three * tab_inv[11] + nb_crypt_four * tab_inv[15]);
      printf("%c", (int) letter_1);
      if (count < my_strlen(av[1]))
	printf("%c", (int) letter_2);
      if (count < my_strlen(av[1]))
	printf("%c", (int) letter_3);
      if (count < my_strlen(av[1]))
	printf("%c", (int) letter_4);
      nb_crypt = 0;
      nb_crypt_two = 0;
      nb_crypt_three = 0;
      nb_crypt_four = 0;
      letter_1 = 0;
      letter_2 = 0;
      letter_3 = 0;
      letter_4 = 0;
    }
}
