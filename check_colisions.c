/*
** EPITECH PROJECT, 2023
** check_colisions.c
** File description:
** check_colisions
*/
#include <math.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>

sfVector2f get_center(sfSprite *circle, double radius)
{
    sfVector2f position_circle;

    position_circle.x = sfSprite_getPosition(circle).x + radius;
    position_circle.y = sfSprite_getPosition(circle).y + radius;
    return (position_circle);
}

sfBool square_touching_circle(sfSprite *rectangle_one,
    sfSprite *circle)
{
    double rad = 0;
    sfVector2f center_circle;
    sfVector2f vector;

    rad = pow(10 + (sfSprite_getGlobalBounds(circle).width / 2), 2);
    center_circle = get_center(circle, sfSprite_getGlobalBounds(
        circle).width / 2);
    vector.x = pow((sfSprite_getPosition(rectangle_one).x + 10)
        - center_circle.x, 2);
    vector.y = pow((sfSprite_getPosition(rectangle_one).y + 10)
        - center_circle.y, 2);
    if (vector.x + vector.y <= rad)
        return (sfTrue);
    return (sfFalse);
}

sfBool square_touching_square(sfSprite *rectangle_one,
    sfSprite *rectangle_two)
{
    int collision_x = 0;
    int collision_y = 0;

    if (sfSprite_getPosition(rectangle_one).x + sfSprite_getGlobalBounds(
        rectangle_one).width >= sfSprite_getPosition(rectangle_two).x
    && sfSprite_getPosition(rectangle_two).x + sfSprite_getGlobalBounds(
        rectangle_two).width >= sfSprite_getPosition(rectangle_one).x)
        collision_x = 1;
    if (sfSprite_getPosition(rectangle_one).y + sfSprite_getGlobalBounds(
        rectangle_one).height >= sfSprite_getPosition(rectangle_two).y
    && sfSprite_getPosition(rectangle_two).y + sfSprite_getGlobalBounds(
        rectangle_two).height >= sfSprite_getPosition(rectangle_one).y)
        collision_y = 1;
    if (collision_x == 1 && collision_y == 1)
        return (sfTrue);
    return (sfFalse);
}
