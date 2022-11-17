#include <stdio.h>
int main ()
{
    int n, sum, i;

    printf("Enter the odd number: ");
    scanf("%d", &n);

    if(n % 2 != 0){
        for(i = 1; i <= n; i = i + 2){
            sum = sum + i;
        }
        printf("Sammation is: %d\n", sum);

    }else {
        printf("Your entered number is not odd !\n");
    }


    return 0;
}
