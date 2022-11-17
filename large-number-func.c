/*
    c program:
    Determine large number of array with help of function
*/

#include <stdio.h> // header

int large_number(int num_arr[]);

int main() {
    int arr[13] = {1,100,4,5,6,7,8,9,10,23,40, 33, 22};
    printf("large number is : %d ", large_number(arr));
    return 0;
}

int large_number(int num_arr[])
{
   int large;

   large = num_arr[0];

   for(int i = 0; i < 13; i++){
        if(large < num_arr[i]){
            large = num_arr[i];
        }
   }

   return large;
}
