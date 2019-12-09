/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** sokoban
*/

#include "my.h"

int sokoban(char const *map)
{
    WINDOW *box;
    int size = my_strlen(map);

    initscr();
    while(1) {
        clear();
        mvprintw(LINES / 2, (COLS / 2) - (size / 2), map);
        refresh();
        if (getch() == 32)
            break;
    }
    endwin();
    return (0);
}
