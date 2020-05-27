/*
** EPITECH PROJECT, 2019
** split
** File description:
** sokoban
*/

#include "my.h"

char **my_split(char *src)
{
    char **str = malloc((nb_lines_size(src) + 1) * sizeof(char *));
    int i = 0;
    int k = 0;

    for (int j = 0; src[i] != '\0'; i++) {
        if (src[i] == '\n')
            j++;
        str[j] = malloc(i + 1);
    }
    i = 0;
    for (int j = 0; src[i] != '\0'; i++, k++) {
        if (src[i] == '\n') {
            str[j][i] = '\0';
            j++;
            i++;
            k = 0;
        }
        str[j][k] = src[i];
    }
    return (str);
}
