#include <stdio.h>
int main()
    // I = Prn (মুনাফা = আসল x মুনাফার হার x সময়)


{
    double total_amount, monthly_amount, actual_amount, interest_rate, time;

    printf("Enter your amount: ");
    scanf("%lf", &actual_amount);

    printf("Enter interest rate: ");
    scanf("%lf", &interest_rate);

    printf("Enter years: ");
    scanf("lf", &time);

    total_amount = actual_amount * (interest_rate / 100) * time;
    monthly_amount = total_amount / (time * 12);

    printf("Total amount: %0.2lf and monthly amount: %0.2lf\n", total_amount, monthly_amount);

    return 0;
}
