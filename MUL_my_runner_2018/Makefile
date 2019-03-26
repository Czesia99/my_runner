SRC =	main.c \
		window_manage.c \
		events_manage.c \
		object_manage.c \
		viking_manage.c \
		viking_moves.c \
		viking_animations.c \
		background_manage.c \
		clocks_manage.c \
		initialisation.c \
		linked_list.c \
		running_game.c \
		display.c \
		clear.c \
		map_manage.c \
		victory_manage.c \
		menu_manage.c \
		text_create.c \
		map_file_manage.c \
		manual.c \

OBJ = $(SRC:.c=.o)

NAME =	my_runner

CFLAGS =  -Wall -Wextra -Werror -g

LDFLAGS = -lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio -lm -L lib/ -lmy

all: $(NAME)

$(NAME): $(OBJ)
	make -C lib
	gcc $(OBJ) -o $(NAME) $(LDFLAGS)
	rm -f $(OBJ)

clean:
	make -C lib clean
	rm -rf $(OBJ)

fclean: clean
	make -C lib fclean
	rm -rf $(NAME)

re: fclean all
