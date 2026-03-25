/* Nambatya Bushirat*/
/* 2500801405: U/BIO/01405/PD */
#include <stdio.h>

int main() {
    float units, cost_per_unit, total_bill;

    // input by the user 
    printf("Enter electricity_units_consumed: ");
    scanf("%f", &units);

    printf("Enter cost_per_unit (in your currency): ");
    scanf("%f", &cost_per_unit);

    // Calculate total bill
    total_bill = units * cost_per_unit;

    // output
    printf("Total_electricity_bill: %.2f \n", total_bill);

    return 0;
}
