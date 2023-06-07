/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main function
*/
#include <stdlib.h>
#include <stdio.h>
#include "function.h"
#include "button.h"

int main(void)
{
    sfRenderWindow *window = create_window((sfVideoMode){1920, 1080, 32});
    sfView *view = sfView_create();
    s_game *rpg = malloc(sizeof(s_game));

    init_struct(rpg);
    rpg->play = true;
    rpg->all_ennemies->current_ennemie =
        init_monster_on_fight(rpg->all_ennemies->en_1);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        while (sfRenderWindow_pollEvent(window, &(rpg->event)))
            analyse_events(window, view, rpg);
        display_scenes(window, view, rpg);
        sfRenderWindow_display(window);
    }
    destroy(rpg, window);
}
