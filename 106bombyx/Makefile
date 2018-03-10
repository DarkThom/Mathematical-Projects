##
## Makefile for  in /home/BLENEA_T/Projects/Semestre_2/math/106bombyx
## 
## Made by Thomas BLENEAU
## Login   <BLENEA_T@epitech.net>
## 
## Started on  Mon Feb  6 17:50:19 2017 Thomas BLENEAU
## Last update Mon Feb  6 20:55:36 2017 Thomas BLENEAU
##

RM	= rm -f

CC	= gcc

CFLAGS	+= -W -Wall -Wextra -Werror -pedantic -g
CFLAGS	+= -I ./include/

LDFLAGS	+= -lm

NAME	= 106bombyx

SRCS	= main.c \
	  ./src/calc/calc.c \
	  ./src/error/check_nbr.c \
	  ./src/help_command.c \
	  ./src/lib/my_strcmp.c \

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

