/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** init_game_over
*/
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include "button.h"

void init_game_over(s_game *rpg)
{
    rpg->game_over.sprite = sfSprite_create();
    rpg->game_over.texture = sfTexture_createFromFile
        ("texture/background/game_over.png", NULL);
    sfSprite_setTexture(rpg->game_over.sprite, rpg->game_over.texture, sfTrue);
    sfSprite_setPosition(rpg->game_over.sprite, (sfVector2f){760, 440});
    sfSprite_setScale(rpg->game_over.sprite, (sfVector2f){1.5, 1.5});
    return;
}
