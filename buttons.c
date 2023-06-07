/*
** EPITECH PROJECT, 2023
** button.c
** File description:
** set the button in the window
*/

#include "button.h"
#include "function.h"
#include "struct_csfml.h"

t_button *set_texture_button(char *name, sfVector2f pos, sfVector2f scale)
{
    t_button *button = malloc(sizeof(t_button));

    button->object.texture = sfTexture_createFromFile(name, NULL);
    button->object.sprite = sfSprite_create();
    button->object.rect.top = 0;
    button->object.rect.left = 0;
    button->object.rect.width = 1053;
    button->object.rect.height = 1053;
    button->object.position = pos;
    button->object.scale = scale;
    sfSprite_setTexture(button->object.sprite, button->object.texture, 0);
    sfSprite_setPosition(button->object.sprite, button->object.position);
    sfSprite_setScale(button->object.sprite,button->object.scale);
    return (button);
}

static all_button_t *init_buttons_settings(all_button_t *all_buttons)
{
    all_buttons->size1_window_button = set_texture_button(
        "texture/buttons/800-600.png", (sfVector2f){740, 350},
        (sfVector2f){1.5, 1.5});
    all_buttons->size2_window_button = set_texture_button(
        "texture/buttons/1920-1080.png", (sfVector2f){1020, 350},
        (sfVector2f){1.5, 1.5});
    all_buttons->less_button = set_texture_button("texture/buttons/less.png",
        (sfVector2f){740, 530}, (sfVector2f){1.5, 1.5});
    all_buttons->more_button = set_texture_button("texture/buttons/more.png",
        (sfVector2f){1020, 530}, (sfVector2f){1.5, 1.5});
    all_buttons->commands_button = set_texture_button(
        "texture/buttons/commands.png", (sfVector2f){740, 700},
        (sfVector2f){1.5, 1.5});
    return (all_buttons);
}

static all_button_t *init_buttons_main_menu(all_button_t *all_buttons)
{
    all_buttons->play_button = set_texture_button(
        "texture/buttons/play_button.png", (sfVector2f){400, 650},
        (sfVector2f){2.5, 2.5});
    all_buttons->load_button = set_texture_button(
        "texture/buttons/load_button.png", (sfVector2f){700, 650},
        (sfVector2f){2.5, 2.5});
    all_buttons->settings_button = set_texture_button(
        "texture/buttons/settings_button.png", (sfVector2f){1020, 650},
        (sfVector2f){1.6, 1.6});
    all_buttons->quit_button = set_texture_button(
        "texture/buttons/quit_button.png", (sfVector2f){1350, 650},
        (sfVector2f){2.5, 2.5});
    return (init_buttons_settings(all_buttons));
}

all_button_t *init_buttons(void)
{
    all_button_t *all_buttons = malloc(sizeof(all_button_t));

    all_buttons->attack_button = set_texture_button(
        "texture/buttons/attack.png", (sfVector2f){100, 500},
        (sfVector2f){2.5, 2.5});
    all_buttons->escape_button = set_texture_button(
        "texture/buttons/escape_button.png", (sfVector2f){100, 500},
        (sfVector2f){2.5, 2.5});
    return (init_buttons_main_menu(all_buttons));
}
