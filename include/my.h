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
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_putstr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
void displayhelp(void);
int error_handling(int ac, char **av, int fd, int re);
int error_handling2(char *buffer);
int sokoban(char const *map);

#endif
