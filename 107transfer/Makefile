##
## Makefile for  in /home/BLENEA_T/Projects/Semestre_2/math/107transfer
##
## Made by Thomas BLENEAU
## Login   <BLENEA_T@epitech.net>
##
## Started on  Thu Feb 16 16:19:56 2017 Thomas BLENEAU
## Last update Tue Feb 28 19:07:24 2017 Corentin Thomazeau
##

RM	= rm -f

CC	= gcc

CFLAGS	+= -W -Wall -Wextra -pedantic -g
CFLAGS	+= -I ./include/

LDFLAGS	+= -lm

NAME	= 107transfer

SRCS	= main.c \
	  ./src/check_params.c \
	  ./src/check_sign.c \
	  ./src/help_command.c \
	  ./src/my_strcmp.c \
	  ./src/parsing_file.c \
	  ./src/str_isnum.c \
	  ./src/calc/calc_polynome.c \
	  ./src/calc/display_it.c \
	  ./src/start/equa.c \
	  ./usefull/use_nbr.c \
	  ./usefull/use_str.c \
	  ./src/start/setup.c

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
