##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile faster
##

SRC	=	my_getnbr.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_getnbr.c	\
		my_putchar.c	\
		my_strlen.c	\
		my_strcut.c	\
		my_longest_line.c\
		my_itoa.c	\
		my_nb_of_stick.c\
		my_stick_remain_line.c\
		take_my_stick.c	\
		print_game_board.c\
		my_line.c	\
		my_match.c	\
		my_lose_win.c	\
		my_manage_txt.c	\
		my_cond_for_line.c	\
		my_manage_line_match.c	\

OBJ	=	$(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	@ ar rc $(NAME) $(OBJ)
	@ echo "[INFO]: lib compiled !"

%.o:	%.c
	@ echo "[INFO]: Compiling" $<
	@ gcc -o $@ -c $<

clean:
	@ rm -f $(OBJ)
	@ echo "[INFO]: files removed !"

fclean: clean
	@ rm -f $(NAME)
	@ echo "[INFO]: removed binary ->" $(NAME)

re:	fclean all
