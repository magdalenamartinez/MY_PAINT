/*
** EPITECH PROJECT, 2023
** button4
** File description:
** button4
*/

#include "../include/my_paint.h"

void create_buttons9(sfRenderWindow* window, sfEvent event, sprites_t* sp)
{
    sfVector2f bluepos2 = {14, 27};
    sfVector2f yellowpos2 = {74, 27};
    sfVector2f redpos2 = {137, 27};
    sfVector2f greenpos2 = {197, 27};
    sfVector2f whitepos2 = {257, 27};
    sfVector2f blackpos2 = {317, 27};
    sfVector2f magentapos2 = {377, 27};
    sfVector2f cyanpos2 = {437, 27};
    sfVector2f rectsize = {52, 52};
    sp->rectblue = init_button(bluepos2, rectsize);
    sp->rectyellow = init_button(yellowpos2, rectsize);
    sp->rectred = init_button(redpos2, rectsize);
    sp->rectgreen = init_button(greenpos2, rectsize);
    sp->rectwhite = init_button(whitepos2, rectsize);
    sp->rectblack = init_button(blackpos2, rectsize);
    sp->rectmagenta = init_button(magentapos2, rectsize);
    sp->rectcyan = init_button(cyanpos2, rectsize);
    set_color_buttons(window, event, sp);
    set_outline_buttons(window, event, sp);
}

void set_outline_buttons6(sfRenderWindow* window, sfEvent event, sprites_t* sp)
{
    sfRectangleShape_setOutlineColor(sp->rectblue, sfBlack);
    sfRectangleShape_setOutlineColor(sp->rectyellow, sfBlack);
    sfRectangleShape_setOutlineColor(sp->rectred, sfBlack);
    sfRectangleShape_setOutlineColor(sp->rectgreen, sfBlack);
    sfRectangleShape_setOutlineColor(sp->rectwhite, sfBlack);
    sfRectangleShape_setOutlineColor(sp->rectblack, sfBlack);
    sfRectangleShape_setOutlineColor(sp->rectmagenta, sfBlack);
    sfRectangleShape_setOutlineColor(sp->rectcyan, sfBlack);
    sfRectangleShape_setOutlineThickness(sp->rectblue, 2);
    sfRectangleShape_setOutlineThickness(sp->rectyellow, 2);
    sfRectangleShape_setOutlineThickness(sp->rectred, 2);
    sfRectangleShape_setOutlineThickness(sp->rectgreen, 2);
    sfRectangleShape_setOutlineThickness(sp->rectwhite, 2);
    sfRectangleShape_setOutlineThickness(sp->rectblack, 2);
    sfRectangleShape_setOutlineThickness(sp->rectmagenta, 2);
    sfRectangleShape_setOutlineThickness(sp->rectcyan, 2);
}
