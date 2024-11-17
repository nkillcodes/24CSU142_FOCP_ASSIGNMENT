#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Prime elements are:\n");
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int isPrime = 1;
        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime) {
            printf("%d\n", num);
        }
    }
    return 0;
}