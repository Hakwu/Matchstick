/*
** EPITECH PROJECT, 2020
** matchstick.c
** File description:
** matchstick
*/

#include "include/my.h"

void my_cond_for_match(data_s *data)
{
    char *error_m = "matches per turn\n";
    if (my_match(data->buf_match, data) == -30)
        my_putstr("Error: invalid input (positive number expected\
)\n");
    if (my_match(data->buf_match, data) == -40)
        my_putstr("Error: not enough matches on this line\n");
    if (my_match(data->buf_match, data) == -50)
        my_putstr("Error: you have to remove at least one match\n\
");
    if (my_match(data->buf_match, data) == -60) {
        my_putstr("Error: you cannot remove more than ");
        my_putstr(my_strcut(data->buf_match, error_m));
    }
}

void my_play(data_s *data)
{
    char *line_c = "match(es) from line ";
    my_putstr("Player removed ");
    my_putstr(my_strcut(data->buf_match, line_c));
    my_putstr(data->buf_line);
    take_my_stick(my_getnbr(data->buf_line), my_getnbr(data->buf_match), data);
    data->turn = 2;
}

void my_ia(data_s *data)
{
    char *line_c = "match(es) from line ";
    my_putchar('\n');
    my_putstr("AI's turn...\n");
    my_putstr("AI removed ");
    my_putstr(my_strcut("1 ", line_c));
    my_putstr(my_itoa(my_longest_line(data)));
    my_putchar('\n');
    take_my_stick(my_longest_line(data), 1, data);
    data->turn = 1;
}

int my_game(data_s *data)
{
    while (my_nb_of_stick(data) != 0) {
        if (data->turn == 1) {
            my_manage_txt(data);
            if (my_manage_line_match(data) == 0)
                return (10);
            if (my_match(data->buf_match, data) == -30
                || my_match(data->buf_match, data) == -40
                || my_match(data->buf_match, data) == -50
                || my_match(data->buf_match, data) == -60) {
                data->manage = 1;
                my_cond_for_match(data);
                continue;
            }
            my_play(data);
        }
        else
            my_ia(data);
    }
}

int main(int ac, char **av)
{
    data_s *data = malloc(sizeof(data_s));
    data->max_line = my_getnbr(av[1]);
    data->max_matches = my_getnbr(av[2]);
    data->bufsize = 3;
    data->buf_line = malloc(sizeof(char) * data->bufsize);
    data->buf_match = malloc(sizeof(char) * data->bufsize);
    data->turn = 1;
    if (my_getnbr(av[1]) == 0 || my_getnbr(av[1]) == 100 || ac != 3)
        return (84);
    else {
        print_game_board(my_getnbr(av[1]), my_getnbr(av[2]), data);
        my_putchar('\n');
        if (my_game(data) == 10)
            return (0);
        if (my_lose_win(data) == 1)
            return (1);
        else
            return (2);
    }
}
