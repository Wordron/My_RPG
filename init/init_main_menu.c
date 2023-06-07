/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** init_ground
*/

#include "struct_game.h"

void init_main_menu(main_menu_t *main_menu, char *name, sfIntRect rect,
    sfVector2f scale)
{
    main_menu->main_menu_texture = sfTexture_createFromFile(name, NULL);
    main_menu->main_menu_sprite = sfSprite_create();
    sfSprite_setTexture(main_menu->main_menu_sprite,
        main_menu->main_menu_texture, sfTrue);
    main_menu->rect = rect;
    main_menu->scale = scale;
    sfSprite_setScale(main_menu->main_menu_sprite, main_menu->scale);
    sfSprite_setTextureRect(main_menu->main_menu_sprite, main_menu->rect);
}
