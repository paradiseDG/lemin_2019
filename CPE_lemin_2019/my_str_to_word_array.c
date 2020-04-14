/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** permit to range texte. 
*/

#include "my.h"

char *my_strncpy (char *dest, char const *src, int n) 
{
    int x = 0;

    while (x != n) {
        dest[x] = src [x];
        x++;
    }
    dest[x] = '\0';
    return (dest);
}

int is_alnum(char c)
{
    if (c <= '\n' || c >= 127)
        return (0);
    return (1);
}

int word_count(char *str)
{
    int i = 0;
    int word = 0;

    while (str != NULL && str[i]) {
        if (is_alnum(str[i]) == 1 && is_alnum(str[i + 1]) == 0)
            word++;
        i++;
    }
    return (word);
}

char **my_str_to_word_array(char *str)
{
    int j = 0;
    int i = 0;
    char **wordtab = malloc((word_count(str) + 1) * sizeof(char *));
    int len = 0;

    while (str != NULL && str[i]) {
        if (is_alnum(str[i]))
            len = len + 1;
        if (is_alnum(str[i]) == 1 && is_alnum(str[i + 1]) == 0) {
            wordtab[j] = malloc(len + 1);
            my_strncpy(wordtab[j], &str[i - len + 1], len);
            len = 0;
            j = j + 1;
        }
        i = i + 1;
    }
    wordtab[j] = NULL;
    return (wordtab);
}