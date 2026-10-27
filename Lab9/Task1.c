#include <stdio.h>

float calculateDiscount(char type, float amount) {
    float discountRate = 0.0;
    
    if (type == 'P' || type == 'p') {
        discountRate = 0.20;
    } else if (type == 'G' || type == 'g') {
        discountRate = 0.10;
    } else if (type == 'S' || type == 's') {
        discountRate = 0.05;
    }
    
    // Additional 2% for high-value cart (> 10,000)
    if (amount > 10000.0) {
        discountRate += 0.02;
    }
    
    return amount * discountRate;
}

float calculateFinalBill(float discountedAmount) {
    float salesTax = discountedAmount * 0.15;
    float shipping = (discountedAmount <= 5000.0) ? 300.0 : 0.0;
    return discountedAmount + salesTax + shipping;
}

int main(void) {
    char type;
    float amount;

    printf("\t\tSHOPPING DISCOUNT & BILL CALCULATOR\n");
    printf("Enter Membership Type (P = Platinum, G = Gold, S = Standard): ");
    scanf(" %c", &type);
    printf("Enter Total Shopping Amount (PKR): ");
    scanf("%f", &amount);

    float discount = calculateDiscount(type, amount);
    float discountedAmount = amount - discount;
    float finalBill = calculateFinalBill(discountedAmount);

    printf("\n--- BILL SUMMARY ---\n");
    printf("Original Amount : PKR %.2f\n", amount);
    printf("Discount Applied: PKR %.2f\n", discount);
    printf("Discounted Price: PKR %.2f\n", discountedAmount);
    printf("Final Bill      : PKR %.2f\n", finalBill);

    return 0;
}
