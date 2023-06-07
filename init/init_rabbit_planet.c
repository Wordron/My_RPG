/*
** EPITECH PROJECT, 2023
** init_planet_rabbit.c
** File description:
** init_rabbit_palnet
*/
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include "button.h"

void init_planet_rabbit(planet_rabbit_t *planet, char *name, sfVector2f scale)
{
    planet->texture = sfTexture_createFromFile(name, NULL);
    planet->sprite = sfSprite_create();
    sfSprite_setTexture(planet->sprite,
        planet->texture, sfTrue);
    planet->scale = scale;
    sfSprite_setScale(planet->sprite, planet->scale);
    planet->door = set_texture("texture/door.png", (sfVector2f){590, -100},
        (sfVector2f){1.2, 1.2}, (sfIntRect){0, 0, 648, 385});
    planet->three_d_top = set_texture("texture/background/carrots.png",
        (sfVector2f){0, 0}, (sfVector2f){1, 1}, (sfIntRect){0, 0, 1920, 1080});
    planet->three_d_bot = set_texture("texture/background/carrots_bot.png",
        (sfVector2f){0, 0}, (sfVector2f){1, 1}, (sfIntRect){0, 0, 1920, 1080});
    planet->check = 0;
    planet->sign_2 = set_texture("texture/sign.png",
        (sfVector2f){600, 900}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 390, 430});
}
