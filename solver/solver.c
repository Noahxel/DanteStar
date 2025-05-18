/*
** EPITECH PROJECT, 2021
** DevPack
** File description:
** main
*/

#include "../include/dante.h"

void fill_final_arr(solve_t *solve, int i, int j)
{
    if (ARR[i][j] == 'o')
        solve->arr_copy[i][j] = 'o';
}

void copy_arr(solve_t *solve)
{
    ARR[0][0] = 'o';
    for (int i = 0; ARR[i]; i++) {
        for (int j = 0; ARR[i][j] != '\0'; j++)
            fill_final_arr(solve, i, j);
    }
    my_put_word_arr(ARR_COPY);
}

void my_solver(solve_t *solve)
{
    int check = 0;
    int check_stuck = 0;

    for (int i = 0; ARR[Y - 1][X - 1] == '*'; i++) {
        check_stuck = is_stuck(solve, check);
        if (ARR[0][1] == 'X' && ARR[1][0] == 'X') {
            printf("no solution found\n");
            return;
        } else if (check_stuck < 3) {
            move(solve);
            ARR[curr_y][curr_x] = 'o';
            continue;
        }
        solve->remind_x = curr_x;
        solve->remind_y = curr_y;
        move(solve);
        ARR[solve->remind_y][solve->remind_x] = 'X';
    }
    copy_arr(solve);
}
