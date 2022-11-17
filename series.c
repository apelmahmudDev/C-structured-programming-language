#include <stdio.h>
int main()
{
    // 1 + 2 + 3 + 5 + .....998 + 999 + 1000 total of this series?

    int n, total_of_series;

    printf("Enter the number: ");
    scanf("%d", &n);

    total_of_series = (n * (n + 1)) / 2;

    printf("total of series %d\n", total_of_series);

    return 0;




}
