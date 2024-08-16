/*
** EPITECH PROJECT, 2023
** button.c
** File description:
** button
*/

#include "../include/my_paint.h"

sfRectangleShape* init_button(sfVector2f position, sfVector2f size)
{
    sfRectangleShape* rect = malloc(sizeof(sfRectangleShape*));
    rect = sfRectangleShape_create();
    if (rect == NULL) {
        return;
    }
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setPosition(rect, position);
    return rect;
}

sfCircleShape* init_circle(sfVector2f position, float radius)
{
    sfCircleShape* circle = malloc(sizeof(sfCircleShape*));
    circle = sfCircleShape_create();
    if (circle == NULL) {
        return;
    }
    sfCircleShape_setPosition(circle, position);
    sfCircleShape_setRadius(circle, radius);
    return circle;
}

void create_buttons(sfRenderWindow *window, sfEvent event, sprites_t* sprites)
{
    sfVector2f pos = {2, 2};
    sfVector2f pos2 = {44, 2};
    sfVector2f pos3 = {86, 2};
    sfVector2f pos4 = {2, 22};
    sfVector2f size = {1912, 60};
    sfVector2f size2 = {40, 20};
    sprites->button = init_button(pos, size);
    sprites->menu_bar = init_button(pos, size2);
    sprites->menu_bar2 = init_button(pos2, size2);
    sprites->menu_bar3 = init_button(pos3, size2);
    sprites->down_menu = init_button(pos4, size);
    create_buttons2(window, event, sprites);
}

void create_buttons2(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    sfVector2f pos5 = {873, 25};
    sfVector2f pos6 = {949, 25};
    sfVector2f pos_small = {1500,45};
    sfVector2f pos_small1 = {1478,25};
    sfVector2f size3 = {53, 53};
    sfVector2f pos_medium = {1549,40};
    sfVector2f pos_medium1 = {1533,25};
    sfVector2f pos_big = {1600,35 };
    sfVector2f pos_big1 = {1588,25};
    sprites->rect_pencil = init_button(pos5, size3);
    sprites->rect_eraser = init_button(pos6, size3);
    sprites->small_pencil = init_circle(pos_small, 5);
    sprites->medium_pencil = init_circle(pos_medium, 10);
    sprites->big_pencil = init_circle(pos_big, 15);
    sprites->small_rect = init_button(pos_small1, size3);
    sprites->medium_rect = init_button(pos_medium1, size3);
    sprites->big_rect = init_button(pos_big1,size3);
    create_buttons3(window, event, sprites);
}

void create_buttons3(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    sfVector2f pos_menu = {3, 22};
    sfVector2f pos_menu2 = {3, 57};
    sfVector2f pos_menu3 = {3, 88};
    sfVector2f size_menu = {150, 100};
    sfVector2f size_menu1 = {150, 33};
    sfVector2f size_menu3 = {150, 34};
    sfVector2f size_menu4 = {150, 29};
    sprites->file_menu = init_button(pos_menu, size_menu);
    sprites->file_menu1 = init_button(pos_menu, size_menu1);
    sprites->file_menu2 = init_button(pos_menu2, size_menu4);
    sprites->file_menu3 = init_button(pos_menu3, size_menu3);
    create_buttons4(window, event, sprites);
}
