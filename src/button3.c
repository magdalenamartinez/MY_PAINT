/*
** EPITECH PROJECT, 2023
** button3.c
** File description:
** button3
*/

#include "../include/my_paint.h"


void set_outline_buttons(sfRenderWindow* w, sfEvent evt, sprites_t* sp)
{
    sfRectangleShape_setOutlineColor(sp->button, sfBlack);
    sfRectangleShape_setOutlineColor(sp->menu_bar, sfBlack);
    sfRectangleShape_setOutlineColor(sp->menu_bar2, sfBlack);
    sfRectangleShape_setOutlineColor(sp->menu_bar3, sfBlack);
    sfRectangleShape_setOutlineColor(sp->down_menu, sfBlack);
    sfRectangleShape_setOutlineColor(sp->rect_pencil, sfBlack);
    sfRectangleShape_setOutlineColor(sp->rect_eraser, sfBlack);
    sfRectangleShape_setOutlineColor(sp->file_menu, sfBlack);
    sfRectangleShape_setOutlineColor(sp->file_menu1, sfBlack);
    sfRectangleShape_setOutlineColor(sp->file_menu2, sfBlack);
    sfRectangleShape_setOutlineColor(sp->file_menu3, sfBlack);
    sfRectangleShape_setOutlineColor(sp->edit_menu, sfBlack);
    sfRectangleShape_setOutlineColor(sp->edit_menu1, sfBlack);
    set_outline_buttons2(w, evt, sp);
}

void set_outline_buttons2(sfRenderWindow* w, sfEvent evt, sprites_t* sp)
{
    sfRectangleShape_setOutlineColor(sp->edit_menu2, sfBlack);
    sfRectangleShape_setOutlineColor(sp->help_menu, sfBlack);
    sfRectangleShape_setOutlineColor(sp->help_menu1, sfBlack);
    sfRectangleShape_setOutlineColor(sp->help_menu2, sfBlack);
    sfRectangleShape_setOutlineColor(sp->small_rect, sfBlack);
    sfRectangleShape_setOutlineColor(sp->medium_rect, sfBlack);
    sfRectangleShape_setOutlineColor(sp->big_rect, sfBlack);
    sfRectangleShape_setOutlineColor(sp->circleerase, sfBlack);
    sfRectangleShape_setOutlineColor(sp->circleerase1, sfBlack);
    sfRectangleShape_setOutlineColor(sp->circleerase2, sfBlack);
    sfRectangleShape_setOutlineColor(sp->recterase, sfBlack);
    set_outline_buttons3(w, evt, sp);
}

void set_outline_buttons3(sfRenderWindow* w, sfEvent evt, sprites_t* sp)
{
    sfRectangleShape_setOutlineColor(sp->recterase1, sfBlack);
    sfRectangleShape_setOutlineColor(sp->recterase2, sfBlack);
    sfRectangleShape_setOutlineThickness(sp->menu_bar, 2);
    sfRectangleShape_setOutlineThickness(sp->menu_bar2, 2);
    sfRectangleShape_setOutlineThickness(sp->menu_bar3, 2);
    sfRectangleShape_setOutlineThickness(sp->down_menu, 2);
    sfRectangleShape_setOutlineThickness(sp->button, 2);
    sfRectangleShape_setOutlineThickness(sp->rect_pencil, 2);
    sfRectangleShape_setOutlineThickness(sp->rect_eraser, 2);
    sfRectangleShape_setOutlineThickness(sp->file_menu, 2);
    sfRectangleShape_setOutlineColor(sp->fondoe, sfBlack);
    set_outline_buttons4(w, evt, sp);
}

void set_outline_buttons4(sfRenderWindow* w, sfEvent evt, sprites_t* sp)
{
    sfRectangleShape_setOutlineColor(sp->close_e, sfBlack);
    sfRectangleShape_setOutlineColor(sp->white_e, sfBlack);
    sfRectangleShape_setOutlineThickness(sp->fondoe, 2);
    sfRectangleShape_setOutlineThickness(sp->close_e, 2);
    sfRectangleShape_setOutlineThickness(sp->white_e, 2);
    sfRectangleShape_setOutlineThickness(sp->file_menu1, 2);
    sfRectangleShape_setOutlineThickness(sp->file_menu2, 2);
    sfRectangleShape_setOutlineThickness(sp->file_menu3, 2);
    sfRectangleShape_setOutlineThickness(sp->edit_menu, 2);
    sfRectangleShape_setOutlineThickness(sp->edit_menu1, 2);
    sfRectangleShape_setOutlineThickness(sp->edit_menu2, 2);
    sfRectangleShape_setOutlineThickness(sp->help_menu, 2);
    sfRectangleShape_setOutlineThickness(sp->help_menu1, 2);
    set_outline_buttons5(w, evt, sp);
}

void set_outline_buttons5(sfRenderWindow* w, sfEvent evt, sprites_t* sp)
{
    sfRectangleShape_setOutlineThickness(sp->help_menu2, 2);
    sfRectangleShape_setOutlineThickness(sp->small_rect, 2);
    sfRectangleShape_setOutlineThickness(sp->medium_rect, 2);
    sfRectangleShape_setOutlineThickness(sp->big_rect, 2);
    sfRectangleShape_setOutlineThickness(sp->circleerase, 2);
    sfRectangleShape_setOutlineThickness(sp->circleerase1, 2);
    sfRectangleShape_setOutlineThickness(sp->circleerase2, 2);
    sfRectangleShape_setOutlineThickness(sp->recterase, 2);
    sfRectangleShape_setOutlineThickness(sp->recterase1, 2);
    sfRectangleShape_setOutlineThickness(sp->recterase2, 2);
    set_outline_buttons6(w, evt, sp);
}
