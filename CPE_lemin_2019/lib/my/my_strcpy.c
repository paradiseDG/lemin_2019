/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** cpy
*/

#include <stdio.h>

char *my_strcpy(char *dest, char const *src)
{
    int n = 0;

    if (src == NULL)
    	return (dest);
    while (src[n] != '\0') {
        dest[n] = src[n];
        n = n + 1;
    }
    dest[n] = '\0';
    return (dest);
}
