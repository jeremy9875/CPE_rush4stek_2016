##
## Makefile for Makefile in /home/d.kevin/delivery/tekadventure
## 
## Made by Kevin DA PONTE
## Login   <d.kevin@epitech.net>
## 
## Started on  Tue Apr  4 12:00:13 2017 Kevin DA PONTE
## Last update Sun Jun  4 19:36:38 2017 jeremy elkaim
## Last update Tue Apr  4 15:34:02 2017 Kevin DA PONTE
##

CC			=	gcc

SRC			=	src/main.c

SRC_LIB			=

OBJS			=	$(SRC:.c=.o)

TMP			=	$(SRC:.c=.c~)

DEBUG_FLAGS		=	-g3

RM			=	rm -rf

OBJ			=	$(SRC_LIB:.c=.o)

CFLAGS			=	-Wall -Wextra -Werror

CPPFLAGS		=	-I ./include/

LDFLAGS			=	-L ./lib/my -lmy

NAME			=	rush4stek

LIB			=	./lib/my/libmy.a

all: $(LIB) $(NAME)

$(LIB): $(OBJ)
	ar rc $(LIB) $(OBJ)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFLAGS)

debug: $(OBJS) $(LIB)
	$(CC) -o $(NAME) $(OBJS) $(DEBUG_FLAGS) $(CFLAGS) $(LDFLAGS)

clean:
	$(RM) $(OBJS) $(OBJ) $(TMP)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIB)

re: fclean all

.PHONY: all debug clean fclean re
