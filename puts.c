/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_104_git/
 * created on:  Wed May 17 19:05:58 2023
 * 1st author:  user
 * description: puts.c
*/

#include <unistd.h>
int stu_putchar(const char *c, int value)
{
    return(write(1,& *c, value));
}
int stu_puts(const char *str)
{
    int i = 0;
    while(str[i] != '\0')
        {
            i = i+1;
        }
    if (stu_putchar(str, i) == -1)
        
        {
            return(-1);
        }
    else
        {
            write(1,& "\n",1);
            return(i +1);
        }
}
