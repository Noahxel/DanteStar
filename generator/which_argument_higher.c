/*
** EPITECH PROJECT, 2021
** dante
** File description:
** which_argument_higher.c
*/

#include "../include/dante.h"

int which_argument_higher(int x, int y)
{
    if (x < y)
        return (y);
    return (x);
}
