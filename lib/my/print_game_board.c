/*
** EPITECH PROJECT, 2020
** print_game_board
** File description:
** game board
*/

#include "../../include/my.h"

void game_board(data_s *data, int n)
{
    for (data->i = 1; data->i < n + 1; data->i++) {
        data->tab[data->i][data->j] = '*';
        data->j++;
        for (data->k = 0; data->k < data->cols / 2 - data->i ; data->k++,
data->j++)
            data->tab[data->i][data->j] = ' ';
        for (data->k = 0; data->k < data->sticks; data->k++, data->j++)
            data->tab[data->i][data->j] = '|';
        for (data->k = 0; data->k  < data->cols / 2 - data->i; data->k++,
data->j++)
            data->tab[data->i][data->j] = ' ';
        data->sticks += 2;
        data->tab[data->i][data->j] = '*';
        data->j = 0;
        my_putstr(data->tab[data->i]);
        my_putchar('\n');
    }
}

void print_game_board(int n, int nb_stick, data_s *data)
{
    data->n = n;
    data->j = 0;
    data->cols = n * 2 + 1;
    data->sticks = 1;
    data->k = 0;
    data->i = 0;
    data->tab = malloc(sizeof(char *) * (n + 2));
    for (data->i = 0; data->i < n + 2; data->i++)
        data->tab[data->i] = malloc(sizeof(char) * (data->cols));
    for (data->i = 0; data->i < data->cols; data->i++) {
        data->tab[0][data->i] = '*';
        my_putchar(data->tab[0][data->i]);
    }
    my_putchar('\n');
    game_board(data, n);
    for (data->i = 0; data->i < data->cols; data->i++) {
        data->tab[0][data->i] = '*';
        my_putchar(data->tab[0][data->i]);
    }
}
