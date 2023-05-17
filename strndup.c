/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_104_git/
 * created on:  Wed May 17 19:05:58 2023
 * 1st author:  user
 * description: strndup.c
*/

#include <stdlib.h>
#include <stdio.h>
char *stu_strndup(const char *str,unsigned int nmb)
{
    int i = 0;
    while(str[i] != '\0')
        {
            i = i+1;
        }
    char *test = malloc(sizeof(char) * i);
    i = 0;
    
        while(str[i] != '\0' && nmb >0)
            {
            test[i]= str[i];
            i = i + 1;
            nmb = nmb -1;
            }
        return(test);

}
