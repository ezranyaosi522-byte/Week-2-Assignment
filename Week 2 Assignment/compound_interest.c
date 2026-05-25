#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, compoundInterest, amount;

    // Input values
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate total amount
    amount = principal * pow((1 + rate / 100), time);

    // Calculate compound interest
    compoundInterest = amount - principal;

    // Display result
    printf("\nCompound Interest = %.2f\n", compoundInterest);

    return 0;
}
