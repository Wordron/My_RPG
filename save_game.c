/*
** EPITECH PROJECT, 2023
** save_game.c
** File description:
** save the party
*/
#include "button.h"
#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"
#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

void write_str(char *str, FILE *dir, int nb)
{
    char *buff = NULL;

    buff = str;
    fwrite(buff, (size_t)(my_strlen(buff)), 1, dir);
    if (nb == 0) {
        buff = "0";
        fwrite(buff, (size_t)(my_strlen(buff)), 1, dir);
    } else {
        buff = my_put_nbr(nb);
        fwrite(buff, (size_t)(my_strlen(buff)), 1, dir);
    }
    buff = "\n";
    fwrite(buff, (size_t)(my_strlen(buff)), 1, dir);
}

void save_player(s_game *rpg, FILE *dir)
{
    char *str = NULL;

    if (rpg->player->nb_ship == 1)
        str = ("spaceship = gray\n");
    if (rpg->player->nb_ship == 2)
        str = ("spaceship = green\n");
    if (rpg->player->nb_ship == 3)
        str = ("spaceship = blue\n");
    fwrite(str, (size_t)(my_strlen(str)), 1, dir);
    write_str("xp = ", dir, rpg->player->xp);
    write_str("level = ", dir, rpg->player->level);
    write_str("speed_space_map = ", dir, rpg->player->speed_space_map);
    write_str("hp = ", dir, rpg->player->player_stat->hp);
    write_str("strength = ", dir, rpg->player->player_stat->strength);
    write_str("defense = ", dir, rpg->player->player_stat->defense);
    write_str("speed = ", dir, rpg->player->player_stat->speed);
    write_str("dead = ", dir, rpg->player->player_stat->dead);
    write_str("spare_point = ", dir, rpg->player->spare_point);
}

int save_the_party(s_game *rpg)
{
    FILE *dir = fopen("save.txt", "w");
    if (dir == NULL)
        return (84);
    save_player(rpg, dir);
    save_letter(rpg, dir);
    fclose(dir);
}
