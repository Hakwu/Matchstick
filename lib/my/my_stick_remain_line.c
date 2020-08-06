/*
** EPITECH PROJECT, 2020
** my_stick_remain_line.c
** File description:
** stick remaining per line
*/

#include "../../include/my.h"

int my_stick_remain_line(data_s *data)
{
    data->stick_remain_line = 0;
    for (int j = 0; data->tab[my_getnbr(data->buf_line)][j] != '\0'; j++) {
        if (data->tab[my_getnbr(data->buf_line)][j] == '|')
            data->stick_remain_line++;
    }
    return (data->stick_remain_line);
}
