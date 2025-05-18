/*
** EPITECH PROJECT, 2021
** DevPack
** File description:
** main
*/

#include "../include/dante.h"

int handle_error_maze(int argc, char **argv)
{
    char *str_maze = extract_str(argv[1]);

    if (str_maze[0] == 'X') {
        my_putstr("{File} ERROR n°01: no entry\n");
        return (1);
    }
    if (str_maze[my_strlen(str_maze) - 1] == 'X') {
        my_putstr("{File} ERROR n°02 : no exit\n");
        return (1);
    }
    if (str_maze[my_strlen(str_maze) - 1] == 'X' && str_maze[0] == 'X') {
        my_putstr("{File} ERROR n°03: no entry and no exit !");
        return (1);
    }
    return (0);
}

int handle_error(int argc, char **argv)
{
    struct stat len;
    int fd = open(argv[1], O_RDONLY);
    char buf[1];

    if (argc != 2)
        return (1);
    stat(argv[1], &len);
    if (fd == -1) {
        write(2, "Unable to open file\n", 20);
        close (fd);
        return (1);
    }
    if (len.st_size <= 0) {
        write(2, "File is empty\n", 14);
        close(fd);
        return (1);
    }
    if (read(open(argv[1], O_RDONLY), buf, 1) == -1)
        write(2, "Unable to read the file\n", 24);
    return (handle_error_maze(argc, argv));
}

int main(int argc, char **argv)
{
    solve_t *solve = malloc(sizeof(solve_t));

    if (handle_error(argc, argv) == 1)
        return (84);
    solve->argc = argc;
    solve->argv = argv;
    set_solve_struct(solve);
    my_solver(solve);
    return (0);
}
