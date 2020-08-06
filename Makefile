##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile with make
##

SRC	=	matchstick.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

all: $(NAME)

$(NAME):	$(OBJ)
	@ make -C lib/my
	@ echo "[INFO]: lib compiled !"
	@ gcc -lncurses -o $(NAME) $(OBJ) -L lib/my -lmy -g
	@ echo "[OK]: Compiled succesfully !"

%.o:	%.c
	@ echo "[INFO]: Compiling" $<
	@ gcc -o $@ -c $< -L lib/my -lmy

clean:
	@ rm -f $(OBJ)
	@ echo "[INFO]: Removed compiled files"
	@ rm -f *~ *#
	@ echo "[INFO]: Removed useless files"

fclean:	clean
	@ rm -f $(NAME)
	@ echo "[INFO]: Removed binary ->" $(NAME)
	@ make fclean -C lib/my
	@ echo "[INFO]: removed lib"

re: fclean all

.PHONY: all re clean fclean
