##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

CC	=	gcc

SRC =		my/my_putchar.c \
			my/my_isneg.c \
			my/my_put_nbr.c \
			my/my_swap.c \
			my/my_putstr.c \
			my/my_strlen.c \
			my/my_getnbr.c \
			my/my_sort_int_array.c \
			my/my_compute_power_rec.c \
			my/my_compute_square_root.c \
			my/my_is_prime.c \
			my/my_find_prime_sup.c \
			my/my_strcpy.c \
			my/my_strncpy.c \
			my/my_revstr.c \
			my/my_strstr.c \
			my/my_strcmp.c \
			my/my_strncmp.c \
			my/my_strupcase.c \
			my/my_strlowcase.c \
			my/my_strcapitalize.c \
			my/my_str_isalpha.c \
			my/my_str_isnum.c \
			my/my_str_islower.c \
			my/my_str_isupper.c \
			my/my_str_isprintable.c \
			my/my_showstr.c \
			my/my_showmem.c \
			my/my_strcat.c \
			my/my_strncat.c \
			my_printf/my_printf.c \
			my_printf/display_format.c \
			my_printf/display_dot_format.c\
			my_printf/display_dieseformat.c\
			my_printf/display_nbrbase.c \
			my_printf/libmy_functions.c \
			my_printf/putnbr_manage.c \

OBJ =	${SRC:.c=.o}

NAME =	libmy.a


all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	rm -rf $(OBJ) ../$(OBJ)
clean:
	find . -type f | xargs touch
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
