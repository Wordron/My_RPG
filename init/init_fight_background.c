/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** init_fight_background
*/
#include "function.h"
#include "button.h"

sfSprite *create_fight_background(void)
{
    sfSprite *sprite = sfSprite_create();
    sfIntRect rect = (sfIntRect) {0, 0, 900, 420};
    sfTexture *texture =
        sfTexture_createFromFile("texture/background/space_fight.jpg", &rect);
    sfVector2f scale = (sfVector2f) {2.5, 2.5};

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    return (sprite);
}
