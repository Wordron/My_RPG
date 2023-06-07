/*
** EPITECH PROJECT, 2023
** Lemin
** File description:
** utility_function_str_to_word_array
*/
#include <stdlib.h>
#include <stdio.h>
#include "function.h"

int is_a_char(char str)
{
    if (str >= 33 && str <= 126)
        return (0);
    return (1);
}

int count_words(char *str)
{
    int nb = 0;

    for (int i = 0; i != my_strlen(str); i++) {
        if ((str[i] == ' ' && str[i + 1] != ' ') || str[i] == '-')
            nb++;
    }
    nb++;
    return (nb);
}

int length_word1(char *str, int index)
{
    int length = 0;

    for (int i = index; (str[i] != ' ' || str[i] != '-') && str[i] != 0; i++)
        length++;
    length++;
    return (length);
}

int add_to_i_if_not_space(int i, char *str, int index)
{
    if (str[index] != ' ' || str[index] != '-')
        i++;
    return (i);
}
