/*
** EPITECH PROJECT, 2023
** button2.c
** File description:
** button2
*/
#include "../include/my_paint.h"

void create_buttons4(sfRenderWindow* window, sfEvent event, sprites_t* sp)
{
    sfVector2f size_menu = {150, 100};
    sfVector2f pos_edit = {44, 22};
    sfVector2f pos_edit2 = {44, 74};
    sfVector2f pos_help = {86, 22};
    sfVector2f pos_help2 = {86, 74};
    sfVector2f size_menu2 = {150, 50};
    sfVector2f size_menu5 = {150, 48};
    sp->edit_menu = init_button(pos_edit, size_menu);
    sp->edit_menu1 = init_button(pos_edit, size_menu2);
    sp->edit_menu2 = init_button(pos_edit2, size_menu5);
    sp->help_menu = init_button(pos_help, size_menu);
    sp->help_menu1 = init_button(pos_help, size_menu2);
    sp->help_menu2 = init_button(pos_help2, size_menu5);
    create_buttons5(window, event, sp);
}

void create_buttons5(sfRenderWindow* window, sfEvent event, sprites_t* sp)
{
    sfVector2f pos = {2, 2};
    sfVector2f pos_smallcir = {1500,34};
    sfVector2f circlepos = {1400,32 };
    sp->point = init_circle(pos, 10);
    sp->circle_eraser = init_circle(circlepos, 50);
    sp->circle_eraser1 = init_circle(circlepos, 20);
    sp->circle_eraser2 = init_circle(circlepos, 20);
    sfVector2f a = {1510,38 };
    sfCircleShape_setPosition(sp->circle_eraser, a);
    sfCircleShape_setRadius(sp->circle_eraser, 15);
    sfVector2f b = {1560, 33 };
    sfCircleShape_setPosition(sp->circle_eraser1, b);
    sfCircleShape_setRadius(sp->circle_eraser1, 20);
    sfVector2f c = {1614,28 };
    sfCircleShape_setPosition(sp->circle_eraser2, c);
    sfCircleShape_setRadius(sp->circle_eraser2, 24);
    create_buttons6(window, event, sp);
}

void create_buttons6(sfRenderWindow* window, sfEvent event, sprites_t* sp)
{
    sfVector2f pos_bigeraser = {250, 45};
    sfVector2f pos_bigeraser1 = {290, 35};
    sfVector2f pos_bigeraser2 = {350, 29};
    sfVector2f sizet = {15, 15}; sfVector2f sizet1 = {35, 35};
    sfVector2f sizet2 = {46, 46}; sfVector2f pos_small2 = {1498, 25};
    sfVector2f pos_small3 = {1553, 25};
    sfVector2f pos_small4 = {1612, 25};
    sfVector2f pos_big2 = {233, 25};
    sfVector2f pos_big3 = {280, 25};
    sfVector2f pos_big4 = {346, 25}; sfVector2f size3 = {53, 53};
    sp->rectangle_eraser = init_button(pos_bigeraser, sizet);
    sp->rectangle_eraser1 = init_button(pos_bigeraser1, sizet1);
    sp->rectangle_eraser2 = init_button(pos_bigeraser2, sizet2);
    sp->circleerase = init_button(pos_small2, size3);
    sp->circleerase1 = init_button(pos_small3, size3);
    sp->circleerase2 = init_button(pos_small4, size3);
    sp->recterase = init_button(pos_big2, size3);
    sp->recterase1 = init_button(pos_big3, size3);
    sp->recterase2 = init_button(pos_big4, size3);
    create_buttons7(window, event, sp);
}

void create_buttons7(sfRenderWindow* window, sfEvent event, sprites_t* sp)
{
    sfVector2f pos = {2, 2};
    sfVector2f size = {1912, 60};
    sfVector2f posaux = {2,80};
    sfVector2f sizedraw = {10, 10};
    sfVector2f pos_fondo = {450, 350};
    sfVector2f size_fondo = {1000, 200};
    sfVector2f pos_close = {1420, 350};
    sfVector2f size_close = {30, 30};
    sfVector2f pos_white = {480, 440};
    sfVector2f size_white = {850, 80};
    sp->draw = init_button(pos, sizedraw);
    sp->erase = init_button(pos, sizedraw);
    sp->aux = sfSprite_create();
    sp->rectform = init_button(pos, size);
    sfSprite_setPosition(sp->aux, posaux);
    sp->fondoe = init_button(pos_fondo, size_fondo);
    sp->close_e = init_button(pos_close, size_close);
    sp->white_e = init_button(pos_white, size_white);
    create_buttons8(window, event, sp);
}

void create_buttons8(sfRenderWindow* window, sfEvent event, sprites_t* sp)
{
    sfVector2f bluepos = {20, 33};
    sfVector2f yellowpos = {80, 33};
    sfVector2f redpos = {143, 33};
    sfVector2f greenpos = {203, 33};
    sfVector2f whitepos = {263, 33};
    sfVector2f blackpos = {323, 33};
    sfVector2f magentapos = {383, 33};
    sfVector2f cyanpos = {443, 33};
    sfVector2f colorsize = {40, 40};
    sp->blue = init_button(bluepos, colorsize);
    sp->yellow = init_button(yellowpos, colorsize);
    sp->red = init_button(redpos, colorsize);
    sp->green = init_button(greenpos, colorsize);
    sp->white = init_button(whitepos, colorsize);
    sp->black = init_button(blackpos, colorsize);
    sp->magenta = init_button(magentapos, colorsize);
    sp->cyan = init_button(cyanpos, colorsize);
    create_buttons9(window, event, sp);
}
