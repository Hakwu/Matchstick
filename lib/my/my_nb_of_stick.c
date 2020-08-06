/*
** EPITECH PROJECT, 2020
** my_nb_of_stick.c
** File description:
** nb of stick
*/

#include "../../include/my.h"

int my_nb_of_stick(data_s *data)
{
    data->stick_remain = 0;
    for (int i = 0; i != data->n + 2; i++) {
        for (int j = 0; data->tab[i][j] != '\0'; j++) {
            if (data->tab[i][j] == '|')
                data->stick_remain++;
        }
    }
    return (data->stick_remain);
}
