/*
** EPITECH PROJECT, 2019
** main
** File description:
** sokoban
*/

#include "my.h"

int main(int ac, char **av)
{
    int fd;
    int re;
    char *buffer;
    struct stat st;

    if (av[1][0] == '-' && av[1][1] == 'h')
    {
        displayhelp();
        return (0);
    }
    fd = open(av[1], O_RDONLY);
    stat(av[1], &st);
    buffer = malloc(st.st_size + 1);
    re = read(fd, buffer, st.st_size);
    if (error_handling(ac, av, fd, re) == 1 || error_handling2(buffer) == 1)
        return (84);
    sokoban(buffer);
    close (fd);
    free (buffer);
    return (0);
}
