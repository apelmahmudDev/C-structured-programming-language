/*
    int st_mark[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    array swaping: ⤵️
    10t is = 1st
    9th is = 2nd
    8th is = 3rd
    nth is = nth
    ------------
    ------------

*/

#include <stdio.h>
int main()
{
   int st_mark[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int st_swap_mark[10];
   int i, j;

   for(i = 0, j = 9; i < 10; i++, j--){
        st_swap_mark[j] = st_mark[i];
   }

   for(i = 0; i < 10; i++ ){
        st_mark[i] = st_swap_mark[i];
   }

   for(i = 0; i < 10; i++){
    printf("%d\n", st_mark[i]);
   }
   return 0;

}
