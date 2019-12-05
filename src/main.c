/*
** EPITECH PROJECT, 2019
** main
** File description:
** sokoban
*/

#include "my.h"

int main(int ac, char **av)
{
    error_handling(ac, av);
    if (av[1][0] == '-' && av[1][1] == 'h')
    {
        displayhelp();
        return (0);
    }
    sokoban(av);
    return (0);
}
