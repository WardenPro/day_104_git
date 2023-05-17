/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_104_git/
 * created on:  Wed May 17 19:05:58 2023
 * 1st author:  user
 * description: test_strrchr.c
*/

#include <stdio.h>
char *stu_strrchr(const char *str, char search);
int main(void)
{
    printf(stu_strrchr("hello", *"z"));
    return 0;
}
