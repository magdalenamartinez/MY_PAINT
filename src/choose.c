/*
** EPITECH PROJECT, 2023
** choose.c
** File description:
** choose
*/

#include "../include/my_paint.h"

void choose_rect_eraser(sfRenderWindow* window, sfEvent event, sprites_t* sp)
{
    switch (sp->opt) {
        case 0:
            sfRenderWindow_drawRectangleShape(window, sp->recterase, NULL);
            break;
        case 1:
            sfRenderWindow_drawRectangleShape(window, sp->recterase1, NULL);
            break;
        case 2:
            sfRenderWindow_drawRectangleShape(window, sp->recterase2, NULL);
            break;
    }
}

void choose_circle_eraser(sfRenderWindow* window, sfEvent event, sprites_t* sp)
{
    switch (sp->opt) {
        case 0:
            sfRenderWindow_drawRectangleShape(window, sp->circleerase, NULL);
            break;
        case 1:
            sfRenderWindow_drawRectangleShape(window, sp->circleerase1, NULL);
            break;
        case 2:
            sfRenderWindow_drawRectangleShape(window, sp->circleerase2, NULL);
            break;
    }
}
