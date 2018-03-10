/*
** my.h for  in /home/BLENEA_T/Projects/102cipher/include
**
** Made by Thomas BLENEAU
** Login   <BLENEA_T@epitech.net>
**
** Started on  Mon Nov 21 17:27:39 2016 Thomas BLENEAU
** Last update Fri Dec  2 13:33:50 2016 Thomas BLENEAU
*/

#ifndef MY_H_
# define MY_H_

/*
** Include la libC
*/

#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*
** Prototypes de fonctions
*/

int	my_strlen(char *str);
int	isnum(char *str);
int	my_strcmp(char *s1, char *s2);
double	round(double x);

/*
** Calculs des Matrices
*/

float	*calc_invkey_matrix(int *tab_key, float *tab_inv, char *str);
int	*invkey_matrix(char *str, int *tab);
int	*key_matrix(char *str, int *tab);
void	display_key_matrix(int size, int *tab);
void	display_invkey_matrix(int size, float *tab);

/*
** Encrypted Message
*/

int	*encrypted_message_matrix(char *str);
void	display_encrypted_mess(char *str, char *size, int *tab_mess, int *tab_key);
void	encrypted_mess_to_1(char *str, int *tab_mess, int *tab_key);
void	encrypted_mess_to_4(char *str, int *tab_mess, int *tab_key);
void	encrypted_mess_to_9(char *str, int *tab_mess, int *tab_key);
void	encrypted_mess_to_16(char *str, int *tab_mess, int *tab_key);

/*
** Decrypted Message
*/

void	display_decrypted_mess(char **av, char *size, float *tab_mess);
void	decrypted_mess_to_1(char **av, float *tab_inv);
void	decrypted_mess_to_4(char **av, float *tab_inv);
void	decrypted_mess_to_9(char **av, float *tab_inv);
void	decrypted_mess_to_16(char **av, float *tab_inv);

#endif /* !MY_H_ */
