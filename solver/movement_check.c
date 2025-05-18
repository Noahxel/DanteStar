/*
** EPITECH PROJECT, 2022
** dante_star
** File description:
** movement_check
*/

#include "../include/dante.h"

int is_stuck(solve_t *solve, int check)
{
    if (curr_x == 0 && curr_y == 0)
        return (check);
    if (curr_x == 0)
        check++;
    else if (ARR[curr_y][curr_x - 1] == 'X')
        check++;
    if (curr_x == X - 1)
        check++;
    else if (ARR[curr_y][curr_x + 1] == 'X')
        check++;
    if (curr_y == 0)
        check++;
    else if (ARR[curr_y - 1][curr_x] == 'X')
        check++;
    if (curr_y == Y - 1)
        check++;
    else if (ARR[curr_y + 1][curr_x] == 'X')
        check++;
    return (check);
}

void move2(solve_t *solve)
{
    if (curr_x != 0) {
        if (ARR[curr_y][curr_x - 1] == '*' || ARR[curr_y][curr_x - 1] == 'o') {
            curr_x--;
            return;
        }
    }
    if (curr_y != 0) {
        if (ARR[curr_y - 1][curr_x] == '*' || ARR[curr_y - 1][curr_x] == 'o') {
            curr_y--;
            return;
        }
    }
}

void move(solve_t *solve)
{
    if (curr_x != X - 1) {
        if (ARR[curr_y][curr_x + 1] == '*' || ARR[curr_y][curr_x + 1] == 'o') {
            curr_x++;
            return;
        }
    }
    if (curr_y != Y - 1) {
        if (ARR[curr_y + 1][curr_x] == '*' || ARR[curr_y + 1][curr_x] == 'o') {
            curr_y++;
            return;
        }
    }
    move2(solve);
}
