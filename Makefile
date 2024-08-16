##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## antman binary
##

NAME	=	my_paint

LIB	=	-L lib/my/ -lmy

LIBGRH	=	-lcsfml-audio -lcsfml-system -lcsfml-window -lcsfml-graphics

INCLUDE	=	-I ./include/

SRC	= 	src/main.c	\
		src/button.c	\
		src/button2.c	\
		src/button3.c	\
		src/button4.c	\
		src/button5.c	\
		src/draw.c	\
		src/draw2.c	\
		src/sprites.c	\
		src/text.c	\
		src/images.c	\
		src/mouse.c	\
		src/choose.c	\
		src/button_function2.c	\
		src/button_function.c	\
		src/which_button.c	\
		src/array.c	\
		src/array2.c	\
		src/array3.c	\
		src/array4.c	\
		src/array5.c	\
		src/edit_menu.c	\
		src/draw_or_erase2.c	\
		src/file_menu.c	\
		src/help_menu.c	\
		src/font.c	\
		src/string.c	\
		src/string2.c	\



OBJ	=	$(SRC:.c=.o)

CDLIB = lib/my/
all: 	$(NAME)

$(NAME): 	$(OBJ)
		make -C $(CDLIB)
		gcc -g $(OBJ) -o $(NAME) $(INCLUDE) $(LIBGRH) $(LIB)

clean:
	rm -f $(NAME)
	make -C $(CDLIB) fclean
	rm -f libmy.a
	rm -f ./src/*.o


fclean: clean

re: 	fclean all

library: fclean

exec:	re
	./$(NAME)
