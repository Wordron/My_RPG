/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** interact_orange_planet
*/
#include "function.h"

static sfBool is_at_door_step(s_game *rpg)
{
    sfFloatRect rect_door = sfRectangleShape_getGlobalBounds(
        rpg->planet_orange.door);
    sfFloatRect rect_robot = sfSprite_getGlobalBounds(
        rpg->player->robot.sprite);

    return (sfFloatRect_intersects(&rect_door, &rect_robot, NULL));
}

static void leave_orange_planet(sfRenderWindow *window, sfView *view,
    s_game *rpg)
{
    if (rpg->event.key.code == sfKeySpace && rpg->event.type ==
        sfEvtKeyReleased && is_at_door_step(rpg)) {
        rpg->scene_to_change = PABLO_HOUSE;
        sfSprite_setPosition(rpg->player->robot.sprite,
            (sfVector2f){920, 900});
    }
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->planet_orange.sign.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = SPACE_MAP;
        sfView_setCenter(view, (sfVector2f) {960,540});
        sfView_setSize(view, (sfVector2f) {1920, 1080});
        sfRenderWindow_setView(window, view);
        rpg->all_ennemies->en_1->dead = 0;
        rpg->all_ennemies->en_2->dead = 0;
        rpg->all_ennemies->en_5->dead = 0;
        rpg->all_ennemies->en_6->dead = 0;
        rpg->is_fighted = NO_ONE_TALKING;
    }
}

void pick_up_loot(s_game *rpg)
{
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_1->loot->sprite_object.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->all_ennemies->en_1->loot->check == 1 &&
        rpg->all_ennemies->en_1->loot->check_object == LEFT_ON_GROUND)
        rpg->all_ennemies->en_1->loot->check_object = PICKED_UP;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_2->loot->sprite_object.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->all_ennemies->en_2->loot->check == 1 &&
        rpg->all_ennemies->en_2->loot->check_object == LEFT_ON_GROUND)
        rpg->all_ennemies->en_2->loot->check_object = PICKED_UP;
    if (square_touching_square(rpg->player->robot.sprite,
        rpg->all_ennemies->en_5->loot->sprite_object.sprite)
        && rpg->event.key.code == rpg->controls->interact &&
        rpg->all_ennemies->en_5->loot->check == 1 &&
        rpg->all_ennemies->en_5->loot->check_object == LEFT_ON_GROUND)
        rpg->all_ennemies->en_5->loot->check_object = PICKED_UP;
}

void interact_orange_planet(sfRenderWindow *window, sfView *view,
    s_game *rpg)
{
    rpg->is_talking = NO_ONE_TALKING;
    if (rpg->event.key.code == sfKeyEscape
        && rpg->event.type == sfEvtKeyReleased) {
        rpg->scene_to_change = IN_GAME_MENU;
        rpg->space_last_scene = ORANGE_PLANET;
    }
    leave_orange_planet(window, view, rpg);
    look_npc_talking_orange(rpg);
    look_ennemi_talking_orange(rpg);
    fight_ennemi_six(window, view, rpg);
    fight_ennemi_five(window, view, rpg);
    fight_ennemi_two(window, view, rpg);
    fight_ennemi_one(window, view, rpg);
    pick_up_loot(rpg);
    return;
}
