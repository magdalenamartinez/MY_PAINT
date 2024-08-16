/*
** EPITECH PROJECT, 2023
** help.c
** File description:
** help
*/

#include "../include/my_paint.h"

void help_menu(sfRenderWindow* w, sfEvent evt, sprites_t* sp, int pos)
{
    if (sp->help_select == 0) {
        return;
    }
    sp->help_select = 0;
    if (pos == 11) {
        about(w, evt, sp);
    }
    if (pos == 12) {
        help(w, evt, sp);
    }
}

void about(sfRenderWindow* w, sfEvent evt, sprites_t* sp)
{

}

void help(sfRenderWindow* w, sfEvent evt, sprites_t* sp)
{

}
