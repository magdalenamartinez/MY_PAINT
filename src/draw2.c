/*
** EPITECH PROJECT, 2023
** draw2
** File description:
** draw2
*/

#include "../include/my_paint.h"

void make_draw6(sfRenderWindow *window, sfEvent event, sprites_t* sp)
{
    if (sp->eraser_state == 1 && sp->eraser_rect == 1) {
        choose_rect_eraser(window, event, sp);
    }
    if (sp->eraser_state == 1 && sp->eraser_circle == 1) {
        choose_circle_eraser(window, event, sp);
    }
    if (sp->openfile_select == 1) {
        sfRenderWindow_drawRectangleShape(window, sp->fondoe, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->close_e, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->white_e, NULL);
        sfRenderWindow_drawText(window, sp->ventana, NULL);
        sfRenderWindow_drawText(window, sp->x, NULL);
        sfRenderWindow_drawText(window, sp->openfiletext, NULL);
    }
    make_draw7(window, event, sp);
}

void choose_rectpencilcolor(sfRenderWindow* w, sfEvent event, sprites_t* sp)
{
    switch (sp->c) {
        case 0:
            sfRenderWindow_drawRectangleShape(w, sp->rectblue, NULL); break;
        case 1:
            sfRenderWindow_drawRectangleShape(w, sp->rectyellow, NULL);
            break;
        case 2:
            sfRenderWindow_drawRectangleShape(w, sp->rectred, NULL); break;
        case 3:
            sfRenderWindow_drawRectangleShape(w, sp->rectgreen, NULL); break;
        case 4:
            sfRenderWindow_drawRectangleShape(w, sp->rectwhite, NULL); break;
        case 5:
            sfRenderWindow_drawRectangleShape(w, sp->rectblack, NULL); break;
        case 6:
            sfRenderWindow_drawRectangleShape(w, sp->rectmagenta, NULL); break;
        case 7:
            sfRenderWindow_drawRectangleShape(w, sp->rectcyan, NULL); break;
        }
}

void make_draw7(sfRenderWindow *window, sfEvent event, sprites_t* sp)
{
    if (sp->pencil_state == 1) {
        sfRenderWindow_drawRectangleShape(window, sp->blue, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->yellow, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->red, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->green, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->white, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->black, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->magenta, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->cyan, NULL);
        choose_rectpencilcolor(window, event, sp);
    }
    make_draw8(window, event, sp);

}

void make_draw8(sfRenderWindow *window, sfEvent event, sprites_t* sp)
{
    if (sp->saveimage_select2 == 1) {
        sfRenderWindow_drawRectangleShape(window, sp->fondoe, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->close_e, NULL);
        sfRenderWindow_drawRectangleShape(window, sp->white_e, NULL);
        sfRenderWindow_drawText(window, sp->ventana2, NULL);
        sfRenderWindow_drawText(window, sp->x, NULL);
        sfRenderWindow_drawText(window, sp->savefiletext, NULL);
    }
    sfRenderWindow_drawSprite(window, sp->pencil, NULL);
    sfRenderWindow_drawSprite(window, sp->eraser, NULL);
}
