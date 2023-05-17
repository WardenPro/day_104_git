/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_104_git/
 * created on:  Wed May 17 19:05:58 2023
 * 1st author:  user
 * description: test_swap_int.c
*/

#include <stdio.h>
int swap_int(int *xtata,int *xtoto);
int main (void )
{
int tata ;
int toto ;
tata = 4;
toto = 9651265;
swap_int(&tata, &toto);
if (tata == 9651265 && toto == 4) {
puts("vous avez réussi");
} else {
puts("vous avez raté");
}
return (0);
}
