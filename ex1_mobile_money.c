/* Name. : Nambatya Bushirat*/
/* 2500801405 :25/U/BIO/01405/PD */

#include <stdio.h>

int main() {
    float amount, fee_percent,fee,total;
// input by the user
    printf("Enter amount to send :");
    scanf("%f",& amount);
    printf("Enter transaction fee (%):");
    scanf("%f",&fee_percent);

//calculations
    fee =(fee_percent/100)*amount;
    total =amount +fee ;

// outputs
    printf("transaction_fee : %.2f Ugx \n",fee);
    printf("total_amount_deducted :%.2f Ugx \n",total);
    return 0;

}

