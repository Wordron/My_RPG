/*
** EPITECH PROJECT, 2023
** other_load_game.c
** File description:
** load the game
*/

#include "button.h"
#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"
#include <stdio.h>
#include <stdio.h>

int take_line(int i, FILE *dir, s_game *rpg)
{
    char *buff = NULL;
    size_t len = 0;

    while (i < 11) {
            if (getline(&buff, &len, dir) == -1) {
                return 84;
            } else {
                fill_structure(rpg, i, buff);
            }
            i++;
        }
        while (i < 16) {
            if (getline(&buff, &len, dir) == -1) {
                return 84;
            } else {
                check_pick_up_objet(rpg, buff, i);
            }
            i++;
        }

}

int take_number(char *buff)
{
    char **array = NULL;
    int number = 0;

    array = get_my_array(buff);
    number = mini_getnbr(array[2]);
    return number;
}
