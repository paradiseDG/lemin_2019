/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** kdaep
*/

#include <stdio.h>
#include "../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    int x = 0;

    while (s1[i] != '\0') {
        if (s1[i] == s2[x]) {
            x++;
        }
        i++;
    }
    return (x - i);
}
