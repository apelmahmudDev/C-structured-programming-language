/*
    c program:
    to determine circle area;
*/



#include <stdio.h>

double pi = 3.14; // global and access it from all functions
double circle_area(double r);

int main()
{
    double radius;


    printf("Enter radius of circle: ");
    scanf("%lf", &radius);

    printf("Circle Area is: %0.2lf\n ", circle_area(radius));

    return 0;

}

double circle_area(double r)
{
    double area;
    area = (pi * (r * r));
    return area;
}

