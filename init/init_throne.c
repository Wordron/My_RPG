/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** init_throne
*/

#include "struct_game.h"
#include "function.h"

void init_throne(s_game *rpg, char *name, sfVector2f scale)
{
    rpg->throne.background_throne.texture =
        sfTexture_createFromFile(name, NULL);
    rpg->throne.background_throne.sprite = sfSprite_create();
    sfSprite_setTexture(rpg->throne.background_throne.sprite,
        rpg->throne.background_throne.texture, sfTrue);
    rpg->throne.background_throne.scale = scale;
    sfSprite_setScale(rpg->throne.background_throne.sprite,
        rpg->throne.background_throne.scale);
    rpg->throne.map_collision = load_2d_arr_from_file(
        "texture/collision_map/throne.txt");
}
