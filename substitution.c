#include <stdio.h>
int main()
{
    // x + y = 15; x - y = 5 হলে x ও y এর মান কত?

    double x, y, x_plus_y, x_minus_y;

    printf("Enter the value of x + y: ");
    scanf("%lf", &x_plus_y);

    printf("Enter the value of x - y: ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("x = %0.2lf , y = %0.2lf\n", x, y);
    return 0;

}
