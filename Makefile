# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbaumann <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 18:18:02 by lbaumann          #+#    #+#              #
#    Updated: 2018/03/03 05:55:53 by lbaumann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_strlen.c 	ft_strnstr.c	ft_isdigit.c	ft_putendl.c	\
		ft_strdup.c 	ft_strsplit.c 	ft_isalnum.c	ft_putnbr.c		\
		ft_countwords.c	ft_memalloc.c 	ft_isascii.c	ft_putchar_fd.c	\
		ft_strcpy.c 	ft_bzero.c		ft_isprint.c	ft_putstr_fd.c	\
		ft_strncpy.c 	ft_memcpy.c		ft_strmap.c		ft_putendl_fd.c	\
		ft_strcat.c 	ft_memccpy.c	ft_strmapi.c	ft_putnbr_fd.c	\
		ft_strncat.c 	ft_memmove.c	ft_strequ.c		ft_toupper.c	\
		ft_strlcat.c 	ft_memchr.c		ft_strnequ.c	ft_tolower.c	\
		ft_strchr.c 	ft_memcmp.c		ft_strsub.c		ft_strnew.c		\
		ft_strrchr.c 	ft_strcmp.c		ft_strjoin.c	ft_strdel.c		\
		ft_strstr.c 	ft_strncmp.c	ft_strtrim.c	ft_strclr.c		\
		ft_strrev.c 	ft_atoi.c		ft_putchar.c	ft_striter.c	\
		ft_nlen.c 		ft_isspace.c	ft_memdel.c		ft_striteri.c	\
		ft_itoa.c 		ft_isalpha.c	ft_putstr.c		ft_memset.c		\
		ft_lstnew.c		ft_lstdelone.c	ft_lstdel.c		ft_lstadd.c		\
		ft_lstiter.c	ft_lstmap.c		ft_isupper.c	ft_strclen.c	\
		ft_strcdup.c	ft_error.c		ft_swapchar.c	\
		ft_strjoinfree.c get_next_line.c \

OBJ_NAME = $(SRC:.c=.o)

GCCFLAG = -Werror -Wall -Wextra

all: $(NAME)

$(NAME):
	@gcc $(GCCFLAG) -c $(SRC)
	@ar rc $(NAME) $(OBJ_NAME)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ_NAME)
fclean: clean
	@rm -f $(NAME)
re : fclean all
