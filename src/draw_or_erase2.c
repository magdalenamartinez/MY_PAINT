/*
** EPITECH PROJECT, 2023
** draw_or_erase.c
** File description:
** drawerase
*/

#include "../include/my_paint.h"

void draw_or_erase(sfRenderWindow* window, sfEvent event, sprites_t* sprites)
{
    sfVector2f m = {sprites->mouse.x, sprites->mouse.y};
    sfVector2f n = {m.x, m.y - 80};
    sfVector2f size = {5, 5};
    if (sprites->pencil_state == 1) {
        sfCircleShape_setPosition(sprites->point, n);
        sfCircleShape_setRadius(sprites->point, sprites->radius);
        sfCircleShape_setFillColor(sprites->point, sprites->color);
        sfRenderTexture_drawCircleShape(sprites->texture, sprites->point, NULL);
    }
    if (sprites->eraser_state == 1) {
        which_eraser(window, event, sprites);
    }
}

void which_eraser(sfRenderWindow* window, sfEvent event, sprites_t* sp)
{

    sfVector2f m = {sp->mouse.x, sp->mouse.y};
    sfVector2f n = {m.x, m.y - 80};
    sfVector2f size = {30, 30};
    if (sp->eraser_circle == 1) {
        sfCircleShape_setPosition(sp->point, n);
        sfCircleShape_setRadius(sp->point, sp->radiuseraser);
        sfCircleShape_setFillColor(sp->point, sfWhite);
        sfRenderTexture_drawCircleShape(sp->texture, sp->point, NULL);
    } else {
        sfRectangleShape_setPosition(sp->rectform, n);
        sfRectangleShape_setSize(sp->rectform, sp->sizeeraser);
        sfRectangleShape_setFillColor(sp->rectform, sfWhite);
        sfRenderTexture_drawRectangleShape(sp->texture, sp->rectform, NULL);
    }
}
