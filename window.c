/*
** EPITECH PROJECT, 2023
** window.c
** File description:
** window
*/
#include <math.h>
#include "function.h"
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>

void change_camera_view(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfView_setSize(view, (sfVector2f) {1400, 800});
    sfView_setCenter(view, sfSprite_getPosition(
        rpg->player->player_stat->sprite_character.sprite));
    sfRenderWindow_setView(window,view);
}

sfRenderWindow *create_window(sfVideoMode video_mode)
{
    sfRenderWindow *window;

    window = sfRenderWindow_create(video_mode, "Hidden planet",
        sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}
