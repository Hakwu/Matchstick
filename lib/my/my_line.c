/*
** EPITECH PROJECT, 2020
** my_line.c
** File description:
** line
*/

#include "../../include/my.h"

int my_line(char *str, data_s *data)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' && str[i] != '\0' && str[i] != '\n') || (str[i] > '9'
&& str[i] != '\0' && str[i] != '\n') || str[0] == '\n') {
            return (-10);
        }
    }
    if (my_getnbr(str) < 1 || my_getnbr(str) > data->n)
        return (-20);
}
