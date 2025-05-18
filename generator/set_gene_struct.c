/*
** EPITECH PROJECT, 2022
** dante_star
** File description:
** set_solve_struct
*/

#include "../include/dante.h"

void set_gene_struct(gene_t *gene, int argc, char **argv)
{
    gene->argc = argc;
    gene->argv = argv;
    gene->x = atoi(gene->argv[1]);
    gene->y = atoi(gene->argv[2]);
    gene->arr_maze = NULL;
}
