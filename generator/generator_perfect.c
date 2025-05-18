/*
** EPITECH PROJECT, 2022
** dante_star
** File description:
** generator
*/

#include "../include/dante.h"

void random_choice(gene_t *gene, int y)
{
    for (int x = 2; x < gene->x; x += 2) {
        gene->arr_maze[y][x] = '*';
        if (rand() % 2 == 1)
            gene->arr_maze[y - 1][x] = '*';
        else
            gene->arr_maze[y][x - 1] = '*';
    }
}

void binary_tree_algorithm(gene_t *gene)
{
    srand(time(NULL));
    for (int i = 0; i < gene->x; i++)
        gene->arr_maze[0][i] = '*';
    for (int i = 0; i < gene->y; i++)
        gene->arr_maze[i][0] = '*';
    for (int y = 2; y < gene->y; y += 2)
        random_choice(gene, y);
    if (gene->x % 2 == 0 || gene->y % 2 == 0)
        gene->arr_maze[gene->y - 1][gene->x - 1] = '*';
    if (gene->x % 2 == 0 && gene->y % 2 == 0) {
        if (rand() % 2 == 1)
            gene->arr_maze[gene->y - 1][gene->x - 2] = '*';
        else
            gene->arr_maze[gene->y - 2][gene->x - 1] = '*';
    }
}

void my_generator_perfect(gene_t *gene)
{
    create_maze(gene);
    binary_tree_algorithm(gene);
    my_put_word_arr(gene->arr_maze);
}
