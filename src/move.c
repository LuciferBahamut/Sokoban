/*
** EPITECH PROJECT, 2019
** move
** File description:
** sokoban
*/

#include "my.h"

void left(int sc, int sl, char **map)
{
    for (int i = 0; i < sl; i++)
        for (int j = 0; j < sc; j++) {
            if (map[i][j] == 'P' && map[i][j - 1] == ' ') {
                map[i][j - 1] = 'P';
                map[i][j] = ' ';
                break;
            }
            if (map[i][j] == 'P' && map[i][j - 1] == 'X') {
                if (map[i][j - 2] != '#') {
                    map[i][j - 1] = 'P';
                    map[i][j - 2] = 'X';
                    map[i][j] = ' ';
                    break;
                }
            }
        }
}

void right(int sc, int sl, char **map)
{
    for (int i = 0; i < sl; i++)
        for (int j = 0; j < sc; j++) {
            if (map[i][j] == 'P' && map[i][j + 1] == ' ') {
                map[i][j + 1] = 'P';
                map[i][j] = ' ';
                break;
            }
            if (map[i][j] == 'P' && map[i][j + 1] == 'X') {
                if (map[i][j + 2] != '#') {
                    map[i][j + 2] = 'X';
                    map[i][j + 1] = 'P';
                    map[i][j] = ' ';
                    break;
                }
            }
        }
}

void down(int sc, int sl, char **map)
{
    for (int i = 1, p = 0; i < sl; i++) {
        for (int j = 0; j < sc; j++) {
            if (map[i][j] == 'P' && map[i + 1][j] == ' ') {
                map[i + 1][j] = 'P';
                map[i][j] = ' ';
                p++;
                break;
            }
            if (map[i][j] == 'P' && map[i + 1][j] == 'X') {
                if (map[i + 2][j] != '#') {
                    map[i + 2][j] = 'X';
                    map[i + 1][j] = 'P';
                    map[i][j] = ' ';
                    p++;
                    break;
                }
            }
        }
        if (p == 1)
            break;
    }
}

void up(int sc, int sl, char **map)
{
    for (int i = 1; i < sl; i++) {
        for (int j = 0; j < sc; j++) {
            if (map[i][j] == 'P' && map[i - 1][j] == ' ') {
                map[i - 1][j] = 'P';
                map[i][j] = ' ';
                break;
            }
            if (map[i][j] == 'P' && map[i - 1][j] == 'X') {
                if (map[i - 2][j] != '#') {
                    map[i - 2][j] = 'X';
                    map[i - 1][j] = 'P';
                    map[i][j] = ' ';
                    break;
                }
            }
        }
    }
}

void move_p(char **map, char c, char *temp)
{
    int sc = nb_cols_size(temp);
    int sl = nb_lines_size(temp);

    switch(c) {
    case 'u' : up(sc, sl, map);
        break;
    case 'b' : down(sc, sl, map);
        break;
    case 'g' : left(sc, sl, map);
        break;
    case 'd' : right(sc, sl, map);
        break;
    }
}
