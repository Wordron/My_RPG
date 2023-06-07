/*
** EPITECH PROJECT, 2023
** My_RPG
** File description:
** open_map_txt_in_mem
*/
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>

static int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

static char **load_rectangle(char *buffer, char **file)
{
    int line = 0;
    int col = 0;

    for (int i = 0; buffer[i] != '\0'; line++) {
        for (col = 0; buffer[i] != '\n' && buffer[i] != '\0'; i++) {
            file[line][col] = buffer[i];
            col++;
        }
        if (i != my_strlen(buffer))
            i++;
        file[line][col] = '\0';
    }
    file[line] = NULL;
    return (file);
}

static int count_rows(char *buffer)
{
    int rows = 0;

    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '\n')
            rows++;
    }
    rows++;
    return (rows);
}

static int count_cols(char *buffer)
{
    int i = 0;

    for (i = 0; buffer[i] != '\n';)
        i++;
    return (i);
}

char **load_2d_arr_from_file(char const *filepath)
{
    struct stat stock;
    int error = stat(filepath, &stock);
    char **file;
    char *buffer = malloc(sizeof(char) * (stock.st_size + 1));
    int fd = open(filepath, O_RDONLY);
    int size = 0;

    if (fd < 0)
        return (NULL);
    error = read(fd, buffer, stock.st_size);
    size = count_rows(buffer);
    file = malloc(sizeof(char *) * (size + 1));
    for (int i = 0; i != size; i++)
        file[i] = malloc(sizeof(char) * (count_cols(buffer) + 1));
    load_rectangle(buffer, file);
    close(fd);
    free(buffer);
    return (file);
}
