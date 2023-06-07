/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** my_put_nbr
*/
#include <stdlib.h>

static char *my_revstr(char *str)
{
    int ct = 0;

    while (str[ct] != '\0')
        ct++;
    int j = ct - 1;
    int i = 0;
    char witness = 0;

    while (i < j) {
        witness = str[j];
        str[j] = str[i];
        str[i] = witness;
        i++;
        j--;
    }
    return (str);
}

static int my_compute_power_rec(int nb, int p)
{
    int res_power;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    if (nb == 1)
        return (nb);
    res_power = my_compute_power_rec(nb, p - 1) * nb;
}

char *my_put_nbr(int nb)
{
    int temp = 0;
    char *nbstr = malloc(sizeof(int) * 11);
    int j = 0;

    if (nb < 0)
        nb = nb * (-1);
    if (nb == 0)
        return ("0");
    for (int i = 1; nb != 0; i++) {
        temp = nb % my_compute_power_rec(10, i);
        nb = nb - temp;
        if (i == 1)
            nbstr[j] = temp + '0';
        else
            nbstr[j] = ((temp / my_compute_power_rec(10, i - 1)) + '0');
        j++;
    }
    nbstr[j] = '\0';
    return (my_revstr(nbstr));
}
