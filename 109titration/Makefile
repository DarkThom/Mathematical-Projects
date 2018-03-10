##
## Makefile for  in /home/BLENEA_T/Projects/Semestre_2/math/109titration
## 
## Made by Thomas BLENEAU
## Login   <BLENEA_T@epitech.net>
## 
## Started on  Mon Mar 20 16:10:36 2017 Thomas BLENEAU
## Last update Thu Mar 30 14:44:48 2017 Corentin Thomazeau
##

RM	= rm -f

CC	= gcc

CFLAGS	+= -W -Wall -Wextra -pedantic -g
CFLAGS	+= -I ./include/

NAME	= 109titration

SRCS	= 109titration.c		\
	  src/calc_derivative.c		\
	  src/display_derivative.c	\
	  src/get_next_line.c		\
	  src/open/core.c		\
	  src/open/create.c		\
	  src/open/sort.c		\
	  src/usefull/error.c		\
	  src/usefull/str.c

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

