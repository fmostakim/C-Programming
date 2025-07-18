#include <stdio.h>

// Function to update the customer's balance
void updateBalance(float balances[], int customerId, int transactionType, float amount) {
    // Check for valid customer ID
    if (customerId < 0 || customerId >= 100) {
        printf("Invalid customer identifier.\n");
        return;
    }

    // Process the transaction
    switch (transactionType) {
        case 1: // Withdrawal
            if (amount > balances[customerId]) {
                printf("Not sufficient balance\n");
            } else {
                balances[customerId] -= amount;
                printf("Transaction successful. Updated balance: %.2f\n", balances[customerId]);
            }
            break;
        case 2: // Deposit
            balances[customerId] += amount;
            printf("Transaction successful. Updated balance: %.2f\n", balances[customerId]);
            break;
        default:
            printf("Invalid transaction type.\n");
            break;
    }
}

int main() {
    float customerBalances[100];
    int customerId, transactionType;
    float transactionAmount;

    // i) Initialize customer balances from user input
    printf("Enter the initial balances for 5 customers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Customer %d: ", i);
        scanf("%f", &customerBalances[i]);
    }

    // ii) Get transaction details from the user
    printf("\nEnter customer identifier (0-99): ");
    scanf("%d", &customerId);

    printf("Enter transaction type (1 for withdrawal, 2 for deposit): ");
    scanf("%d", &transactionType);

    printf("Enter transaction amount: ");
    scanf("%f", &transactionAmount);

    // iii & iv) Call the updateBalance function and handle the output
    updateBalance(customerBalances, customerId, transactionType, transactionAmount);

    return 0;
}
