#include <stdio.h>
#include <math.h>

int main(){
    const double money = 545.19;
    int choice;
    double withdraw;

    printf("\nPlease choose, what you want to do\n1. Withdraw\n2. Show account status\n:");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nHow much money do you want to withdraw from the bank account?\n: ");
        scanf("%lf", &withdraw);
        if (withdraw > money) {
            printf("\nYou cannot withdraw %.2lf. You don't have enought on your bank account\n", withdraw);
        } else {
            printf("\nWithdraw completed. %.2lf left on you bank account.\n", money - withdraw);
        }
    } else if(choice == 2) {
        printf("\nYour bank account status: %lf\n", money);
    } else {
        printf("\nThere is no such option\n");
    }
}