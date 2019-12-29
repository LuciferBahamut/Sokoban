/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** sokoban
*/

#include "my.h"

void control(int g, char **map, char *src, char **av)
{
    if (g == KEY_UP || g == Z)
        move_p(map, 'u', src);
    if (g == KEY_DOWN || g == S)
        move_p(map, 'b', src);
    if (g == KEY_LEFT || g == Q)
        move_p(map, 'g', src);
    if (g == KEY_RIGHT || g == D)
        move_p(map, 'd', src);
}

void window(int sl, char **map, char *src, char **av)
{
    int g;
    int s;
    int sc = nb_cols_size(src);

    while (1) {
        clear();
        if (COLS / 2 < sc / 2 || LINES / 2 < sl / 2 )
            mvprintw(LINES / 2, (COLS / 2) - s, ERROR_SIZE);
        else
            for (int i = 0; i < sl ; i++)
                mvprintw((LINES / 2) - sl + i, (COLS / 2) - sc / 2, map[i]);
        refresh();
        g = getch();
        if (g == ENTER)
            break;
        if (g == SPACE) {
            gest_file(av);
            break;
        }
        control(g, map, src, av);
    }
}

void display(int sl, char **map, char *src, char **av)
{
    initscr();
    keypad(stdscr, TRUE);
    window(sl, map, src, av);
    endwin();
}

int sokoban(char **map, char *temp, char **av)
{
    int size_lines = nb_lines_size(temp);

    display(size_lines, map, temp, av);
    return (0);
}
