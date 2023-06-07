/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** interact_space
*/
#include "function.h"

static void if_colision_between_rabbit_planet(sfRenderWindow *window,
    sfView *view, s_game *rpg)
{
    if (square_touching_circle
        (rpg->player->player_stat->sprite_character.sprite,
        rpg->all_planets->rabbit->object.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased && rpg->planet_rabbit.check == 1
        && rpg->player->level >= 6) {
        rpg->scene_to_change = RABBIT_PLANETE;
        sfSprite_setPosition(rpg->player->robot.sprite,
            (sfVector2f){900, 900});
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        sfRenderWindow_setView(window, view);
    }
    return;
}

static void if_colision_between_tropical_planet(sfRenderWindow *window,
    sfView *view, s_game *rpg)
{
    if (square_touching_circle
        (rpg->player->player_stat->sprite_character.sprite,
        rpg->all_planets->green->object.sprite) &&
        rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = TROPICAL;
        sfSprite_setPosition(rpg->player->robot.sprite,
            (sfVector2f){100, 620});
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        sfRenderWindow_setView(window, view);
    }
    return;
}

static void if_colision_between_planets(sfRenderWindow *window,
    sfView *view, s_game *rpg)
{
    if (square_touching_circle
        (rpg->player->player_stat->sprite_character.sprite,
        rpg->all_planets->orange->object.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = ORANGE_PLANET;
        sfSprite_setPosition(rpg->player->robot.sprite,
            (sfVector2f){100, 200});
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        sfRenderWindow_setView(window, view);
    }
    if_colision_between_rabbit_planet(window, view, rpg);
    if_colision_between_tropical_planet(window, view, rpg);
}

static void check_collisions_quest(s_game *rpg)
{
    if (square_touching_square
        (rpg->player->player_stat->sprite_character.sprite,
        rpg->space.letter->sprite_object.sprite)
        && rpg->event.key.code == rpg->controls->interact)
        rpg->space.letter->check_object = PICKED_UP;
    if (square_touching_square
        (rpg->player->player_stat->sprite_character.sprite,
        rpg->space.papers->sprite_object.sprite)
        && rpg->event.key.code == rpg->controls->interact)
        rpg->space.papers->check_object = PICKED_UP;
}

void interact_space(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = IN_GAME_MENU;
        rpg->space_last_scene = SPACE_MAP;
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        sfRenderWindow_setView(window, view);
    }
    if (square_touching_circle
        (rpg->player->player_stat->sprite_character.sprite,
        rpg->all_planets->black_hole->object.sprite)) {
        rpg->scene_to_change = GAME_OVER;
        rpg->how_death_occured = BLACK_HOLE;
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        sfRenderWindow_setView(window, view);
    }
    if_colision_between_planets(window, view, rpg);
    check_collisions_quest(rpg);
}
