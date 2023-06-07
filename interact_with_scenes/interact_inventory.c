/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** interact_inventory
*/

#include "function.h"
#include "stdio.h"

void inventory_change_if_hover(s_game *rpg)
{
    if (IS_HOVER(rpg->all_button->hp_plus->state))
        sfSprite_setScale(rpg->all_button->hp_plus->object.sprite,
        (sfVector2f){0.50, 0.50});
    if (IS_HOVER(rpg->all_button->defense_plus->state))
        sfSprite_setScale(rpg->all_button->defense_plus->object.sprite,
        (sfVector2f){0.50, 0.50});
    if (IS_HOVER(rpg->all_button->speed_plus->state))
        sfSprite_setScale(rpg->all_button->speed_plus->object.sprite,
        (sfVector2f){0.50, 0.50});
    if (IS_HOVER(rpg->all_button->strength_plus->state))
        sfSprite_setScale(rpg->all_button->strength_plus->object.sprite,
        (sfVector2f){0.50, 0.50});
}

void inventory_change_if_none(s_game *rpg)
{
    if (IS_NONE(rpg->all_button->hp_plus->state))
        sfSprite_setScale(rpg->all_button->hp_plus->object.sprite,
        (sfVector2f){0.40, 0.40});
    if (IS_NONE(rpg->all_button->defense_plus->state))
        sfSprite_setScale(rpg->all_button->defense_plus->object.sprite,
        (sfVector2f){0.40, 0.40});
    if (IS_NONE(rpg->all_button->speed_plus->state))
        sfSprite_setScale(rpg->all_button->speed_plus->object.sprite,
        (sfVector2f){0.40, 0.40});
    if (IS_NONE(rpg->all_button->strength_plus->state))
        sfSprite_setScale(rpg->all_button->strength_plus->object.sprite,
        (sfVector2f){0.40, 0.40});
}

static void interact_button_inventory(sfRenderWindow *window, s_game *rpg)
{
    if_zero_equiped(window, rpg);
    if_one_equiped(window, rpg);
    inventory_change_if_none(rpg);
    inventory_change_if_hover(rpg);
    inventory_change_if_pressed(rpg);
}

void interact_inventory(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased)
        rpg->scene_to_change = rpg->command_last_scene;
    is_button_interacted(rpg->player->objects[1], window,
        &(rpg->event));
    is_button_interacted(rpg->player->objects[2], window,
        &(rpg->event));
    is_button_interacted(rpg->player->objects[3], window,
        &(rpg->event));
    is_button_interacted(rpg->all_button->hp_plus, window,
        &(rpg->event));
    is_button_interacted(rpg->all_button->speed_plus, window,
        &(rpg->event));
    is_button_interacted(rpg->all_button->strength_plus, window,
        &(rpg->event));
    is_button_interacted(rpg->all_button->defense_plus, window,
        &(rpg->event));
    interact_button_inventory(window,rpg);
    return;
}
