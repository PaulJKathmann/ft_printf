# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pkathman <pkathman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 15:44:59 by pkathman          #+#    #+#              #
#    Updated: 2023/05/11 20:27:27 by pkathman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = ft_printf.c \
		ft_print_unsigned.c \
		ft_print_string.c \
		ft_print_char.c \
		ft_print_hexa.c \
		ft_print_int.c \
		ft_eval_input.c \
		ft_print_pointer.c \
		ft_print_percent.c \

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rc

DIR = srcs/
SRCS = $(addprefix $(DIR), $(FILES))
OBJS = $(addprefix $(DIR), $(FILES:.c=.o))

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	make clean -C libft

fclean: clean
	$(AR) $(NAME)
	make fclean -C libft

re: fclean all

.PHONY : all clean fclean re

