# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaimarah <jaimarah@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/16 12:25:35 by jaimarah          #+#    #+#              #
#    Updated: 2026/01/17 11:33:46 by jaimarah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c \
       ft_indexing.c \
       ft_parsing.c \
       ft_parsing_utils.c \
       ft_parsing_utils2.c \
       ft_push_utils.c \
       ft_radix_sort.c \
       ft_reverse_rotate_utils.c \
       ft_rotate_utils.c \
       ft_small_sorts.c \
       ft_small_sorts2.c \
       ft_split.c \
       ft_swap_utils.c \
       ft_utils.c \
	   ft_utils2.c \
       stack_utils.c 

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re