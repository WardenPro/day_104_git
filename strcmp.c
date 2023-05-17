/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_104_git/
 * created on:  Wed May 17 19:05:58 2023
 * 1st author:  user
 * description: strcmp.c
*/

int stu_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    char test = 0;
    while(s1[i] || s2[i] != '\0')
        {
            if(s1[i] == s2[i])
                {
                    test = 0;
                }
            else if (s1[i] < s2[i])
                {
                    test = -1;
                }
            else if (s1[i] >s2[i])
                {
                    test = 1;
                }
            i = i+1;
        }
            return test;

}
