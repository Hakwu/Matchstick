/*
** EPITECH PROJECT, 2020
** my_match.c
** File description:
** my_match
*/

#include "../../include/my.h"

int my_match(char *str, data_s *data)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' && str[i] != '\0' && str[i] != '\n') || (str[i] > '9'
&& str[i] != '\0' && str[i] != '\n') || str[0] == '\n') {
            return (-30);
        }
    }
    if (my_getnbr(str) > my_stick_remain_line(data))
        return (-40);
    if (my_getnbr(str) < 1)
        return (-50);
    if (my_getnbr(str) > data->max_matches)
        return (-60);
}

