/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** my_strncmp
*/

#include <stdio.h>

int my_strncmp(char *s1, char *s2, int n)
{
    int i = 0;
    int x = 0;

    while (i < n) {
        if (s1[i] == s2[x]) {
            x++;
        }
        i++;
    }
    return (x - i);
}
