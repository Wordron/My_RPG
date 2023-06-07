/*
** EPITECH PROJECT, 2023
** spaceship_choise.c
** File description:
** make the choise for the game
*/

#include "function.h"
#include "struct_csfml.h"

t_button *get_texture_spaceship(sfVector2f position, sfVector2f scale,
    sfIntRect rect, char *name)
{
    t_button *space_ship = malloc(sizeof(t_button));

    space_ship->object.texture = sfTexture_createFromFile(name, NULL);
    space_ship->object.sprite = sfSprite_create();
    space_ship->object.position = position;
    space_ship->object.scale = scale;
    space_ship->object.rect = rect;
    sfSprite_setTexture(space_ship->object.sprite, space_ship->object.texture,
        sfTrue);
    sfSprite_setScale(space_ship->object.sprite, space_ship->object.scale);
    sfSprite_setPosition(space_ship->object.sprite,
        space_ship->object.position);
    sfSprite_setTextureRect(space_ship->object.sprite,
        space_ship->object.rect);
    return (space_ship);
}

sfRectangleShape *create_square(sfVector2f position)
{
    sfRectangleShape *square = sfRectangleShape_create();
    sfVector2f size = (sfVector2f) {250, 250};

    sfRectangleShape_setOutlineColor(square, sfCyan);
    sfRectangleShape_setPosition(square, position);
    sfRectangleShape_setOutlineThickness(square, 3);
    sfRectangleShape_setFillColor(square, sfTransparent);
    sfRectangleShape_setSize(square, size);
    return (square);
}

all_space_ship_t *initialise_spaceship(void)
{
    all_space_ship_t *all_spaceships = malloc(sizeof(all_space_ship_t));

    all_spaceships->spaceship_1 = create_square((sfVector2f){430, 450});
    all_spaceships->spaceship_2 = create_square((sfVector2f){830, 450});
    all_spaceships->spaceship_3 = create_square((sfVector2f){1230, 450});
    all_spaceships->gray_spaceship = get_texture_spaceship(
        (sfVector2f){415, 435}, (sfVector2f){4, 4},
        (sfIntRect){0, 90, 90, 90}, "texture/player/grey_spaceship.png");
    all_spaceships->green_spaceship = get_texture_spaceship(
        (sfVector2f){835, 432}, (sfVector2f){3.5, 3.5},
        (sfIntRect){0, 90, 90, 100}, "texture/player/green_spaceship.png");
    all_spaceships->blue_spaceship = get_texture_spaceship(
        (sfVector2f){1240, 450}, (sfVector2f){3.4, 3.4},
        (sfIntRect){0, 90, 90, 100}, "texture/player/blue_spaceship.png");
    init_text_stats(all_spaceships);
    return (all_spaceships);
}

void init_menu_spaceship_choice(main_menu_t *main_menu, char *name,
    sfIntRect rect, sfVector2f scale)
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
