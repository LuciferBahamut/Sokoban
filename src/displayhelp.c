/*
** EPITECH PROJECT, 2019
** displayhelp
** File description:
** sokoban
*/

#include "my.h"

void displayhelp(void)
{
    my_putstr("USAGE\n     ");
    my_putstr("./my_sokoban map\n");
    my_putstr("\nDESCRIPTION\n     ");
    my_putstr("map  file representing the warehouse map.");
    my_putstr("containing '#' for walls\n      ");
    my_putstr("    'P' for the player, 'X' for boxes and 'O'");
    my_putstr(" for storage locations.\n");
}
