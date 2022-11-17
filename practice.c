// documentation

/*
    program: Determination of : ⤵️
        i.  summation;
        ii. subsctruction;
        iii. multiplication;
        iv. division;
*/

// link
#include <stdio.h>

// global declairation


// main function
int main() {
    int first_number, second_number, sum, substruction, multiplication, division;

    printf("Please enter the first number: ");
    scanf("%d", &first_number);

    printf("Please enter the second number: ");
    scanf("%d", &second_number);


    // calculations
    sum = first_number + second_number;
    substruction = first_number - second_number;
    multiplication =  first_number * second_number;
    division = first_number / second_number;

    printf("\n");
    printf("The summation of %d + %d = %d\n", first_number, second_number, sum);
    printf("The substruction of %d - %d = %d\n", first_number, second_number, substruction);
    printf("The multiplication of %d * %d = %d\n", first_number, second_number, multiplication);
    printf("The division of %d / %d = %d\n", first_number, second_number, division);

    return 0;
}
