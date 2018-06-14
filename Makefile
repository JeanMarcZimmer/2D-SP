##
## PROJECT:
## C_Open Space Program
##
## OWNER:
## Jean-Marc Zimmer
## jeanmarczimmer56@gmail.com
##
## FILE: Makefile
##

SRC	=	src/main.c				\
		src/command_line/get_parameters.c	\
		src/command_line/display_help.c		\
		src/command_line/display_about.c

OBJ	=	$(SRC:.c=.o)

NAME	=	C-OSP

CC	=	gcc

INCLUDE_F =	-I./headers/

CPPFLAGS +=	$(INCLUDE_F)

ERROR_F	=	-Wall -Werror

CSFML_F	=	-lSFML/System.h -lSFML/Window.h -lSFML/Graphics.h -lSFML/Audio.h

CFLAGS	+=	$(ERROR_F) $(CSFML_F)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean	all

exec:	re
	$(RM) $(OBJ)

.PHONY:	all	clean	fclean	re	exec
