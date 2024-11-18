#include <stdio.h>
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int last1 = arr1[n1 - 1];
    for (int i = n1 - 1; i > 0; i--) {
        arr1[i] = arr1[i - 1];
    }
    arr1[0] = last1;
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    int arr2[] = {2, 3, 4, 5, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int last2 = arr2[n2 - 1];
    for (int i = n2 - 1; i > 0; i--) {
        arr2[i] = arr2[i - 1];
    }
    arr2[0] = last2;
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}