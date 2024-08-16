/*
** EPITECH PROJECT, 2023
** edit_menu
** File description:
** edit_menu.c
*/

#include "../include/my_paint.h"
void edit_menu(sfRenderWindow* window, sfEvent evt, sprites_t* sp, int pos)
{
    if (sp->edit_select == 0) {
        return;
    }
    sp->edit_select = 0;
    if (pos == 9) {
        button_pencil(window, evt, sp);
    }
    if (pos == 10) {
        button_eraser(window, evt, sp);
    }
}
