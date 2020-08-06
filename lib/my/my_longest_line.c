/*
** EPITECH PROJECT, 2020
** my_longest_line
** File description:
** longest line
*/

#include "../../include/my.h"

int my_longest_line(data_s *data)
{
    int count = 0;
    int max = 0;
    for (int i = 2; i < data->n + 2; i++) {
        for (int j = 1; data->tab[i][j] != '\0'; j++) {
            if (data->tab[i][j] == '|')
                count++;
        }
        if (count >= max)
            max = count;
        else {
            return i - 1;
        }
        count = 0;
    }
}
