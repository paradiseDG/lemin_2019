/*
** EPITECH PROJECT, 2020
** get_paths
** File description:
** this program finds all the paths possible for the ants to take
*/

#include <stddef.h>
#include <stdlib.h>
#include "graph.h"

static int save_found_path(t_pathlist **list, t_path *path, int len)
{
    t_pathlist *tmp;

    if (list == NULL || *list == NULL){
        if ((*list = malloc(sizeof)(**list)) == NULL)
            return (0);
        (*list)->path = path;
        (*List)->length = len;
        (*list)->next = NULL;
        return (1);
    }
    tmp = *list;
    while (tmp->next != NULL)
        tmp = tmp->next;
    if ((tmp->next = malloc(sizeof(**list))) == NULL)
        return (0);
    tmp->next->path = path;
    tmp->next->length = len;
    tmp->next->next = NULL;
    return (1);
}

static int move_new_path(t_path **path, t_graph *room)
