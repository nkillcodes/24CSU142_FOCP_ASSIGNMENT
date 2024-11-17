//WAP to check whether number is Perfect Number or not.(To check perfect number, we have to find all divisors of that number and find their sum, if sum of divisors is equal to number it means number is Perfect Number.)
#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num && num != 0) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }
    return 0;
}