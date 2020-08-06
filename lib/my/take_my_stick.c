/*
** EPITECH PROJECT, 2020
** take_my_stick.c
** File description:
** take the stick
*/

#include "../../include/my.h"

void my_stick(data_s *data)
{
    for (int i = 0; i != data->n + 1; i++) {
        for (int j = 0; data->tab[i][j] != '\0'; j++) {
            my_putchar(data->tab[i][j]);
        }
        my_putchar('\n');
    }
    for (int k = 0; k < data->cols; k++) {
        data->tab[data->n + 1][k] = '*';
        my_putchar(data->tab[data->n + 1][k]);
    }
    my_putchar('\n');
}

void take_my_stick(int line, int nb_stick, data_s *data)
{
    int i = line;
    int last = 2 * data->n + 1;
    while (data->tab[i][last] != '|') {
        last--;
    }
    data->remain = last - nb_stick;
    while (last != data->remain) {
        if (data->tab[i][last] == '|')
            data->tab[i][last] = ' ';
        last--;
    }
    my_stick(data);
}
