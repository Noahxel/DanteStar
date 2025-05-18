/*
** EPITECH PROJECT, 2021
** DevPack
** File description:
** main
*/

#include "../include/dante.h"

int handle_errors(int argc, char **argv)
{
    if (argc < 3) {
        my_putstr("{Argument} ERROR n°04 : not enough arguments\n");
        return (1);
    }
    if (argc >= 5) {
        my_putstr("{Argument} ERROR n°05 : too much arguments\n");
        return (1);
    }
    if (atoi(argv[1]) <= 2 || atoi(argv[2]) <= 2) {
        my_putstr("{Argument} ERROR n°06 : to small dimensions\n");
        return (1);
    }
    if (argc == 4) {
        if (my_strcmp(argv[3], "perfect") != 0) {
            my_putstr("{Argument} ERROR n°07 : invalid option\n");
            return (1);
        }
    }
    return (0);
}

int find_option(gene_t *gene)
{
    if (gene->argc == 4) {
        if (my_strcmp(gene->argv[3], "perfect") == 0)
            return (1);
    }
    if (gene->argc == 3)
        return (2);
    return (0);
}

int main(int argc, char **argv)
{
    gene_t *gene = malloc(sizeof(gene_t));

    if (handle_errors(argc, argv) == 1)
        return (84);
    set_gene_struct(gene, argc, argv);
    if (find_option(gene) == 2)
        my_generator_imperfect(gene);
    else if (find_option(gene) == 1)
        my_generator_perfect(gene);
    return (0);
}
