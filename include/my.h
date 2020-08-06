/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** contains prototype of all functions in libmy
*/

#include "struct.h"

void my_putchar(char c);
int my_put_nbr(int);
void my_putstr(char *str);
int my_strlen(char const *str);
int my_getnbr(char *str);
char *my_strcut(char *str1, char *str2);
char *my_itoa(int nb);
int my_longest_line(data_s *data);
int my_nb_of_stick(data_s *data);
int my_stick_remain_line(data_s *data);
void take_my_stick(int line, int nb_stick, data_s *data);
void print_game_board(int n, int nb_stick, data_s *data);
int my_line(char *str, data_s *data);
int my_match(char *str, data_s *data);
int my_lose_win(data_s *data);
void my_manage_txt(data_s *data);
int my_cond_for_line(data_s *data);
int my_manage_line_match(data_s *data);
