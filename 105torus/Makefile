##
## Makefile for  in /home/BLENEA_T/Projects/math/105torus
## 
## Made by Thomas BLENEAU
## Login   <BLENEA_T@epitech.net>
## 
## Started on  Mon Jan  9 11:16:10 2017 Thomas BLENEAU
## Last update Thu Jan 19 17:33:16 2017 Thomas BLENEAU
##

RM	= rm -f

CC	= gcc

CFLAGS	+= -W -Wextra -pedantic
CFLAGS	+= -I ./include/

LDFLAGS	+= -lm

NAME	= 105torus

SRCS	= 105torus.c \
	  ./src/calc_bisection.c \
	  ./src/calc_newton.c \
	  ./src/calc_secant.c \
	  ./src/check_my_params.c \
	  ./src/display_result.c \
	  ./src/my_putnbr_double.c \
	  ./src/utilities.c \

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

