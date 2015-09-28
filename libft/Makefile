# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lboudaa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/30 18:57:09 by lboudaa           #+#    #+#              #
#    Updated: 2015/03/13 19:39:38 by lboudaa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC = ft_strmap.c ft_striteri.c ft_striter.c ft_strclr.c ft_strdel.c \
	ft_strnew.c ft_memdel.c ft_memalloc.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl.c ft_putnbr.c ft_putchar.c \
	ft_putstr.c ft_memchr.c ft_memcmp.c ft_strdup.c ft_strncmp.c \
	ft_strstr.c ft_strnstr.c ft_isprint.c ft_memcpy.c ft_strlcat.c ft_atoi.c \
	ft_memccpy.c ft_memmove.c ft_strrchr.c ft_memset.c ft_bzero.c ft_strlen.c \
	ft_tolower.c ft_isalnum.c ft_strcat.c ft_strncat.c ft_toupper.c \
	ft_isalpha.c ft_strchr.c ft_isascii.c ft_strcmp.c ft_strncpy.c \
	ft_strequ.c ft_strnequ.c ft_isdigit.c ft_strcpy.c ft_strmapi.c \
	ft_strsub.c ft_strjoin.c ft_strtrim.c ft_reverse.c ft_itoa.c \
	ft_isspace.c ft_strclen.c ft_intlen.c ft_strsplit.c ft_count_words.c \
	ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c \
	ft_lstmap.c ft_sort_int_tab.c ft_needs_sort.c ft_swap.c ft_union.c \
	ft_hidenp.c ft_rotone.c ft_epur_str.c ft_nospace_strlen.c ft_lstpush.c \
	ft_power.c ft_abs.c ft_strlower.c ft_strupper.c ft_sort_ascii_list.c \
	ft_sort_ascii_string.c ft_putnbr_base.c ft_putnbr_base_fd.c \
	ft_freecontent.c get_next_line.c

NAMEO = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		gcc -c -g3 $(SRC) -Wall -Wextra -Werror -I ./
		ar rc $(NAME) $(NAMEO)
		ranlib $(NAME)

clean:
		rm -f $(NAMEO)

fclean:
		rm -f $(NAMEO) $(NAME)

re : fclean all
