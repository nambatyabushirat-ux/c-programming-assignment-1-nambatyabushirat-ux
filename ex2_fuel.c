/* Nambatya Bushirat*/
/* 2500801405: U/BIO/01405/PD */
#include <stdio.h>
int main() {
    float distance, fuel, efficiency;

    // input by the user
    printf("Enter distance_traveled (in km): ");
    scanf("%f", &distance);

    printf("Enter fuel_used (in liters): ");
    scanf("%f", &fuel);

    // Calculate fuel efficiency
    efficiency = distance / fuel;

    // output
    printf("Fuel_efficiency: %.2f km/L \n", efficiency);

    return 0;
}
