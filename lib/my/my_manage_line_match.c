/*
** EPITECH PROJECT, 2020
** my_manage_line_match.c
** File description:
** my_manage_line_match
*/

#include "../../include/my.h"

int my_manage_line_match(data_s *data)
{
    size_t line;
    size_t matches;
    line = getline(&data->buf_line, &data->bufsize, stdin);
    if (line == - 1)
        return (0);
    my_line(data->buf_line, data);
    my_cond_for_line(data);
    my_putstr("Matches: ");
    matches = getline(&data->buf_match, &data->bufsize, stdin);
    if (matches == - 1)
        return 0;
    data->manage = 0;
}
