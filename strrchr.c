/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_104_git/
 * created on:  Wed May 17 19:05:58 2023
 * 1st author:  user
 * description: strrchr.c
*/

char *stu_strrchr(const char *str, char search)
{
    char *t;
    t = 0;
    int i = 0;
    while(str[i] != '\0')
        {
            i = i +1;
        }
    while(i > 0) {
            if(str[i] == search)
                {
                    t = (char *) &str[i];
                    return (t);

                }
                    i = i - 1;
        }
    return "NULL";
}
