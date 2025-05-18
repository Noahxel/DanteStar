##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile main.c and u.t
##

SRCTEST		=		test/test_project.c

TEST		=		unit_tests

LDFLAGS		=		-Llib/my -lmy
CFLAGS		=		-Wall -Wextra
TFLAGS		=		--coverage -lcriterion

all:
		make re -C lib/my/
		make -C solver/
		make -C generator/

tests_run:
		make tests_run -C generator/
		make tests_run -C solver/
		./unit_tests
clean:
		rm -f *.o
		make clean -C lib/my/
		make clean -C solver/
		make clean -C generator/

fclean: clean
		make fclean -C lib/my/
		make fclean -C generator/
		make fclean -C solver/
		rm -f *.gcno
		rm -f *.gcda
		rm -f $(TEST)

re: fclean all
