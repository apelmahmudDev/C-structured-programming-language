#include <stdio.h>

// Need 1 byte locator for kept char type data on memory

int main()
{
    char ch;
    printf("Enter the first letter of your name: ");
    scanf("%c", &ch);
    printf("The first letter of your name is: %c\n", ch);
    return 0;
}
