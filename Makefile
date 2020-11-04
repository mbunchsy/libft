# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mramos-j <mramos-j@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 00:04:55 by clopez-r          #+#    #+#              #
#    Updated: 2019/11/28 17:13:24 by mramos-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		=	ft_atoi.c			ft_bzero.c			ft_calloc.c		\
			ft_isalpha.c		ft_isalnum.c		ft_isdigit.c	\
			ft_isprint.c		ft_calloc.c			ft_strdup.c		\
			ft_memccpy.c		ft_memcpy.c			ft_substr.c		\
			ft_memmove.c		ft_memset.c			ft_strjoin.c	\
			ft_strrchr.c		ft_strtrim.c		ft_split.c		\
			ft_strlcat.c		ft_itoa.c			ft_strmapi.c	\
			ft_strlcpy.c		ft_strlen.c			ft_putnbr_fd.c	\
			ft_strncmp.c		ft_putchar_fd.c		ft_strnstr.c	\
			ft_strchr.c			ft_putstr_fd.c		\
			ft_tolower.c		ft_putendl_fd.c		\
			ft_toupper.c		ft_isascii.c		\
			ft_memchr.c			ft_memcmp.c			


CFLAGS	=	-Wall -Wextra -Werror -I

OBJ		=	$(SRC:.c=.o)

BONUS	=	ft_lstnew_bonus.c		ft_lstadd_front_bonus.c	ft_lstsize_bonus.c		\
			ft_lstlast_bonus.c		ft_lstadd_back_bonus.c	ft_lstdelone_bonus.c	\
			ft_lstclear_bonus.c		ft_lstiter_bonus.c		ft_lstmap_bonus.c

BOBJ	=	$(BONUS:.c=.o)

all:	$(NAME)
$(NAME): $(SRC) libft.h
	-@gcc $(CFLAGS) ./ -c $(SRC)
	-@ar -rc $(NAME) $(OBJ)
	-@ranlib $(NAME)

clean:
	-@rm -f *.o
	-@rm -f *.out

fclean:	clean
	-@rm -f $(NAME)

re:		fclean all

bonus: $(BOBJ)
	-@gcc $(CFLAGS) ./ -c $(BONUS)
	-@ar -rc $(NAME) $(BOBJ)
	-@ranlib $(NAME)

.PHONY:	all clean fclean re bonus 

test_h:
	cd /Users/mramos-j/000ESCUELA/test/test2 && make f 
	cd /Users/mramos-j/000ESCUELA/test/libft_mramos

t: test_h fclean
