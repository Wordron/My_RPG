/*
** EPITECH PROJECT, 2023
** init_tropical_planet.c
** File description:
** init_tropical_planet
*/

#include "function.h"

void init_planet_tropical(planet_tropical_t *planet, char *name,
    sfVector2f scale)
{
    planet->ground.texture = sfTexture_createFromFile(name, NULL);
    planet->ground.sprite = sfSprite_create();
    sfSprite_setTexture(planet->ground.sprite,
        planet->ground.texture, sfTrue);
    planet->ground.scale = scale;
    sfSprite_setScale(planet->ground.sprite, planet->ground.scale);
    planet->sign_3 = set_texture("texture/sign.png",
        (sfVector2f){100, 550}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 390, 430});
    planet->tree_d = set_texture("texture/background/trees_tropical.png",
        (sfVector2f){0, 0}, (sfVector2f){2.8, 2.5},
        (sfIntRect){0, 0, 768, 544});
}
