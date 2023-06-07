/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** fill_map
*/
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

void main(int ac, char **av)
{
    int fd = open(av[1], O_CREAT | O_WRONLY | O_TRUNC, 0644);

    if (fd == -1)
        return;
    for (int i = 0; i < 1080; i++) {
        for (int j = 0; j < 1920; j++)
            write(fd, "0", 1);
        write(fd, "\n", 1);
    }
    close(fd);
}
