
#include <stdio.h>

/*
    programm: Fahrenheit to celcius
    Formula: (F - 32) x 5/9
*/

int main ()
{


    double celsius, fahrenheit;

    printf("Enter tempreture in fahrenheit: ");
    scanf("%lf", &fahrenheit);

    celsius = (fahrenheit - 32) * 5/9;

    printf("The temperature in celsius is: %0.2lf\n", celsius);
    return 0;


}
