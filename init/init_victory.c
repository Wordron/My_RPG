/*
** EPITECH PROJECT, 2023
** init_victory.c
** File description:
** init the victory
*/

#include "button.h"
#include "function.h"
#include "struct_csfml.h"
#include "struct_game.h"

int init_victory(s_game *rpg)
{
    rpg->victory.sprite = sfSprite_create();
    rpg->victory.texture = sfTexture_createFromFile
        ("texture/background/victory.png", NULL);
    sfSprite_setTexture(rpg->victory.sprite, rpg->victory.texture, sfTrue);
    sfSprite_setPosition(rpg->victory.sprite, (sfVector2f){500, 450});
    sfSprite_setScale(rpg->victory.sprite, (sfVector2f){5, 5});
}
