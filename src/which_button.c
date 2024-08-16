/*
** EPITECH PROJECT, 2023
** which_button.c
** File description:
** which_button
*/

#include "../include/my_paint.h"

void which_button(sfRenderWindow* window, sfEvent event, sprites_t* sp, int pos)
{
    if (pos == -1) {
        return;
    }
    switch (pos - 1) {
        case 0:
            button_file(sp); break;
        case 1:
            button_edit(sp); break;
        case 2:
            button_help(sp); break;
        case 3:
            draw_or_erase(window, event, sp); break;
        case 4:
            button_pencil(window, event, sp); break;
        case 5:
            button_eraser(window, event, sp); break;
        default:
            which_button2(window, event, sp, pos); break;
    }
}

void which_button2(sfRenderWindow* window, sfEvent evt, sprites_t* sp, int pos)
{
    switch (pos - 1) {
        case 6: case 7: case 8:
            file_menu(window, evt, sp, pos - 1); break;
        case 9: case 10:
            edit_menu(window, evt, sp, pos - 1); break;
        case 11: case 12:
            help_menu(window, evt, sp, pos - 1); break;
        case 13:
            button_defaultpencil(sp); break;
        case 14:
            button_mediumpencil(sp); break;
        case 15:
            button_bigpencil(sp); break;
        case 16:
            button_erasercircle(sp); break;
        case 17:
            button_eraserrect(sp); break;
        default:
            which_button3(window, evt, sp, pos); break;
    }
}

void which_button3(sfRenderWindow* window, sfEvent evt, sprites_t* sp, int pos)
{
    switch (pos - 1) {
        case 18:
            sp->openfile_select = 0;
            sp->saveimage_select2 = 0; break;
        case 19:
            sp->color = sfBlue; sp->c = 0;break;
        case 20:
            sp->color = sfYellow; sp->c = 1;break;
        case 21:
            sp->color = sfRed; sp->c = 2; break;
        case 22:
            sp->color = sfGreen; sp->c = 3; break;
        case 23:
            sp->color = sfWhite; sp->c = 4; break;
        default:
            which_button4(window, evt, sp, pos); break;
    }
}

void which_button4(sfRenderWindow* w, sfEvent evt, sprites_t* sp, int pos)
{
    switch (pos - 1) {
        case 24:
            sp->color = sfBlack; sp->c = 5; break;
        case 25:
            sp->color = sfMagenta; sp->c = 6; break;
        case 26:
            sp->color = sfCyan; sp->c = 7; break;
        case 27:
            sp->opt = 0;
            button_erasercircle(sp);
            sp->radiuseraser = 15; break;
        case 28:
            sp->opt = 1; button_erasercircle(sp);
            sp->radiuseraser = 20;  break;
        case 29:
            sp->opt = 2; button_erasercircle(sp);
            sp->radiuseraser = 24; break;
        default:
            which_button5(w, evt, sp, pos); break;
    }
}

void which_button5(sfRenderWindow* window, sfEvent evt, sprites_t* sp, int pos)
{
    switch (pos - 1) {
        case 30:
            sp->sizeeraser.x = 15;
            sp->opt = 0;
            sp->sizeeraser.y = 15;
            button_eraserrect(sp);
            break;
        case 31:
            sp->opt = 1;
            sp->sizeeraser.x = 35;
            sp->sizeeraser.y = 35;
            button_eraserrect(sp);
            break;
        case 32:
            sp->opt = 2;
            sp->sizeeraser.x = 46;
            sp->sizeeraser.y = 46;
            button_eraserrect(sp);
            break;
    }
}
