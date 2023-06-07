/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** save_letters_game
*/
#include <stdio.h>
#include "function.h"

static char *check_if_picked_up(enum e_is_picked_up check_object)
{
    if (check_object == PICKED_UP)
        return ("yes\n");
    else
        return ("no\n");
}

static void save_letter_part_two(s_game *rpg, FILE *dir)
{
    char *str = NULL;

    str = "objet 4 = ";
    fwrite(str, (size_t)(my_strlen(str)), 1, dir);
    str = check_if_picked_up(rpg->all_ennemies->en_10->loot->check_object);
    fwrite(str, (size_t)(my_strlen(str)), 1, dir);
}

void save_letter(s_game *rpg, FILE *dir)
{
    char *str = NULL;

    str = "check objet = ";
    fwrite(str, (size_t)(my_strlen(str)), 1, dir);
    str = check_if_picked_up(rpg->space.letter->check_object);
    fwrite(str, (size_t)(my_strlen(str)), 1, dir);
    str = "objet 1 = ";
    fwrite(str, (size_t)(my_strlen(str)), 1, dir);
    str = check_if_picked_up(rpg->all_ennemies->en_1->loot->check_object);
    fwrite(str, (size_t)(my_strlen(str)), 1, dir);
    str = "objet 2 = ";
    fwrite(str, (size_t)(my_strlen(str)), 1, dir);
    str = check_if_picked_up(rpg->all_ennemies->en_2->loot->check_object);
    fwrite(str, (size_t)(my_strlen(str)), 1, dir);
    str = "objet 3 = ";
    fwrite(str, (size_t)(my_strlen(str)), 1, dir);
    str = check_if_picked_up(rpg->all_ennemies->en_5->loot->check_object);
    fwrite(str, (size_t)(my_strlen(str)), 1, dir);
    save_letter_part_two(rpg, dir);
}
