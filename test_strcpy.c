/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_104_git/
 * created on:  Wed May 17 19:05:58 2023
 * 1st author:  user
 * description: test_strcpy.c
*/

#include <stdlib.h>
#include <stdio.h>
char *stu_strcpy(char *dest, const char *src);
int main(void) {
char *str_a;
str_a = malloc(7 * sizeof(char));
if (!str_a)
return 1;
stu_strcpy(str_a, "hello!");
str_a[0] = 'b';
str_a[4] = 'a';
puts(str_a);
return 0;
}
