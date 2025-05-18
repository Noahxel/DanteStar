##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile main.c and u.t
##

SRCTEST		=		../test/test_project.c

SRC		=		main.c	\
				set_gene_struct.c	\
				create_maze.c	\
				generator_perfect.c	\
				which_argument_higher.c	\
				generator_imperfect.c

TEST		=		unit_tests

NAME		=		generator

OBJ		=		$(SRC:.c=.o)

LDFLAGS		=		-L../lib/my -lmy
CFLAGS		=		-Wall -Wextra
TFLAGS		=		--coverage -lcriterion

all:	$(NAME)

$(NAME):		$(OBJ)
		gcc $(CFLAGS) $(OBJ) -o $(NAME) $(LDFLAGS)

tests_run:
		gcc $(CFLAGS) $(SRCTEST) $(SRC) -o $(TEST) $(LDFLAGS) $(TFLAGS)
		./unit_tests
clean:
		rm -f *.o
		rm -f src/*.o
		rm -f $(NAME)
		make clean -C ../lib/my/

fclean: clean
		make fclean -C ../lib/my/
		rm -f *.gcno
		rm -f *.gcda
		rm -f $(TEST)

re: fclean all
		make re -C ../lib/my/
