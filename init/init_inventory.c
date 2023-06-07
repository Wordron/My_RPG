/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** init_inventory
*/

#include "struct_game.h"
#include "function.h"


void init_second_inventory(s_game *rpg, char *name,
    sfVector2f scale, sfVector2f pos)
{
    sfSprite_setRotation(rpg->all_button->hp_plus->object.sprite, 90.0);
    rpg->all_button->speed_plus =
    set_texture_button("texture/buttons/more.png",
    (sfVector2f){1371, 550}, (sfVector2f){0.40, 0.40});
    sfSprite_setRotation(rpg->all_button->speed_plus->object.sprite, 90.0);
    rpg->all_button->strength_plus =
    set_texture_button("texture/buttons/more.png",
        (sfVector2f){1371, 602}, (sfVector2f){0.40, 0.40});
    sfSprite_setRotation(rpg->all_button->strength_plus->object.sprite, 90.0);
    rpg->all_button->defense_plus =
    set_texture_button("texture/buttons/more.png",
        (sfVector2f){1371, 656}, (sfVector2f){0.40, 0.40});
    sfSprite_setRotation(rpg->all_button->defense_plus->object.sprite, 90.0);

}

void init_inventory(s_game *rpg, char *name, sfVector2f scale, sfVector2f pos)
{
    rpg->player->inventory.texture = sfTexture_createFromFile(name, NULL);
    rpg->player->inventory.sprite = sfSprite_create();
    sfSprite_setTexture(rpg->player->inventory.sprite,
        rpg->player->inventory.texture, sfTrue);
    rpg->player->inventory.position = pos;
    rpg->player->inventory.scale = scale;
    sfSprite_setScale(rpg->player->inventory.sprite,
        rpg->player->inventory.scale);
    sfSprite_setPosition(rpg->player->inventory.sprite,
        rpg->player->inventory.position);
    rpg->all_button->hp_plus = set_texture_button("texture/buttons/more.png",
        (sfVector2f){1371, 500}, (sfVector2f){0.40, 0.40});
    init_second_inventory(rpg, name, scale, pos);
}
