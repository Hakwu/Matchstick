/*
** EPITECH PROJECT, 2020
** my_manage_txt.c
** File description:
** manage txt
*/

#include "../../include/my.h"

void my_manage_txt(data_s *data)
{
    if (data->manage == 1)
        my_putstr("Line: ");
    else {
        my_putchar('\n');
        my_putstr("Your turn:\n");
        my_putstr("Line: ");
    }
}
