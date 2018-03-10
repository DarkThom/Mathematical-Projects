##
## Makefile for  in /home/BLENEA_T/Projects/Semestre_2/math/108trigo
## 
## Made by Thomas BLENEAU
## Login   <BLENEA_T@epitech.net>
## 
## Started on  Mon Mar  6 17:21:08 2017 Thomas BLENEAU
## Last update Thu Mar 16 15:32:57 2017 Thomas BLENEAU
##

RM	= rm -f

CC	= gcc

CFLAGS	+= -W -Wall -Wextra -pedantic -g
CFLAGS	+= -I ./include/

LDFLAGS	+= -lm

NAME	= 108trigo

SRCS	= 108trigo.c			\
	  ./src/help_command.c		\
	  ./src/str_cmp.c		\
	  src/args/aiguillage.c		\
	  src/args/core.c		\
	  src/args/size.c		\
	  src/args/value.c		\
	  src/error/display.c		\
	  src/matrix/create.c		\
	  src/matrix/delete.c		\
	  src/matrix/display_matrix.c	\
	  src/matrix/copy.c		\
	  src/matrix/operate.c		\
	  src/calc/calc_cosinus.c	\
	  src/calc/calc_method.c	\
	  src/calc/calc_sinus.c		\
	  src/calc/calc_exp.c		\
	  src/calc/calc_hyperbolic.c	\

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

