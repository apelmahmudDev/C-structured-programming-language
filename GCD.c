#include <stdio.h>
int main()
{
    int a, b, x, gcd;

    printf("Enter number for a: ");
    scanf("%d", &a);

    printf("Enter number for b: ");
    scanf("%d", &b);

    if( a > b){
        x = b;
    }
    else {
        x = a;
    }

    for(; 1 <= x ; x--){

            if(a % x == 0 && b % x == 0){
               gcd = x;
               break;
            }
         }

         printf("GCD is: %d\n", gcd);

    return 0;

}
