#include <stdio.h>

int main() {
    int accountNo;
    float balance = 5000, amount;
    int choice;

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    do {
        printf("\n1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                balance += amount;
                break;

            case 2:
                printf("Enter Withdrawal Amount: ");
                scanf("%f", &amount);

                if(amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient Balance\n");
                break;

            case 3:
                printf("Balance = %.2f\n", balance);
                break;

            case 4:
                printf("Thank You\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}