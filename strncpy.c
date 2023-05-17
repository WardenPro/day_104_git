/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_104_git/
 * created on:  Wed May 17 19:05:58 2023
 * 1st author:  user
 * description: strncpy.c
*/

char *stu_strncpy(char *dest,const char *src,unsigned int n)
{
    int i = 0;
    while(src[i] != '\0')
        {
            i = i+1;
        }
    i = 0;
    while(src[i] != '\0'&& n > 0)
        {
            dest[i] = src[i];
            i = i+1;
            n = n-1;
        }
            return dest;

}
