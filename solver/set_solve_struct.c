/*
** EPITECH PROJECT, 2022
** dante_star
** File description:
** set_solve_struct
*/

#include "../include/dante.h"

void set_solve_struct(solve_t *solve)
{
    char **original = NULL;

    solve->str_maze = extract_str(solve->argv[1]);
    solve->str_maze[my_strlen(solve->str_maze)] = '\n';
    solve->arr_copy = my_str_to_word_array(solve->str_maze, '\n');
    solve->arr_maze = my_str_to_word_array(solve->str_maze, '\n');
    solve->x = my_strlen(solve->arr_maze[0]);
    solve->y = my_arraylen(solve->arr_maze);
    solve->remind_x = 0;
    solve->remind_y = 0;
    solve->current_x = 0;
    solve->current_y = 0;
}
