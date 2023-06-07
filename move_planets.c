/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** move.planets
*/
#include "button.h"
#include "function.h"
#include "struct_csfml.h"

static void set_new_texture_rect(all_planet_t *all_planets)
{
    sfSprite_setTextureRect(all_planets->green->object.sprite,
        all_planets->green->object.rect);
    sfSprite_setTextureRect(all_planets->orange->object.sprite,
        all_planets->orange->object.rect);
    sfSprite_setTextureRect(all_planets->yellow->object.sprite,
        all_planets->yellow->object.rect);
    sfSprite_setTextureRect(all_planets->white->object.sprite,
        all_planets->white->object.rect);
    sfSprite_setTextureRect(all_planets->black_hole->object.sprite,
        all_planets->black_hole->object.rect);
}

static void move_rect(all_planet_t *all_planets, int offset, int max_value)
{
    offset = 115;
    all_planets->green->object.rect.left += offset;
    all_planets->orange->object.rect.left += offset;
    all_planets->yellow->object.rect.left += offset;
    all_planets->white->object.rect.left += offset;
    all_planets->black_hole->object.rect.left += offset;
    if (all_planets->green->object.rect.left >= max_value) {
        all_planets->green->object.rect.left = 0;
        all_planets->orange->object.rect.left = 0;
        all_planets->yellow->object.rect.left = 0;
        all_planets->white->object.rect.left = 0;
        all_planets->black_hole->object.rect.left = 0;
    }
    set_new_texture_rect(all_planets);
}

void anime_all_planets(all_planet_t *all_planets, sfClock *clock, float seconds)
{
    if (seconds >= 0.1) {
        move_rect(all_planets, 0, 5750);
        sfClock_restart(clock);
    }
}
