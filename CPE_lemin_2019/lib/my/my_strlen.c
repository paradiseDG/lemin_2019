/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** strlezsa
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;

    if (str != NULL)
    	while (str[i] != '\0') {
        	i++;
    	}
    return (i);
}
