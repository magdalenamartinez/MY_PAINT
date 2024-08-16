/*
** EPITECH PROJECT, 2023
** draw.c
** File description:
** draw
*/

#include "../include/my_paint.h"

void make_draw(sfRenderWindow *window, sfEvent event, sprites_t* sprites)
{
    sfRenderWindow_drawRectangleShape(window, sprites->button, NULL);
    sfRenderWindow_drawRectangleShape(window, sprites->menu_bar, NULL);
    sfRenderWindow_drawRectangleShape(window, sprites->menu_bar2, NULL);
    sfRenderWindow_drawRectangleShape(window, sprites->menu_bar3, NULL);
    sfRenderWindow_drawText(window, sprites->file, NULL);
    sfRenderWindow_drawText(window, sprites->edit, NULL);
    sfRenderWindow_drawText(window, sprites->help, NULL);
    sfRenderWindow_drawRectangleShape(window, sprites->down_menu, NULL);
    make_draw2(window, event, sprites);
}

void make_draw2(sfRenderWindow *window, sfEvent event, sprites_t* sprites)
{
    if (sprites->pencil_state == 1) {
        sfRenderWindow_drawRectangleShape(window, sprites->rect_pencil, NULL);
        sfRenderWindow_drawCircleShape(window, sprites->small_pencil, NULL);
        sfRenderWindow_drawCircleShape(window, sprites->medium_pencil, NULL);
        sfRenderWindow_drawCircleShape(window, sprites->big_pencil, NULL);
    }
    if (sprites->eraser_state == 1) {
        sfRenderWindow_drawRectangleShape(window, sprites->rect_eraser, NULL);
    }
    make_draw3(window, event, sprites);
}

void make_draw3(sfRenderWindow *window, sfEvent event, sprites_t* sprites)
{
    if (sprites->file_select == 1) {
        sfRenderWindow_drawRectangleShape(window, sprites->file_menu, NULL);
        sfRenderWindow_drawRectangleShape(window, sprites->file_menu1, NULL);
        sfRenderWindow_drawRectangleShape(window, sprites->file_menu2, NULL);
        sfRenderWindow_drawRectangleShape(window, sprites->file_menu3, NULL);
        sfRenderWindow_drawText(window, sprites->new_file, NULL);
        sfRenderWindow_drawText(window, sprites->open_file, NULL);
        sfRenderWindow_drawText(window, sprites->save_file, NULL);
    }
    make_draw4(window, event, sprites);
}

void make_draw4(sfRenderWindow *window, sfEvent event, sprites_t* sprites)
{
    if (sprites->edit_select == 1) {
        sfRenderWindow_drawRectangleShape(window, sprites->edit_menu, NULL);
        sfRenderWindow_drawRectangleShape(window, sprites->edit_menu1, NULL);
        sfRenderWindow_drawRectangleShape(window, sprites->edit_menu2, NULL);
        sfRenderWindow_drawText(window, sprites->select_pencil, NULL);
        sfRenderWindow_drawText(window, sprites->select_eraser, NULL);
    }
    if (sprites->help_select == 1) {
        sfRenderWindow_drawRectangleShape(window, sprites->help_menu, NULL);
        sfRenderWindow_drawRectangleShape(window, sprites->help_menu1, NULL);
        sfRenderWindow_drawRectangleShape(window, sprites->help_menu2, NULL);
        sfRenderWindow_drawText(window, sprites->about, NULL);
        sfRenderWindow_drawText(window, sprites->help_txt, NULL);
    }
    make_draw5(window, event, sprites);
}

void make_draw5(sfRenderWindow *window, sfEvent event, sprites_t* sp)
{
    if (sp->small_select == 1 && sp->pencil_state == 1) {
        sfRenderWindow_drawRectangleShape(window, sp->small_rect, NULL);
    }
    if (sp->medium_select == 1 && sp->pencil_state == 1) {
        sfRenderWindow_drawRectangleShape(window, sp->medium_rect, NULL);
    }
    if (sp->big_select == 1 && sp->pencil_state == 1) {
        sfRenderWindow_drawRectangleShape(window, sp->big_rect, NULL);
    }
    if (sp->eraser_state == 1) {
        sfRenderWindow_drawCircleShape(window, sp->circle_eraser, NULL);
        sfRenderWindow_drawCircleShape(window, sp->circle_eraser1, NULL);
        sfRenderWindow_drawCircleShape(window, sp->circle_eraser2, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->rectangle_eraser, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->rectangle_eraser1, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->rectangle_eraser2, NULL);
    }
    make_draw6(window, event, sp);
}
