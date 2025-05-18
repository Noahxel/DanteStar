/*
** EPITECH PROJECT, 2021
** dante
** File description:
** create_maze_.c
*/

#include "../include/dante.h"

void create_maze(gene_t *gene)
{
    int i = 0;
    int j = 0;
    gene->arr_maze = malloc(sizeof(char *) * (gene->y + 1));

    for (int i = 0; i < gene->y; i++)
        gene->arr_maze[i] = malloc(sizeof(char) * (gene->x + 1));
    for (; i < gene->y; i++) {
        for (j = 0; j < gene->x; j++) {
            gene->arr_maze[i][j] = 'X';
        }
        gene->arr_maze[i][j] = '\0';
    }
    gene->arr_maze[i + 1] = NULL;
}
