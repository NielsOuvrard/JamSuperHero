##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## un makefile de qualité spécial lem-in
##

SRC = 	src/*.c

FLAGS = -g3 -g -Wall -Wextra -lncurses

BINARY = JamSuperHero

LIB = -I./include/ -L./lib/my/ -lmy

all:
		@cp ./lib/my/my.h include/my.h
		@gcc -c lib/my/*.c
		@ar rc lib/my/libmy.a *.o
		@gcc -o $(BINARY) src/*.c $(LIB) $(FLAGS)
		@rm -Rf *.o

clean:
		@echo "compilation : [\033[32mSUCCESS\033[0m]"
		@rm -Rf *.o
		@rm -Rf *.gcno
		@rm -Rf *.gcda
		@rm -Rf .vscode

fclean: clean
		rm -Rf lib/my/libmy.a
		rm -Rf lib/libmy.a
		rm -Rf $(BINARY)

re:	fclean all

mac_del:
		rm -R *.dSYM
		rm -R .vscode
		rm -R .DS_Store

auteur:
		@echo $(USER) is the best


vg_del:
		rm vgcore.*

.PHONY: all clean fclean re vg_del mac_del