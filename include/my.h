/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** sokoban
*/

#ifndef MY_H
#define MY_H
#define SPACE 32
#define ENTER 10
#define ERROR_SIZE "Invalid size extend window !"
#define Z 122
#define S 115
#define D 100
#define Q 113

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
int error_handling(int fd, int re);
int error_handling2(char *buffer);
int sokoban(char **map, char *temp);
int nb_cols_size(char const *map);
int nb_lines_size(char const *map);
int gest_file(int ac, char **av);
char **my_split(char *src);
void display(int sc, int sl, char **map, char *src);

#endif
