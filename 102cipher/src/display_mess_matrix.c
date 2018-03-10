/*
** message_matrix.c for  in /home/BLENEA_T/Projects/102cipher
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Sat Nov 26 19:51:10 2016 Thomas BLENEAU
** Last update Fri Dec  2 13:33:27 2016 Thomas BLENEAU
*/

#include "../include/my.h"

void	display_encrypted_mess(char *str, char *size, int *tab_mess, int *tab_key)
{
  if (my_strlen(size) == 1)
    encrypted_mess_to_1(str, tab_mess, tab_key);
  else if (my_strlen(size) >= 2 && my_strlen(size) <= 4)
    encrypted_mess_to_4(str, tab_mess, tab_key);
  else if (my_strlen(size) >= 5 && my_strlen(size) <= 9)
    encrypted_mess_to_9(str, tab_mess, tab_key);
  else if (my_strlen(size) >= 10 && my_strlen(size) <= 16)
    encrypted_mess_to_16(str, tab_mess, tab_key);
  printf("\n");
}

void	display_decrypted_mess(char **av, char *size, float *tab_inv)
{
  if (my_strlen(size) == 1)
    decrypted_mess_to_1(av, tab_inv);
  else if (my_strlen(size) >= 2 && my_strlen(size) <= 4)
    decrypted_mess_to_4(av, tab_inv);
  else if (my_strlen(size) >= 5 && my_strlen(size) <= 9)
    decrypted_mess_to_9(av, tab_inv);
  else if (my_strlen(size) >= 10 && my_strlen(size) <= 16)
    decrypted_mess_to_16(av, tab_inv);
  printf("\n");
}
