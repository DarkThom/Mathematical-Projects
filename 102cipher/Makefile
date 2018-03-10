##
## Makefile for  in /home/BLENEA_T/Projects/102cipher
## 
## Made by Thomas BLENEAU
## Login   <BLENEA_T@epitech.net>
## 
## Started on  Mon Nov 21 17:07:14 2016 Thomas BLENEAU
## Last update Sun Nov 27 13:46:18 2016 Thomas BLENEAU
##

RM	= rm -f

CC	= gcc -ansi -lm

LM	= -lm

CFLAGS	+= -Wextra -Wall -Werror -W
CFLAGS	+= -I ./include/

NAME	= 102cipher

SRCS	= 102cipher.c \
	  ./src/calc_invkey_matrix.c \
	  ./src/decrypted_message.c \
	  ./src/display_key_matrix.c \
	  ./src/display_mess_matrix.c \
	  ./src/encrypted_message.c \
	  ./src/isnum.c \
	  ./src/matrix_key.c \
	  ./src/utilities.c \

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
