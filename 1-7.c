// WAP for Binary to Decimal conversion & Decimal to Binary for a given number as per user’s choice.
#include <stdio.h>
int main() {
    int ch, n, dec = 0, bin = 0, rem = 0, p = 1;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nChoose: ");
    scanf("%d", &ch);
    if (ch == 1) {
        printf("Enter binary number: ");
        scanf("%d", &n);
        while (n > 0) {
            rem = n % 10;
            dec += rem * p;
            n /= 10;
            p *= 2;
        }
        printf("Decimal: %d\n", dec);
    } else if (ch == 2) {
        printf("Enter decimal number: ");
        scanf("%d", &n);
        while (n > 0) {
            rem = n % 2;
            bin += rem * p;
            n /= 2;
            p *= 10;
        }
        printf("Binary: %d\n", bin);
    } else {
        printf("Invalid choice\n");
    }
    return 0;
}