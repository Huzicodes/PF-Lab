#include <stdio.h>

void withdraw(double *balance, double amount) {
    if (amount <= *balance) {
        *balance -= amount;
        printf("Transaction Successful: Withdrew PKR %.2f\n", amount);
    } else {
        printf("Transaction Declined: Insufficient Balance!\n");
    }
}

void deposit(double *balance, double amount) {
    *balance += amount;
    printf("Transaction Successful: Deposited PKR %.2f\n", amount);
    printf("Updated Balance: PKR %.2f\n", *balance);
}

int main(void) {
    double balance = 25000.0; // Initial account balance
    int choice;
    double amount;

    printf("\t\tATM TRANSACTION SYSTEM\n");
    printf("Initial Account Balance: PKR %.2f\n", balance);
    printf("Select Transaction: 1. Withdraw (Debit)  2. Deposit (Credit): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter Withdrawal Amount: PKR ");
        scanf("%lf", &amount);
        withdraw(&balance, amount);
    } else if (choice == 2) {
        printf("Enter Deposit Amount: PKR ");
        scanf("%lf", &amount);
        deposit(&balance, amount);
    } else {
        printf("Invalid Option Selected!\n");
    }

    printf("Final Account Balance: PKR %.2f\n", balance);

    return 0;
}
