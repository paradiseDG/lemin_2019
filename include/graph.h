/*
** EPITECH PROJECT, 2020
** graph
** File description:
** graph stuff for lemin
*/

#ifndef GRAPH_H_
# define GRAPH_H_

typedef struct a_point
{
    int x;
    int y;
}s_point;

typedef struct a_tube
{
    struct a_graph *successor;
    struct a_tube *next;
}s_tube;

typedef struct a_room
{
    int ants;
    t_point coord;
    char p_start;
    char p_end;
    char flag;
    struct a_graph *prev;
    int prev_d;
}s_room;

typedef struct a_graph
{
    s_room *room;
    struct a_tube *tube;
    struct a_graph *next;
}s_graph;

typedef struct s_path
{
    s_graph *room;
    struct a_path *next;
}s_path;

typedef struct a_pathlist
{
    int length;
    struct a_path *path;
    struct a_pathlist *next;
}s_pathlist;
