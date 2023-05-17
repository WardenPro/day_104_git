/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_104_git/
 * created on:  Wed May 17 19:05:58 2023
 * 1st author:  user
 * description: strlen.c
*/

/*
 * #include <unistd.h>
 * #include <stdio.h>
 * void stu_putchar(char c)
 * {
 *     write(1,&c,1);
 * }
 */
unsigned int stu_strlen(const char *str)
{
    int i = 0;
    while(str[i] != '\0')
        {
            // stu_putchar(str[i]);
            i = i+1;
        }
    //stu_putchar('\n');
    return(i);
}
