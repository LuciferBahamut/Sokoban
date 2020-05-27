/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** sokoban
*/

int error_handling2(char *m)
{
    int i = 0;

    while (m[i] != '\0')
    {
        if (m[i] == '#' || m[i] == 'X' || m[i] == 'P')
            i++;
        else if (m[i] == 'O' || m[i] == ' ' || m[i] == '\n')
            i++;
        else
            return (1);
    }
}

int error_handling(int fd, int re)
{
    if (fd == -1)
        return (1);
    if (re == 1 || re == 0)
        return (1);
    return (0);
}
