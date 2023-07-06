# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbulak-b <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/28 10:34:24 by bbulak-b          #+#    #+#              #
#    Updated: 2023/06/28 10:34:44 by bbulak-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_print_hex.c ft_print_ptr.c ft_print_strs.c ft_print_unsigned.c ft_printf.c

OBJS = $(SRCS:.c=.o)

# $@ - target
# $^ - all dependent
# $< - first dependent

all: ${NAME}

${NAME}: $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a ${NAME}
	ar rcs ${NAME} ${OBJS}
	
.c.o:
	${CC} ${CFLAGS} -c $^ -o $@

clean:
	$(MAKE) clean -C ./libft
	rm -f ${OBJS}

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f ${NAME}

re: fclean all
