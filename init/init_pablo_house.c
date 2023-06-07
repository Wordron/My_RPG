/*
** EPITECH PROJECT, 2023
** init_pablo_house.c
** File description:
** init_pablo_house
*/

#include "function.h"

static void init_text_dog(s_game *rpg)
{
    rpg->pablo_house->dog = set_texture("texture/dog.png",
        (sfVector2f){1300, 650}, (sfVector2f){0.5, 0.5},
        (sfIntRect){0, 0, 120, 180});
    rpg->pablo_house->bubble_text = set_texture("texture/bubble_.png",
        (sfVector2f){100, 780}, (sfVector2f){1.3, 1.3},
        (sfIntRect){0, 0, 650, 250});
    rpg->pablo_house->text = set_name_button("Wouaf I'm Burk !\n\
I'm in danger Wouaf ! Help me Wouaf !",
    (sfVector2f){170, 850}, 30, sfBlack);
    rpg->pablo_house->dialog = 0;
    rpg->pablo_house->restart = 0;
}

void init_pablo_house(s_game *rpg)
{
    rpg->pablo_house = malloc(sizeof(pablo_house_t));
    rpg->pablo_house->map_collision = load_2d_arr_from_file(
        "texture/collision_map/pablo_house.txt");
    rpg->pablo_house->background_house.sprite = sfSprite_create();
    rpg->pablo_house->background_house.texture = sfTexture_createFromFile
        ("texture/background/pable_house.png", NULL);
    rpg->pablo_house->tree_d = set_texture("texture/background/bookshelf.png",
        (sfVector2f){0, -560}, (sfVector2f){1.5, 1.5},
            (sfIntRect){0, 0, 1280, 1158});
    sfSprite_setTexture(rpg->pablo_house->background_house.sprite,
        rpg->pablo_house->background_house.texture, sfTrue);
    sfSprite_setScale(rpg->pablo_house->background_house.sprite,
        (sfVector2f){1.5, 1.5});
    sfSprite_setPosition(rpg->pablo_house->background_house.sprite,
        (sfVector2f){0, -560});
    init_text_dog(rpg);
}
