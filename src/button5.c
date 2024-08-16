/*
** EPITECH PROJECT, 2023
** button5
** File description:
** button4
*/

#include "../include/my_paint.h"

void set_color_buttons(sfRenderWindow *window, sfEvent event, sprites_t* sp)
{
    sfRectangleShape_setFillColor(sp->button, sfColor_fromRGB(156,156,156));
    sfRectangleShape_setFillColor(sp->menu_bar, sfTransparent);
    sfRectangleShape_setFillColor(sp->menu_bar2, sfTransparent);
    sfRectangleShape_setFillColor(sp->menu_bar3, sfTransparent);
    sfRectangleShape_setFillColor(sp->down_menu, sfColor_fromRGB(180,180,180));
    sfRectangleShape_setFillColor(sp->rect_pencil, sfTransparent);
    sfRectangleShape_setFillColor(sp->rect_eraser, sfTransparent);
    sfRectangleShape_setFillColor(sp->draw, sfBlack);
    sfRectangleShape_setFillColor(sp->erase, sfWhite);
    sfRectangleShape_setFillColor(sp->file_menu, sfColor_fromRGB(190,190,190));
    sfRectangleShape_setFillColor(sp->file_menu1, sfTransparent);
    sfRectangleShape_setFillColor(sp->file_menu2, sfTransparent);
    sfRectangleShape_setFillColor(sp->file_menu3, sfTransparent);
    set_color_buttons2(window, event, sp);
}

void set_color_buttons2(sfRenderWindow *window, sfEvent event, sprites_t* sp)
{
    sfRectangleShape_setFillColor(sp->edit_menu, sfColor_fromRGB(190,190,190));
    sfRectangleShape_setFillColor(sp->edit_menu1, sfTransparent);
    sfRectangleShape_setFillColor(sp->edit_menu2, sfTransparent);
    sfRectangleShape_setFillColor(sp->help_menu, sfColor_fromRGB(190,190,190));
    sfRectangleShape_setFillColor(sp->help_menu1, sfTransparent);
    sfRectangleShape_setFillColor(sp->help_menu2, sfTransparent);
    sfCircleShape_setFillColor(sp->small_pencil, sfBlack);
    sfCircleShape_setFillColor(sp->medium_pencil, sfBlack);
    sfCircleShape_setFillColor(sp->big_pencil, sfBlack);
    sfRectangleShape_setFillColor(sp->small_rect, sfTransparent);
    sfRectangleShape_setFillColor(sp->medium_rect, sfTransparent);
    set_color_buttons3(window, event, sp);
}

void set_color_buttons3(sfRenderWindow *window, sfEvent event, sprites_t* sp)
{
    sfRectangleShape_setFillColor(sp->big_rect, sfTransparent);
    sfCircleShape_setFillColor(sp->circle_eraser, sfWhite);
    sfCircleShape_setFillColor(sp->circle_eraser1, sfWhite);
    sfCircleShape_setFillColor(sp->circle_eraser2, sfWhite);
    sfRectangleShape_setFillColor(sp->rectangle_eraser, sfWhite);
    sfRectangleShape_setFillColor(sp->recterase, sfTransparent);
    sfRectangleShape_setFillColor(sp->recterase1, sfTransparent);
    sfRectangleShape_setFillColor(sp->recterase2, sfTransparent);
    sfRectangleShape_setFillColor(sp->circleerase, sfTransparent);
    sfRectangleShape_setFillColor(sp->circleerase1, sfTransparent);
    sfRectangleShape_setFillColor(sp->circleerase2, sfTransparent);
    sfRectangleShape_setFillColor(sp->fondoe, sfColor_fromRGB(190,190,190));
    sfRectangleShape_setFillColor(sp->close_e, sfRed);
    sfRectangleShape_setFillColor(sp->white_e, sfWhite);
    set_color_buttons4(window, event, sp);
}

void set_color_buttons4(sfRenderWindow* window, sfEvent event, sprites_t* sp)
{
    sfRectangleShape_setFillColor(sp->blue, sfBlue);
    sfRectangleShape_setFillColor(sp->yellow, sfYellow);
    sfRectangleShape_setFillColor(sp->red, sfRed);
    sfRectangleShape_setFillColor(sp->green, sfGreen);
    sfRectangleShape_setFillColor(sp->white, sfWhite);
    sfRectangleShape_setFillColor(sp->black, sfBlack);
    sfRectangleShape_setFillColor(sp->magenta, sfMagenta);
    sfRectangleShape_setFillColor(sp->cyan, sfCyan);
    sfRectangleShape_setFillColor(sp->rectblue, sfTransparent);
    sfRectangleShape_setFillColor(sp->rectyellow, sfTransparent);
    sfRectangleShape_setFillColor(sp->rectred, sfTransparent);
    sfRectangleShape_setFillColor(sp->rectgreen, sfTransparent);
    sfRectangleShape_setFillColor(sp->rectwhite, sfTransparent);
    sfRectangleShape_setFillColor(sp->rectblack, sfTransparent);
    sfRectangleShape_setFillColor(sp->rectmagenta, sfTransparent);
    sfRectangleShape_setFillColor(sp->rectcyan, sfTransparent);
}
