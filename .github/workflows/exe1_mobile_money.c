/* Name. : Nambatya Bushirat*/
/* Student number : 2500801405*/
/* Registration number : U/BIO/01405/PD */
#include <stdio.h>

int main() {
float amount, fee_percent,fee ,total;
 // input by the user 
 printf("Enter amount to send :");
 scanf("%f" ,& amount);
 printf("Enter transaction fee (%):");
 scanf("%f" ,&fee_percent);
 
 //calculations
 fee =(fee_percent/100)*amount;
 total =amount +fee ;
 
 // outputs 
 printf("transaction fee : %.2f Ugx" ,fee);
 printf("total amount deducted :%.2f Ugx",total);
 return 0;

}
