/*
** EPITECH PROJECT, 2020
** my_cond_for_line.c
** File description:
** conditions for the lines
*/

#include "../../include/my.h"

int my_cond_for_line(data_s *data)
{
    size_t line;
    while (my_line(data->buf_line, data) == -10 || my_line(data->
buf_line, data) == -20) {
        if (my_line(data->buf_line, data) == -10)
            my_putstr("Error: invalid input (positive number expected)\n");
        else
            my_putstr("Error: this line is out of range\n");
        my_putstr("Line: ");
        line = getline(&data->buf_line, &data->bufsize, stdin);
        if (line == - 1)
            return (0);
        my_line(data->buf_line, data);
    }
}
