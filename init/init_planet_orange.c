/*
** EPITECH PROJECT, 2023
** init_planet_orange.c
** File description:
** init_palnet_orange
*/
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include "button.h"

s_sprite_struct set_texture(char *name, sfVector2f pos, sfVector2f scale,
    sfIntRect rect)
{
    s_sprite_struct element;

    element.texture = sfTexture_createFromFile
        (name, NULL);
    element.sprite = sfSprite_create();
    sfSprite_setTexture(element.sprite,
        element.texture, sfTrue);
    element.rect = rect;
    element.position = pos;
    element.scale = scale;
    sfSprite_setTextureRect(element.sprite, element.rect);
    sfSprite_setPosition(element.sprite,
        element.position);
    sfSprite_setScale(element.sprite,
        element.scale);
    return (element);
}

void init_planet_orange(planet_orange_t *planet, char *name, sfVector2f scale)
{
    planet->ground.texture = sfTexture_createFromFile(name, NULL);
    planet->ground.sprite = sfSprite_create();
    sfSprite_setTexture(planet->ground.sprite,
        planet->ground.texture, sfTrue);
    planet->ground.scale = scale;
    sfSprite_setScale(planet->ground.sprite, planet->ground.scale);
    planet->three_d = set_texture("texture/background/trees_orange.png",
        (sfVector2f){0, 0}, (sfVector2f){2.8, 2.5}, (sfIntRect){0,0,700,466});
    planet->sign = set_texture("texture/sign.png",
        (sfVector2f){45, 60}, (sfVector2f){0.3, 0.3},
        (sfIntRect){0, 0, 390, 430});
    planet->door = sfRectangleShape_create();
    sfRectangleShape_setPosition(planet->door, (sfVector2f){1543, 558});
    sfRectangleShape_setSize(planet->door, (sfVector2f){32, 28});
}
