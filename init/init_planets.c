/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** planets
*/
#include "button.h"
#include "function.h"
#include "struct_csfml.h"

static planet_t *set_texture_planet(char *name, sfVector2f pos,
    sfVector2f scale, sfIntRect rect)
{
    planet_t *planet = malloc(sizeof(planet_t));

    planet->object.texture = sfTexture_createFromFile(name, NULL);
    planet->object.sprite = sfSprite_create();
    sfSprite_setTexture(planet->object.sprite, planet->object.texture,
        sfTrue);
    planet->object.rect = rect;
    planet->object.position = pos;
    planet->object.scale = scale;
    sfSprite_setTextureRect(planet->object.sprite, planet->object.rect);
    sfSprite_setPosition(planet->object.sprite, planet->object.position);
    sfSprite_setScale(planet->object.sprite, planet->object.scale);
    planet->map_collision = NULL;
    return (planet);
}

static void init_other_constellation(all_planet_t *all_planets)
{
    all_planets->big_ast = set_texture_planet("texture/planets/big.png",
        (sfVector2f){600, 1050}, (sfVector2f){1.5, 1.5},
        (sfIntRect){0, 0, 300, 300});
    all_planets->small_ast = set_texture_planet("texture/planets/small.png",
        (sfVector2f){800, 200}, (sfVector2f){1.5, 1.5},
        (sfIntRect){0, 0, 200, 200});
    all_planets->black_hole = set_texture_planet(
        "texture/planets/black_hole.png", (sfVector2f){50, 1320},
        (sfVector2f){1.5, 1.5}, (sfIntRect){0, 0, 120, 120});
    all_planets->orange->map_collision = load_2d_arr_from_file(
        "texture/collision_map/orange_planet.txt");
    all_planets->rabbit->map_collision = load_2d_arr_from_file(
        "texture/collision_map/rabbit_planet.txt");
    all_planets->green->map_collision = load_2d_arr_from_file(
        "texture/collision_map/green_planet.txt");
    return;
}

all_planet_t *init_planets(void)
{
    all_planet_t *all_planets = malloc(sizeof(all_planet_t));

    all_planets->green = set_texture_planet("texture/planets/green.png",
        (sfVector2f){2000, 280}, (sfVector2f){1.7, 1.7},
        (sfIntRect){0, 0, 120, 120});
    all_planets->yellow = set_texture_planet("texture/planets/yellow.png",
        (sfVector2f){1250, 600}, (sfVector2f){2.3, 2.3},
        (sfIntRect){0, 0, 120, 120});
    all_planets->white = set_texture_planet("texture/planets/white.png",
        (sfVector2f){1250, 1200}, (sfVector2f){1.5, 1.5},
        (sfIntRect){0, 0, 120, 120});
    all_planets->orange = set_texture_planet("texture/planets/orange.png",
        (sfVector2f){250, 500}, (sfVector2f){2, 2},
        (sfIntRect){0, 0, 120, 120});
    all_planets->rabbit = set_texture_planet("texture/planets/rabbit.png",
        (sfVector2f){2000, 1200}, (sfVector2f){1.7, 1.7},
        (sfIntRect){0, 0, 160, 180});
    init_other_constellation(all_planets);
    return (all_planets);
}
