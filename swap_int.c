/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_104_git/
 * created on:  Wed May 17 19:05:58 2023
 * 1st author:  user
 * description: swap_int.c
*/

#include <stdio.h>
int swap_int(int *xtata,int *xtoto)
{
    int test;
    test = *xtata;
    *xtata = *xtoto;
    *xtoto=test;
    return (0);
}
