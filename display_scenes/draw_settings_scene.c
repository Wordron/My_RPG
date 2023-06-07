/*
** EPITECH PROJECT, 2023
** settings.c
** File description:
** settings
*/
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include "button.h"

void draw_setting_scene(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window,
        rpg->menu_spaceship_choice.main_menu_sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_button->more_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_button->less_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_button->size1_window_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_button->size2_window_button->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->all_button->commands_button->object.sprite, NULL);
    sfRenderWindow_drawText(window,
        rpg->all_texts->text_volume, NULL);
    sfRenderWindow_drawText(window,
        rpg->all_texts->text_size_window, NULL);
    return;
}

void draw_commands_scene(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window,
        rpg->menu_spaceship_choice.main_menu_sprite, NULL);
    sfRenderWindow_drawText(window, rpg->all_texts->text_commands, NULL);
    return;
}
