/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void display_list(node_t *list)
{
    node_t *tmp;
    tmp = list;

    while (tmp != NULL) {
        printf("%s\n", list->identity);
        tmp = tmp->next;
    }
}

node_t *create_node(char *name)
{
    node_t *node = malloc(sizeof(node_t));
    node->identity = name;
    node->next = NULL;
    return (node);
}

node_t *link_node_to_list(node_t **list, node_t *node)
{
    node_t *tmp;

    tmp = *list;
    if (*list == NULL)
        *list = node;
    else {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = node;
    }
    return (*list);
}

node_t *link_node_to_node(node_t *node1, node_t *node2)
{
    
    return (node1);
}

int main(int ac, char **av)
{
    node_t *list = NULL;
    node_t *node1;
    node_t *node2;
    node_t *node3;
    node_t *node4;

    node1 = create_node("node1");
    node2 = create_node("node2");
    node3 = create_node("node3");
    node4 = create_node("node4");
    node1 = link_node_to_node(node1, node2);
    node1 = link_node_to_node(node1, node4);
    link_node_to_list(&list, node1);
    link_node_to_list(&list, node2);
    display_list(list);

    my_reader(av[1]);
    return (0);
}