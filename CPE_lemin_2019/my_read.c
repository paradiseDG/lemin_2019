/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char** my_reader(char *str)
{
    char *buff = malloc(sizeof(char) * 30000);
    int fd = open(str, O_RDONLY);
    int count = read(fd, buff, 29999);
    char **info = my_str_to_word_array(buff);

    return (info);
}