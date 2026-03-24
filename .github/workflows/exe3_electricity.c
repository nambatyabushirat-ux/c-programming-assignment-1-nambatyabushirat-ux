/* Nambatya Bushirat*/
/* 2500801405: U/BIO/01405/PD */
#include <stdio.h>

int main() {
    float units, cost_per_unit, total_bill;

    // Ask user for input
    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    printf("Enter cost per unit (in your currency): ");
    scanf("%f", &cost_per_unit);

    // Calculate total bill
    total_bill = units * cost_per_unit;

    // output
    printf("Total electricity bill: %.2f", total_bill);

    return 0;
}