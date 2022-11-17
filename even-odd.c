#include <stdio.h>
int main()
{
    int n = 55;
    int remainder;

    remainder = n % 2;
    printf("%d", remainder);
    //if(n % 2 == 0){
    if(remainder == 0){
        printf("%d is even number\n", n);
    }
    else {
        printf("%d is odd number\n", n);
    }
    return 0;
}
