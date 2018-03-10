##
## Makefile for  in /home/BLENEA_T/Piscine/CPool_evalexpr
##
## Made by Thomas BLENEAU
## Login   <BLENEA_T@epitech.net>
##
## Started on  Thu Oct 27 18:31:21 2016 Thomas BLENEAU
## Last update Thu Nov 17 15:33:54 2016 Thomas BLENEAU
##

RM	= rm -f

CC	= gcc -ansi -lm

LM	= -lm

CFLAGS	+= -Wextra -Wall -Werror -W
CFLAGS	+= -I ./include/

LDFLAGS	=

NAME	= 101pong

SRCS	= my_getnbr.c \
	  isnum.c \
	  isnum_v2.c \
	  101pong.c \

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
