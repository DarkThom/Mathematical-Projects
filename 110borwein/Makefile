##
## Makefile for  in /home/BLENEA_T/Projects/Semestre_2/math/110borwein
## 
## Made by Thomas BLENEAU
## Login   <BLENEA_T@epitech.net>
## 
## Started on  Mon Apr  3 11:36:05 2017 Thomas BLENEAU
## Last update Mon Apr  3 18:05:43 2017 Thomas BLENEAU
##

RM	= rm -f

CC	= gcc

CFLAGS	+= -W -Wall -Wextra -pedantic -g
CFLAGS	+= -I ./include/

LDFLAGS	+= -lm

NAME	= 110borwein

SRCS	= 110borwein.c		\
	  src/calc/base.c	\
	  src/calc/rect.c	\
	  src/calc/trap.c	\
	  src/calc/simp.c	\
	  src/str_cmp.c		\
	  src/str_isnum.c	\
	  src/use/error.c

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

