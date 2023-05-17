/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_104_git/
 * created on:  Wed May 17 19:05:58 2023
 * 1st author:  user
 * description: strcpy.c
*/

char *stu_strcpy(char *dest, const char *src)
{
        int i = 0;
    while(src[i] != '\0')
        {
            dest[i] = src[i];
            i = i+1;
        }
            return dest;

}
