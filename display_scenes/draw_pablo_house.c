/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** draw_pablo_house
*/
#include "function.h"

static void draw_text_dog(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->is_talking == DOG) {
        sfRenderWindow_drawSprite(window,
            rpg->pablo_house->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window, rpg->pablo_house->text,
                NULL);
    }
}

void draw_pablo_house(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window,
        rpg->pablo_house->background_house.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_npcs->traductor->sprite_character.sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->pablo_house->dog.sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->player->robot.sprite, NULL);
    sfRenderWindow_drawSprite(window, rpg->pablo_house->tree_d.sprite, NULL);
    if (sfClock_getElapsedTime(rpg->player_clock).microseconds >= 700) {
        move_sprite_robot(rpg, window);
        sfClock_restart(rpg->player_clock);
    }
    talk_translator(window, rpg);
    draw_text_dog(window, rpg);
    return;
}
