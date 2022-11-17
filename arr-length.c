#include <stdio.h>

// method to count length of arr / string;
int string_length(char str[])
{
    int i, length;

    for(i = 0; str[i] != '\0'; i++){
        length++;
    }
    return length;
}

int main()
{
    int length;
    char country[100];

    while(1 == scanf("%s", &country)){
        length = string_length(country);
        printf("length: %d\n", length);
    }
    return 0;


}
