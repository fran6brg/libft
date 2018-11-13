#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fberger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 17:33:34 by fberger           #+#    #+#              #
#    Updated: 2018/11/13 19:53:33 by fberger          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = *.c
OBJS = $(SRCS:.c=.o)
HEADERS = libft.h

$(NAME):
	$(CC) $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

all: $(NAME)	

clean:
	/bin/rm -rf $(OBJS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
