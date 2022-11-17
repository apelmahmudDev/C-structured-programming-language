#include <stdio.h>

int main()
{
    char sign;
    int num1, num2, value;

    printf("Please enter a number: ");
    scanf("%d", &num1);

    printf("Please enter another number: ");
    scanf("%d", &num2);

    sign = '+';
    value = num1 + num2;
    printf("%d %c %d = %d", num1, sign, num2, value);

    return 0;
}
