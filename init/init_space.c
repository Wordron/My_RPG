/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** init_space
*/
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include "struct_game.h"

s_object *set_texture_object(char *name, sfVector2f pos, sfVector2f scale,
    sfIntRect rect)
{
    s_object *element = malloc(sizeof(s_object));

    element->sprite_object.texture = sfTexture_createFromFile
        (name, NULL);
    element->sprite_object.sprite = sfSprite_create();
    sfSprite_setTexture(element->sprite_object.sprite,
        element->sprite_object.texture, sfTrue);
    element->sprite_object.rect = rect;
    element->sprite_object.position = pos;
    element->sprite_object.scale = scale;
    sfSprite_setTextureRect(element->sprite_object.sprite,
        element->sprite_object.rect);
    sfSprite_setPosition(element->sprite_object.sprite,
        element->sprite_object.position);
    sfSprite_setScale(element->sprite_object.sprite,
        element->sprite_object.scale);
    return (element);
}

void init_letter_papers(space_t *space)
{
    space->letter->check_object = LEFT_ON_GROUND;
    space->letter->check = 0;
    space->letter->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){720, 400}, (sfVector2f){1.1, 1.1},
        (sfIntRect){0, 0, 650, 250});
    space->letter->text = set_name_button("Oh ? A letter ?\nI do\
n't understand what it is\nsaying...Maybe I sho\
uld find\nsomeone to help me !", (sfVector2f){780, 450}, 30, sfBlack);
    space->papers = set_texture_object("texture/letter.png",
        (sfVector2f){790, 1140}, (sfVector2f){0.1, 0.1},
        (sfIntRect){0, 0, 640, 640});
    space->papers->check_object = LEFT_ON_GROUND;
    space->papers->check = 0;
    space->papers->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){520, 1300}, (sfVector2f){1.1, 1.1},
        (sfIntRect){0, 0, 650, 250});
    space->papers->text = set_name_button("Oh ? Papers ? I sho\
uld go back\nto this little alien !", (sfVector2f){580, 1350}, 30, sfBlack);
}

void init_space(space_t *space, char *name, sfVector2f scale)
{
    space->space_texture = sfTexture_createFromFile(name, NULL);
    space->space_sprite = sfSprite_create();
    sfSprite_setTexture(space->space_sprite,
        space->space_texture, sfTrue);
    space->scale = scale;
    sfSprite_setScale(space->space_sprite, space->scale);
    sfSprite_setPosition(space->space_sprite, (sfVector2f) {-700, -540});
    space->letter = set_texture_object("texture/letter.png",
        (sfVector2f){950, 290}, (sfVector2f){0.2, 0.2},
        (sfIntRect){0, 0, 640, 640});
    init_letter_papers(space);
}
