#include <stdio.h>

int main() {
    int amount, n_500, n_100, n_50, n_20, n_10, n_5, n_2, n_1;
    
    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("\nEnter number of notes:\n");
    printf("500: "); scanf("%d", &n_500);
    printf("100: "); scanf("%d", &n_100);
    printf("50: "); scanf("%d", &n_50);
    printf("20: "); scanf("%d", &n_20);
    printf("10: "); scanf("%d", &n_10);
    printf("5: "); scanf("%d", &n_5);
    printf("2: "); scanf("%d", &n_2);
    printf("1: "); scanf("%d", &n_1);

    int total_amount = (n_500 * 500) + (n_100 * 100) + (n_50 * 50) + (n_20 * 20) + 
                     (n_10 * 10) + (n_5 * 5) + (n_2 * 2) + n_1;
    
    if (total_amount >= amount) {
        printf("\nFarhan can pay the bill by using the following counts of different notes:\n");
        int us_500 = (amount / 500) <= n_500 ? (amount / 500) : n_500;
        amount -= us_500 * 500;
        
        int us_100 = (amount / 100) <= n_100 ? (amount / 100) : n_100;
        amount -= us_100 * 100;
        
        int us_50 = (amount / 50) <= n_50 ? (amount / 50) : n_50;
        amount -= us_50 * 50;
        
        int us_20 = (amount / 20) <= n_20 ? (amount / 20) : n_20;
        amount -= us_20 * 20;
        
        int us_10 = (amount / 10) <= n_10 ? (amount / 10) : n_10;
        amount -= us_10 * 10;
        
        int us_5 = (amount / 5) <= n_5 ? (amount / 5) : n_5;
        amount -= us_5 * 5;
        
        int us_2 = (amount / 2) <= n_2 ? (amount / 2) : n_2;
        amount -= us_2 * 2;
        
        int us_1 = amount;

        printf("500: %d\n", us_500);
        printf("100: %d\n", us_100);
        printf("50: %d\n", us_50);
        printf("20: %d\n", us_20);
        printf("10: %d\n", us_10);
        printf("5: %d\n", us_5);
        printf("2: %d\n", us_2);
        printf("1: %d\n", us_1);
    } else {
        printf("\nFarhan cannot pay the bill with the available notes.\n");
    }
    
    return 0;
}
