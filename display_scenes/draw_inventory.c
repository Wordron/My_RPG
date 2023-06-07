/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** draw_inventory
*/

#include "function.h"

void draw_text(sfRenderWindow *window, s_game *rpg)
{
    sfRenderWindow_drawText(window, rpg->player->text_attack, NULL);
    sfRenderWindow_drawText(window, rpg->player->text_defense, NULL);
    sfRenderWindow_drawText(window, rpg->player->text_hp, NULL);
    sfRenderWindow_drawText(window, rpg->player->text_max_hp, NULL);
    sfRenderWindow_drawText(window, rpg->player->slash, NULL);
    sfRenderWindow_drawText(window, rpg->player->text_level, NULL);
    sfRenderWindow_drawText(window, rpg->player->text_speed, NULL);
    sfRenderWindow_drawText(window, rpg->player->text_spare_points, NULL);
}

void draw_object(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->space.letter->check_object == PICKED_UP)
        sfRenderWindow_drawSprite(window,
            rpg->player->objects[0]->object.sprite, NULL);
    if (rpg->all_ennemies->en_1->loot->check_object == PICKED_UP)
        sfRenderWindow_drawSprite(window,
            rpg->player->objects[1]->object.sprite, NULL);
    if (rpg->all_ennemies->en_2->loot->check_object == PICKED_UP)
        sfRenderWindow_drawSprite(window,
            rpg->player->objects[2]->object.sprite, NULL);
    if (rpg->all_ennemies->en_5->loot->check_object == PICKED_UP)
        sfRenderWindow_drawSprite(window,
            rpg->player->objects[3]->object.sprite, NULL);
    if (rpg->all_ennemies->en_10->loot->check_object == PICKED_UP)
        sfRenderWindow_drawSprite(window,
            rpg->player->objects[4]->object.sprite, NULL);
    if (rpg->space.papers->check_object == PICKED_UP &&
        rpg->space.papers->check == 0)
        sfRenderWindow_drawSprite(window,
            rpg->player->objects[5]->object.sprite, NULL);
}

void draw_inventory(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window,
        rpg->menu_spaceship_choice.main_menu_sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->player->inventory.sprite, NULL);
    draw_object(window, rpg);
    draw_text(window, rpg);
    sfRenderWindow_drawSprite(window,
        rpg->all_button->strength_plus->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_button->speed_plus->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_button->defense_plus->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_button->hp_plus->object.sprite, NULL);
    return;
}
