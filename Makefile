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


######################################################################################
###
### COMPILATION
###

SRC	=	src/main.c				\
		src/command_line/get_parameters.c	\
		src/command_line/display_help.c		\
		src/command_line/display_about.c	\
		src/system/log.c

OBJ	=	$(SRC:.c=.o)

NAME	=	2D-SP

CC	=	gcc

INCLUDE_F =	-I./headers/

CPPFLAGS +=	$(INCLUDE_F)

ERROR_F	=	-Wall -Werror

CSFML_F	=	-lSFML/System.h -lSFML/Window.h -lSFML/Graphics.h -lSFML/Audio.h

CFLAGS	+=	-D_GNU_SOURCE $(ERROR_F) $(CSFML_F)

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

######################################################################################
###
### LOGS
###

LOG	=	logs/*.log

logs:
	find $(LOG)  -type f -mtime +30 -print | xargs rm -rf

logs_all:
	rm $(LOG)

.PHONY:	logs	logs_all
