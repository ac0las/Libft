# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acolas-l <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 16:45:53 by acolas-l          #+#    #+#              #
#    Updated: 2023/10/17 18:03:18 by acolas-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libft.a
LIB =	libft.h
RM = 	rm -f
CC =	gcc
AR =	ar -rcs
CFLAGS =	-Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	  ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c  ft_strchr.c \
	  ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	  ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c

OBJS = $(SRC:.c=.o)
all:	$(NAME)
$(NAME): $(OBJS) 
	$(AR) $(NAME) $(OBJS)
bonus:	$(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re bonus