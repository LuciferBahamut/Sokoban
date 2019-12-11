/*
** EPITECH PROJECT, 2019
** size
** File description:
** sokoban
*/

int nb_lines_size(char const *map)
{
    int nb = 0;

    for (int i = 0; map[i] != '\0'; i++) {
        if (map[i] == '\n')
            nb++;
    }
    return (nb);
}

int nb_cols_size(char const *map)
{
    int nb = 0;

    for (int i = 0; map[i] != '\n'; i++) {
        nb++;
    }
    return (nb);
}
