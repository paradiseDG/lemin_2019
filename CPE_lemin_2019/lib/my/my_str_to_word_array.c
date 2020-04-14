
/*
** EPITECH PROJECT, 2020
** my_str_to_word_array.c
** File description:
** my_str_to_word_array.c
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int analyse_char(char str, char del)
{
    if (str == del)
        return (1);
    else
        return (0);
}

int count_word(char *str, char del)
{
    int i = 0;
    int count = 1;

    while (str[i] != '\0') {
        if (analyse_char(str[i], del) == 1)
            count++;
        i++;
    }
    return (count);
}

int longest_word(char *str, char del)
{
    int i = 0;
    int size = 1;
    int place = 0;

    while (str[i] != '\0') {
        if (size < place)
            size = place;
        if (str[i] == del) {
            place = 0;
        }
        place++;
        i++;
    }
    return (size);
}

int size_first_word(char *str, char del)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == del)
            return (i);
        i++;
    }
    return (i);
}

char **my_str_to_word_array(char *str, char del)
{
    int j = 0;
    int i = 0;
    int x = 0;
    int biggest_word = longest_word(str, del);
    int word = count_word(str, del);
    char **array = malloc(sizeof(char *) * (word + 1));

    array[x] = malloc(sizeof(char) * (size_first_word(str, del) + 1));
    while (str[i] != '\0') {
        if (analyse_char(str[i], del) == 1 && \
        analyse_char(str[i + 1], del) == 0) {
            array[x][j] = '\0';
            x++;
            j = 0;
            array[x] = malloc(sizeof(char) * biggest_word + 1);
        }
        else if (str[i] != del) {
            array[x][j] = str[i];
            j++;
        }
        i++;
    }
    array[x + 1] = NULL;
    return (array);
}
