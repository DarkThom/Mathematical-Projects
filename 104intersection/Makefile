##
## Makefile for  in /home/BLENEA_T/Projects/math/104intersection
## 
## Made by Thomas BLENEAU
## Login   <BLENEA_T@epitech.net>
## 
## Started on  Mon Dec 19 17:05:13 2016 Thomas BLENEAU
## Last update Mon Dec 19 19:50:31 2016 Thomas BLENEAU
##

RM	= rm -f

CC	= gcc

CFLAGS	+= -W -Wall -Wextra -Werror -pedantic
CFLAGS	+= -I ./include/

LDFLAGS	+= -lm

NAME	= 104intersection

SRCS	= 104intersection.c \
	  ./src/calc_dimension.c \
	  ./src/calc_discrimant.c \
	  ./src/check_my_params.c \
	  ./src/display_function.c \
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

