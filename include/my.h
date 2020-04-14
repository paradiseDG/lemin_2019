/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/
#include <dirent.h>

#include <dirent.h>

typedef struct link_s
{
    struct node_s *node;
    struct link_s *next;
} link_t;

typedef struct node_s
{
    int data;
    char *identity;
    link_t *link;
    struct node_s *next;
} node_t;

int my_show_word_array(char * const *tab);
char **malloc_array(int size, int line_max);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char **my_str_to_word_array(char *str, char del);
char *my_strncpy(char *dest, char *src, int n);
int my_strncmp(char *s1, char *s2, int n);
char *my_strcpy(char *dest, char const *src);
char **my_str_to_directory(char *str, char del);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat(char *dest, char const *src);
char** my_reader(char *str);