# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabriel-scm <gabriel-scm@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/10 00:47:04 by gabriel-scm       #+#    #+#              #
#    Updated: 2021/02/19 15:08:15 by gabriel-scm      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
FLAGS	= -Wall -Werror -Wextra
CREATE	= ar crs
NAME	= libft.a
LIB		= libft.h

FUNCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c \
			ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
			ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c  \
			ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_strdup.c \
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
			ft_strmapi.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c

all:		$(NAME)

$(NAME):	$(FUNCS:.c=.o) $(LIB)
			$(CREATE) $(NAME) $(FUNCS:.c=.o)

clean:
			rm -f $(FUNCS:.c=.o)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

so:			$(FUNCS:.c=.o) $(LIB)
			$(CC) -shared -fPIC -Wl,-soname,libft.so -o libft.so $(FUNCS:.c=.o)

.PHONY: all clean fclean re so