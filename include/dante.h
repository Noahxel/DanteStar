/*
** EPITECH PROJECT, 2021
** DevPack
** File description:
** project
*/

#include "my.h"
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <stdio.h>

#ifndef PROJECT_H_
    #define PROJECT_H_
    #define ARR solve->arr_maze
    #define ARR_COPY solve->arr_copy
    #define X solve->x
    #define Y solve->y
    #define curr_x solve->current_x
    #define curr_y solve->current_y

typedef struct gene_s {
    int argc;
    char **argv;
    char *maze;
    char **arr_maze;
    int x;
    int y;
} gene_t;

typedef struct solve_s {
    int argc;
    char **argv;
    char *str_maze;
    char **arr_maze;
    char **arr_copy;
    int current_x;
    int current_y;
    int x;
    int y;
    int remind_x;
    int remind_y;
} solve_t;

void set_solve_struct(solve_t *solve);

void my_solver(solve_t *solve);

void my_generator_perfect(gene_t *gene);

void my_generator_imperfect(gene_t *gene);

void set_gene_struct(gene_t *gene, int argc, char **argv);

int which_argument_higher(int x, int y);

void display_tab(int **tab);

void move(solve_t *solve);

int is_stuck(solve_t *solve, int check);

void create_maze(gene_t *gene);

#endif
