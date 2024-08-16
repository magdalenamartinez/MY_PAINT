/*
** EPITECH PROJECT, 2023
** mouse.c
** File description:
** mouse
*/

#include "../include/my_paint.h"

void button_clicked(sfRenderWindow *w, sfEvent evt, sprites_t* sp, int** a)
{
    sp->mouse = sfMouse_getPosition(w);
    int pos = any_button(sp, a);
    printf("pos x: %i pos y: %i\n", sp->mouse.x, sp->mouse.y);
    if (evt.type == sfEvtMouseButtonPressed) {
        sp->about_state = 0;
        sp->help_state = 0;
        which_button(w, evt, sp, pos);
    }
    if (sfMouse_isButtonPressed(sfMouseLeft) && pos - 1 == 3) {
        draw_or_erase(w, evt, sp);
    }
}
