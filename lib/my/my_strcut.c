/*
** EPITECH PROJECT, 2020
** my_strcut.c
** File description:
** cut the string
*/

#include "../../include/my.h"
#include <stdlib.h>

char *my_strcut(char *str1, char *str2)
{
    int leng_str1 = my_strlen(str1);
    int leng_final = leng_str1 + my_strlen(str2);
    char *str_final = malloc(sizeof(char) * (leng_final + 1));
    int i;
    int k = 0;

    for (i = 0; i != leng_str1; i++) {
        str_final[i] = str1[i];
    }
    for (i; i != leng_final; i++, k++) {
        str_final[i] = str2[k];
    }
    str_final[leng_str1 - 1] = ' ';
    return (str_final);
}
