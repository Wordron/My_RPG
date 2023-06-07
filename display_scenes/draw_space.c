/*
** EPITECH PROJECT, 2023
** B-MUL-200-NAN-2-1-myrpg-camille.dumas
** File description:
** draw_space
*/

#include "function.h"

static void draw_papers(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->space.papers->check_object == LEFT_ON_GROUND)
        sfRenderWindow_drawSprite(window,
        rpg->space.papers->sprite_object.sprite, NULL);
    if (rpg->space.papers->check_object == PICKED_UP &&
        square_touching_square
            (rpg->player->player_stat->sprite_character.sprite,
            rpg->space.papers->sprite_object.sprite)) {
        sfRenderWindow_drawSprite(window,
        rpg->space.papers->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window,
        rpg->space.papers->text, NULL);
    }
}

static void draw_objects(sfRenderWindow *window, s_game *rpg)
{
    if (rpg->space.letter->check_object == LEFT_ON_GROUND)
        sfRenderWindow_drawSprite(window,
        rpg->space.letter->sprite_object.sprite, NULL);
    if (rpg->space.letter->check_object == PICKED_UP &&
        square_touching_square
            (rpg->player->player_stat->sprite_character.sprite,
            rpg->space.letter->sprite_object.sprite)) {
        sfRenderWindow_drawSprite(window,
        rpg->space.letter->bubble_text.sprite, NULL);
        sfRenderWindow_drawText(window,
        rpg->space.letter->text, NULL);
    }
    draw_papers(window, rpg);
}

static void draw_planets_part2(sfRenderWindow *window,
            all_planet_t *all_planets, s_game *rpg)
{
    sfRenderWindow_drawSprite(window,
        all_planets->black_hole->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        all_planets->big_ast->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        all_planets->small_ast->object.sprite, NULL);
    anime_all_planets(all_planets, rpg->time_planets.clock,
        rpg->time_planets.seconds);
}

static void draw_planets(sfRenderWindow *window, all_planet_t *all_planets,
    s_game *rpg)
{
    sfRenderWindow_drawSprite(window,
        all_planets->orange->object.sprite, NULL);
    if (rpg->all_ennemies->en_10->loot->check_object == PICKED_UP) {
        sfRenderWindow_drawSprite(window,
            all_planets->rabbit->object.sprite, NULL);
        rpg->planet_rabbit.check = 1;
    }
    sfRenderWindow_drawSprite(window,
        all_planets->green->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        rpg->player->player_stat->sprite_character.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        all_planets->white->object.sprite, NULL);
    sfRenderWindow_drawSprite(window,
        all_planets->yellow->object.sprite, NULL);
    draw_planets_part2(window, all_planets, rpg);
}

void draw_space(sfRenderWindow *window, sfView *view, s_game *rpg)
{
    sfRenderWindow_drawSprite(window, rpg->space.space_sprite, NULL);
    rpg->time_planets.time = sfClock_getElapsedTime(rpg->time_planets.clock);
    rpg->time_planets.seconds =
        rpg->time_planets.time.microseconds / 1000000.0;
    draw_objects(window, rpg);
    draw_planets(window, rpg->all_planets, rpg);
    if (sfClock_getElapsedTime(rpg->player_clock).microseconds >= 700) {
        move_sprite(rpg, window);
        sfClock_restart(rpg->player_clock);
    }
    change_camera_view(window, view, rpg);
    return;
}
