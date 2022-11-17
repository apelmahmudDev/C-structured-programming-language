/*
    demonstrate arr element in reverse
*/

#include <stdio.h> // header link included
int main()
{
    int arr[8] = {6,7,8,9,5,11, 12, 14};
    int i;

    for( i = 7; i >= 0; i--){
        printf("%d the element is: %d\n",i, arr[i]);
    }

    return 0;
}
