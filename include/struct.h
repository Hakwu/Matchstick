/*
** EPITECH PROJECT, 2019
** structure.h
** File description:
** structures
*/

#include <stdlib.h>
#include <stdio.h>

typedef struct data_t
{
    int manage;
    int turn;
    size_t bufsize;
    char *buf_line;
    char *buf_match;
    int max_matches;
    int max_line;
    int stick_remain;
    int stick_remain_line;
    int remain;
    int n;
    char **tab;
    int j;
    int cols;
    int sticks;
    int k;
    int i;
}data_s;
