/*
** EPITECH PROJECT, 2022
** minishell1
** File description:
** my_print_env
*/

#include "my.h"
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

void my_put_word_arr(char **arr)
{
    int arr_len = (my_arraylen(arr));

    for (int i = 0; arr[i]; i++) {
        write(1, arr[i], my_strlen(arr[i]));
        if (i < arr_len - 1)
            my_putchar('\n');
    }
}
