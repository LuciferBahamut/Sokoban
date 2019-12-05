/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** sokoban
*/

int error_handling(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h')
        return (0);
    if (ac != 2)
        return (1);
    return (0);
}
