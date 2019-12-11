/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** sokoban
*/

#include "my.h"

int control(int g)
{
    return (0);
}

void display(int sc, int sl, char **map, int s)
{
    int g;

    initscr();
    while(1) {
        clear();
        if (COLS / 2 < sc || LINES / 2 < sl / 2 )
            mvprintw(LINES / 2, (COLS / 2) - s, ERROR_SIZE);
        else {
            for (int i = 0; i < sl ; i++)
                mvprintw((LINES / 2) - sl + i, (COLS / 2) - sc, map[i]);
        }
        refresh();
        g = getch();
        control(g);
        if (g == SPACE)
            display(sc, sl, map, s);
        if (g == ECHAP)
            break;
    }
    endwin();
}

int sokoban(char **map, char *temp)
{
    int size_cols = nb_cols_size(temp) / 2;
    int size_lines = nb_lines_size(temp);
    int size = my_strlen(ERROR_SIZE);

    display(size_cols, size_lines, map, size);
    return (0);
}
