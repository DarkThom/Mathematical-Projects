/*
** 102cipher.c for  in /home/BLENEA_T/Projects/102cipher
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Nov 21 17:28:12 2016 Thomas BLENEAU
** Last update Thu Dec  1 17:50:42 2016 Thomas BLENEAU
*/

#include "./include/my.h"

int	main(int ac, char **av)
{
  int	tab[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  float	tab_inv[16] = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0};

  if (ac != 4)
    return (84);
  else if ((my_strcmp(av[3], "0") != 0) && (my_strcmp(av[3], "1") != 0))
      return (84);
  else if (my_strlen(av[2]) > 16)
    return (84);
  else if ((my_strcmp(av[3], "1") == 0) && (isnum(av[1]) != 1))
    return (84);
  if (my_strcmp(av[3], "0") == 0)
    {
      printf("Key matrix :\n");
      key_matrix(av[2], tab);
      display_key_matrix(my_strlen(av[2]), tab);
      printf("\nEncrypted message :\n");
      display_encrypted_mess(av[1], av[2], encrypted_message_matrix(av[1]), tab);
    }
  else if (my_strcmp(av[3], "1") == 0)
    {
      display_decrypted_mess(av, av[2], calc_invkey_matrix(invkey_matrix(av[2], tab), tab_inv, av[2]));
    }
  return (0);
}
