/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** task06
*/

#include "function.h"


int my_isnum(char const str)
{
    if (str < '0' || str > '9') {
        return (0);
    }
    return (1);
}

int my_strcmp(char const *s1, char const *s2)
{
    int i_s1 = 0;
    int ind = 0;

    while (s1[ind] != '\0' && s2[ind] != '\0' && s1[ind] == s2[ind])
        ind++;
    return (s1[ind] - s2[ind]);
}

int mini_getnbr(char *str)
{
    int number = 0;
    int tmp = 0;
    int neg = 0;

    for (int i = 0; i < my_strlen(str); i++) {
        if (my_isnum(str[i]) == 1) {
            tmp = (int)(str[i]) - '0';
            number = (number * 10) + tmp;
        }
        if (my_isnum(str[i]) != 1 && str[i] == '-') {
            neg++;
        }
    }
    if (neg == 1) {
        number = (number * -1);
    } else {
        return number;
    }
    return number;
}
