/* Nambatya Bushirat*/
/* 2500801405: U/BIO/01405/PD */
#include <stdio.h>
int main() {
    float distance, fuel, efficiency;

    // input
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Enter fuel used (in liters): ");
    scanf("%f", &fuel);

    // Calculate fuel efficiency
    efficiency = distance / fuel;

    // output 
    printf("Fuel efficiency: %.2f km/L", efficiency);

    return 0;
}