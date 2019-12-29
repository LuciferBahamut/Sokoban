/*
** EPITECH PROJECT, 2019
** gest_file
** File description:
** sokoban
*/

#include "my.h"

int gest_file(char **av)
{
    int fd;
    int re;
    char *buffer;
    char **map;
    struct stat st;

    fd = open(av[1], O_RDONLY);
    stat(av[1], &st);
    buffer = malloc(st.st_size + 1);
    re = read(fd, buffer, st.st_size);
    if (error_handling(fd, re) == 1 || error_handling2(buffer) == 1)
        return (84);
    map = my_split(buffer);
    sokoban(map, buffer, av);
    close (fd);
    free (buffer);
    return (0);
}
