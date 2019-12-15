/*
** EPITECH PROJECT, 2019
** sokoban
** File description:
** sokoban
*/

#include "my.h"

void move_p2(char **map, char c, char *temp, int g)
{
    int sc = nb_cols_size(temp);
    int sl = nb_lines_size(temp);

    for (int i = 2; i < sl - 2; i++)
        for (int j = 1; j < sc - 1; j++) {
            if (map[i][j] == 'P' && map[i + 1][j] == ' ' && c == 'u') {
                map[i - 1][j] = 'P';
                map[i][j] = ' ';
                break;
            }
            if (map[i][j] == 'P' && map[i - 1][j] == ' ' && c == 'b') {
                map[i + 1][j] = 'P';
                map[i][j] = ' ';
                break;
            }
        }
}

void move_p(char **map, char c, char *temp, int g)
{
    int sc = nb_cols_size(temp);
    int sl = nb_lines_size(temp);

    for (int i = 0; i < sl; i++)
        for (int j = 0; j < sc; j++) {
            if (map[i][j] == 'P' && map[i][j - 1] == ' ' && c == 'g') {
                map[i][j - 1] = 'P';
                map[i][j] = ' ';
                break;
            }
            if (map[i][j] == 'P' && map[i][j + 1] == ' ' && c == 'd') {
                map[i][j + 1] = 'P';
                map[i][j] = ' ';
                break;
            }
        }
}

void control(int g, char **map, char **temp, char *src)
{
    if (g == KEY_UP || g == Z)
        move_p2(map, 'u', src, g);
    if (g == KEY_DOWN || g == S)
        move_p2(map, 'b', src, g);
    if (g == KEY_LEFT || g == Q)
        move_p(map, 'g', src, g);
    if (g == KEY_RIGHT || g == D)
        move_p(map, 'd', src, g);
    if (g == SPACE)
        sokoban(temp, src);
}

void display(int sc, int sl, char **map, char *src)
{
    int g;
    int s = my_strlen(ERROR_SIZE);
    char **temp = map;

    initscr();
    while(1) {
        clear();
        if (COLS / 2 < sc / 2 || LINES / 2 < sl / 2 )
            mvprintw(LINES / 2, (COLS / 2) - s, ERROR_SIZE);
        else {
            for (int i = 0; i < sl ; i++)
                mvprintw((LINES / 2) - sl + i, (COLS / 2) - (sc / 2), map[i]);
        }
        refresh();
        g = getch();
        if (g == ENTER)
            break;
        control(g, map, temp, src);
    }
    endwin();
}

int sokoban(char **map, char *temp)
{
    int size_cols = nb_cols_size(temp);
    int size_lines = nb_lines_size(temp);

    display(size_cols, size_lines, map, temp);
    return (0);
}
