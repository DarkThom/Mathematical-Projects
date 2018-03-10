##
## Makefile for  in /home/BLENEA_T/Projects/math/103architect
## 
## Made by Thomas BLENEAU
## Login   <BLENEA_T@epitech.net>
## 
## Started on  Mon Dec  5 13:19:21 2016 Thomas BLENEAU
## Last update Sat Dec 17 10:15:01 2016 Thomas BLENEAU
##

RM	= rm -f

CC	= gcc -lm

CFLAGS	+= -W -Wall -Wextra -Werror -pedantic
CFLAGS	+= -I ./include/

NAME	= 103architect

SRCS	= 103architect.c \
	  ./src/calc_matrix.c \
	  ./src/calc_final_point.c \
	  ./src/check_my_params.c \
	  ./src/display_matrix.c \
	  ./src/nbr_flags.c \
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

