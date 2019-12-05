/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** sokoban
*/

#ifndef MY_H
#define MY_H

#include <curses.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
void displayhelp(void);
int error_handling(int ac, char **av);
int sokoban(char **av);

#endif
