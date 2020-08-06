/*
** EPITECH PROJECT, 2020
** my_lose_win.c
** File description:
** manage the lose win cond
*/

#include "../../include/my.h"

int my_lose_win(data_s *data)
{
    if (my_nb_of_stick(data) == 0 && data->turn == 1) {
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (1);
    }
    else {
        my_putstr("You lost, too bad...\n");
        return (2);
    }
}
