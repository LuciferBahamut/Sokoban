/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** sokoban
*/

#include "my.h"

int sokoban(char **av)
{
    WINDOW *box;
    int size = my_strlen(av[1]);

    initscr();
    while(1) {
        clear();
        mvprintw(LINES / 2, (COLS / 2) - (size / 2), av[1]);
        refresh();
        if (getch() == 32)
            break;
    }
    endwin();
    return (0);
}
