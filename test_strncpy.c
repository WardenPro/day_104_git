/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_104_git/
 * created on:  Wed May 17 19:05:58 2023
 * 1st author:  user
 * description: test_strncpy.c
*/

#include <stdio.h>
#include <stdlib.h>
char *stu_strncpy(char *dest,const char *src,unsigned int n);
int main(void)
{
    char *str_a;
    str_a = malloc(20 * sizeof(char));
    
    printf(stu_strncpy(str_a,"hello from the space", 4));
    return(0);
}
