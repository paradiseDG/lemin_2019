/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** my_strcat
*/

#include "../include/my.h"
#include "stdio.h"

char *my_strcat(char *dest, char const *src)
{
    int cnt_dest = my_strlen(dest);
    int cnt_src = 0;

    if (src == NULL)
        return (dest);
    while (src[cnt_src] != '\0')
    {
        dest[cnt_dest] = src[cnt_src];
        cnt_src++;
        cnt_dest++;
    }
    dest[cnt_dest] = '\0';
    return (dest);
}
