/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char **my_str_to_word_array(char *str, char del);
char *my_strncpy(char *dest, char *src, int n);
char **my_str_to_directory(char *str, char del);
void free_malloc(char **map);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat(char *dest, char const *src);