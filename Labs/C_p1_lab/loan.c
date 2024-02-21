#include <stdio.h>

int main()
{
    const int PERCENT = 100;
    const int MONTHS = 12;
    float initial;
    float balance;
    float payment;
    float interestRate;

    printf("Enter the initial amount: ");
    scanf("%f", &initial);
    printf("Enter the payment amount: ");
    scanf("%f", &payment);
    printf("Enter the annual interest ammount (1-100): ");
    scanf("%f", &interestRate);
    interestRate = interestRate / PERCENT / MONTHS;

    printf("%3s %7s %5s %6s %7s\n", "Mon", "Start", "Int", "Pay", "Close");
    for (int month = 1; initial > 0; month++)
    {
        float interestAccrued = initial * interestRate;
        balance = initial + interestAccrued;
        float paymentAmount = balance < payment ? balance : payment;
        balance = balance - paymentAmount;

        printf("%03d %7.2f %5.2f %6.2f %7.2f\n", month, initial, interestAccrued, paymentAmount, balance);

        initial = balance;
    }

    return 0;
}