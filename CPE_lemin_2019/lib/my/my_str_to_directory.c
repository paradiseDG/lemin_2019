/*
** EPITECH PROJECT, 2020
** directory
** File description:
** directory
*/

#include "../include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int analyse_character(char str, char del)
{
    if (str == del)
        return (1);
    else
        return (0);
}

int number_words(char *str, char del)
{
    int i = 0;
    int count = 1;

    while (str[i] != '\0') {
        if (analyse_character(str[i], del) == 1)
            count++;
        i++;
    }
    return (count);
}

int longer_word(char *str, char del)
{
    int i = 0;
    int size = 1;
    int place = 0;

    while (str[i] != '\0')
    {
        if (size < place)
            size = place;
        if (str[i] == del){
            place = 0;
        }
        place++;
        i++;
    }
    return (size);
}

int len_first_word(char *str, char del)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == del)
            return (i);
        i++;
    }
    return (i);
}

char **my_str_to_directory(char *str, char del)
{
    int j = 0;
    int i = 5;
    int x = 0;
    int biggest_word = longer_word(str, del);
    int word = number_words(str, del);
    char **array = malloc(sizeof(char *) * (word + 1));

    array[x] = malloc(sizeof(char) * (len_first_word(str, del) + 1));
    while (str[i] != '\0') {
        if (analyse_character(str[i], del) == 1 \
        && analyse_character(str[i + 1], del) == 0) {
            array[x][j] = '\0';
            x++;
            j = 0;
            array[x] = malloc(sizeof(char) * biggest_word + 1);
        }
        else if (str[i] != del)
        {
            array[x][j] = str[i];
            j++;
        }
        i++;
    }
    array[x + 1] = NULL;
    return (array);
}