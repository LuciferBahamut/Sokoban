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

    if (av[1][0] == '-' && av[1][1] == 'h')
    {
        displayhelp();
        return (0);
    }
    if (gest_file(ac, av) == 84)
        return (84);
    return (0);
}
