#include <stdio.h>


int main()
{
    // celsius -> farenheit formula: F = (C x 1.8) + 32

    double celsius, farenheit;

    printf("Enter here celsius: ");
    scanf("%lf", &celsius);

    farenheit = (celsius * 1.8) + 32;

    printf("Farenheit is: %0.2lf F", farenheit);
    return 0;
}
